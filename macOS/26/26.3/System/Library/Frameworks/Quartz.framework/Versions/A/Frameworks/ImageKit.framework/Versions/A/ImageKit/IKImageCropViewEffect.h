@class NSString, IKSFElement;

@interface IKImageCropViewEffect : NSObject <IKImageGizmo> {
    IKSFElement *_sfElement;
    struct CGPoint { double x; double y; } _positionInView;
    id _composition;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)resourceImageNamed:(id)a0;

- (id)type;
- (void)setPosition:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })position;
- (id)init;
- (id)name;
- (id)composition;
- (void)dealloc;
- (BOOL)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)setComposition:(id)a0;
- (id)SFElement;
- (id)gizmoIcon;
- (BOOL)hasGizmo;
- (void)setSFElement:(id)a0;

@end
