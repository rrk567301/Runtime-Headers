@interface MusicUI.OnboardingView : NSVisualEffectView {
    void /* unknown type, empty encoding */ topContentOffset;
    void /* unknown type, empty encoding */ bubblesView;
    void /* unknown type, empty encoding */ overhangMask;
    void /* unknown type, empty encoding */ headerView;
    void /* unknown type, empty encoding */ footerView;
}

@property (nonatomic, readonly) BOOL flipped;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layout;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
