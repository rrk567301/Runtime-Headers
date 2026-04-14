@interface MusicUI_Mac.ExplicitBadgeTextContainer : NSView {
    void /* unknown type, empty encoding */ stringValue;
    void /* unknown type, empty encoding */ isSelected;
    void /* unknown type, empty encoding */ textColor;
    void /* unknown type, empty encoding */ textFont;
    void /* unknown type, empty encoding */ badgeColor;
    void /* unknown type, empty encoding */ badgeContext;
    void /* unknown type, empty encoding */ alignment;
    void /* unknown type, empty encoding */ layoutDirection;
    void /* unknown type, empty encoding */ maximumNumberOfLines;
    void /* unknown type, empty encoding */ isFavorited;
    void /* unknown type, empty encoding */ explicitBadgeContainedLabel;
    void /* unknown type, empty encoding */ badge;
}

@property (nonatomic, readonly) BOOL flipped;

- (BOOL)becomeFirstResponder;
- (void)layout;
- (void)viewDidMoveToSuperview;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (id)initWithCoder:(id)a0;

@end
