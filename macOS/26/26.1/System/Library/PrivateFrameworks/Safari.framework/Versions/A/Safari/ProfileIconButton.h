@class CAShapeLayer;

@interface ProfileIconButton : RolloverTrackingButton {
    CAShapeLayer *_shapeLayer;
    CAShapeLayer *_borderLayer;
}

- (void)layout;
- (id)_tintColor;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (void)setState:(long long)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (id)_buttonContentTintColor;
- (void)_commonProfileIconButtonInit;
- (id)_shapeLayerFillColor;
- (void)mouseEnteredOrExited:(BOOL)a0;

@end
