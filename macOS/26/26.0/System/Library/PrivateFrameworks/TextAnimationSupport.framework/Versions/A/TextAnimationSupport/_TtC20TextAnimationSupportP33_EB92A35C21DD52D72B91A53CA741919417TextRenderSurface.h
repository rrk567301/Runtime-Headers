@class CALayer;

@interface _TtC20TextAnimationSupportP33_EB92A35C21DD52D72B91A53CA741919417TextRenderSurface : NSObject <NSCustomTextSurface, CALayerDelegate> {
    void /* unknown type, empty encoding */ _layer;
    void /* unknown type, empty encoding */ renderer;
    void /* unknown type, empty encoding */ yDisplacement;
}

@property (nonatomic, readonly) CALayer *layer;

- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustedClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })adjustedContainerOrigin:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustedLayoutFragmentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
