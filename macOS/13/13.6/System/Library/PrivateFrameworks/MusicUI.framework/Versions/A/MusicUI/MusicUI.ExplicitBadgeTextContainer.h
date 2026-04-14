@interface MusicUI.ExplicitBadgeTextContainer : NSView {
    void /* unknown type, empty encoding */ stringValue;
    void /* unknown type, empty encoding */ isSelected;
    void /* unknown type, empty encoding */ textColor;
    void /* unknown type, empty encoding */ explicitBadgeLabel;
    void /* unknown type, empty encoding */ explicitBadgeView;
}

@property (nonatomic, readonly) BOOL flipped;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (BOOL)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)viewDidMoveToSuperview;

@end
