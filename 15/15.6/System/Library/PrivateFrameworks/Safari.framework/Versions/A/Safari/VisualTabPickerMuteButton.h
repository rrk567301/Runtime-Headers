@interface VisualTabPickerMuteButton : NSButton

@property (nonatomic) long long muteButtonState;

- (id)init;
- (char)allowsVibrancy;
- (void)_updateImageAndAccessibilityLabel;

@end
