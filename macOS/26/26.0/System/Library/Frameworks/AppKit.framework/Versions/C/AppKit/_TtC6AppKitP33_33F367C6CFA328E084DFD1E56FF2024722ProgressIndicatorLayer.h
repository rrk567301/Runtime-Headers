@interface _TtC6AppKitP33_33F367C6CFA328E084DFD1E56FF2024722ProgressIndicatorLayer : CALayer <CAAnimationDelegate> {
    void /* unknown type, empty encoding */ isIndeterminate;
    void /* unknown type, empty encoding */ progressForCurrentAnimation;
    void /* unknown type, empty encoding */ previousProgress;
    void /* unknown type, empty encoding */ progress;
    void /* unknown type, empty encoding */ track;
    void /* unknown type, empty encoding */ pillBaseLayer;
    void /* unknown type, empty encoding */ pillClipLayer;
    void /* unknown type, empty encoding */ indeterminatePill;
    void /* unknown type, empty encoding */ determinatePill;
    void /* unknown type, empty encoding */ determinateAnimationKey;
    void /* unknown type, empty encoding */ indeterminateAnimationKey;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ accentColor;
    void /* unknown type, empty encoding */ indicatorAppearance;
    void /* unknown type, empty encoding */ isRTL;
    void /* unknown type, empty encoding */ initialSquashTransform;
}

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)layoutSublayers;
- (id)initWithLayer:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
