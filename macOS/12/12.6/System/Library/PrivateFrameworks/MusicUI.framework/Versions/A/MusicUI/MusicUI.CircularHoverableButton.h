@interface MusicUI.CircularHoverableButton : MusicUI.HoverableButton {
    void /* unknown type, empty encoding */ symbolSize;
    void /* unknown type, empty encoding */ symbolImageView;
    void /* unknown type, empty encoding */ insets;
    void /* unknown type, empty encoding */ blurView;
}

@property (nonatomic, readonly) BOOL allowsVibrancy;

- (id)init;
- (void).cxx_destruct;
- (void)layout;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)drawFocusRingMask;

@end
