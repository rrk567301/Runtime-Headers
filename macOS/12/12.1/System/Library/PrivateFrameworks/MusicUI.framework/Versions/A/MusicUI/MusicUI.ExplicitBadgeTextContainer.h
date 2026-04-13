@interface MusicUI.ExplicitBadgeTextContainer : NSView {
    void /* unknown type, empty encoding */ stringValue;
    void /* unknown type, empty encoding */ isSelected;
    void /* unknown type, empty encoding */ textColor;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ explicitBadgeView;
}

@property (nonatomic, readonly) BOOL flipped;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layout;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToSuperview;

@end
