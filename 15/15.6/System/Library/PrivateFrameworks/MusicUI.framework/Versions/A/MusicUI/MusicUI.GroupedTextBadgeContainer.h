@interface MusicUI.GroupedTextBadgeContainer : NSView {
    void /* unknown type, empty encoding */ stringValue;
    void /* unknown type, empty encoding */ trailingBadgeValues;
    void /* unknown type, empty encoding */ primaryLabel;
    void /* unknown type, empty encoding */ trailingBadgeTextFields;
}

@property (nonatomic, readonly) char flipped;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isFlipped;
- (void)viewDidMoveToSuperview;

@end
