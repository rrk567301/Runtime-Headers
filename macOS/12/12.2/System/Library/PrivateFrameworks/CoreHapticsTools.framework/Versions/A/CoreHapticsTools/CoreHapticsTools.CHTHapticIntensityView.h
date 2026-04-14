@interface CoreHapticsTools.CHTHapticIntensityView : CoreHapticsTools.CHTView {
    void /* unknown type, empty encoding */ paramCurveOverlayLayer;
    void /* unknown type, empty encoding */ kvoToken;
    void /* unknown type, empty encoding */ overlayParamCurve;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic, readonly) BOOL wantsDefaultClipping;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)makeBackingLayer;

@end
