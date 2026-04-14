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

- (void)dealloc;
- (id)name;
- (id)init;
- (id)type;
- (struct CGPoint { double x0; double x1; })position;
- (void)setPosition:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)composition;
- (BOOL)hasGizmo;
- (void)setComposition:(id)a0;
- (id)SFElement;
- (void)setSFElement:(id)a0;
- (id)gizmoIcon;

@end
