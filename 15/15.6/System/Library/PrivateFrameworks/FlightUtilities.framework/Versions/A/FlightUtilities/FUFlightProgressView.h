@class CAGradientLayer, CAShapeLayer, CALayer, FUStyleProvider;

@interface FUFlightProgressView : NSView {
    double _progress;
    FUStyleProvider *_provider;
    CALayer *_plane;
    CAShapeLayer *_fullArc;
    CAShapeLayer *_partialArc;
    CAShapeLayer *_startDot;
    CAShapeLayer *_endDot;
    CALayer *_planeShadow;
    CALayer *_blurredShadow;
    CAShapeLayer *_shadowArc;
    CAGradientLayer *_bottomLayer;
    char _layersCreated;
    char _blurEnabled;
    char _blurPostponed;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setProgress:(double)a0;
- (void)updateLayer;
- (char)wantsUpdateLayer;
- (void)setStyleProvider:(id)a0;
- (struct CGPoint { double x0; double x1; })arcPointForProgress:(double)a0 radius:(double)a1 maxAngleFromVertical:(double)a2 offset:(struct CGPoint { double x0; double x1; })a3;
- (void)enableBlur;
- (void)enableBlur:(char)a0;
- (void)prepareForLayers;

@end
