@interface MusicUI_Mac.CircularHoverableButton : MusicUI_Mac.HoverableButton {
    void /* unknown type, empty encoding */ symbolSize;
    void /* unknown type, empty encoding */ symbolImageView;
    void /* unknown type, empty encoding */ insets;
    void /* unknown type, empty encoding */ blurView;
}

@property (nonatomic, readonly) BOOL allowsVibrancy;

- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)layout;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawFocusRingMask;

@end
