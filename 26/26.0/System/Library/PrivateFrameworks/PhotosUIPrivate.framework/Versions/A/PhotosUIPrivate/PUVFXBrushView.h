@class NSString, CALayer, PUBrushEffectOverlay;
@protocol PUVFXBrushViewDelegate;

@interface PUVFXBrushView : NSView <CAAnimationDelegate> {
    CALayer *_brushMaskLayer;
    PUBrushEffectOverlay *_brushOverlay;
}

@property (weak, nonatomic) id<PUVFXBrushViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToSuperview;
- (void)layout;
- (void)setMask:(struct CGImage { } *)a0;
- (void)viewDidMoveToSuperview;
- (void).cxx_destruct;
- (void)_layoutSubviews;
- (void)setBrushRadius:(double)a0;
- (void)_didMoveToSuperview;
- (id)brushOverlay;
- (void)endEmission;
- (void)setBrushPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)startEmissionAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
