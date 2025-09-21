@interface MusicUI.CircularHoverableButton : MusicUI.HoverableButton {
    void /* unknown type, empty encoding */ symbolSize;
    void /* unknown type, empty encoding */ symbolImageView;
    void /* unknown type, empty encoding */ insets;
    void /* unknown type, empty encoding */ blurView;
}

@property (nonatomic, readonly) char allowsVibrancy;

- (void).cxx_destruct;
- (void)layout;
- (id)accessibilityLabel;
- (char)becomeFirstResponder;
- (void)drawFocusRingMask;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)resignFirstResponder;

@end
