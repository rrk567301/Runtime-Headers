@interface VisualTabPickerMuteButton : NSButton

@property (nonatomic) long long muteButtonState;

- (BOOL)allowsVibrancy;
- (id)init;
- (void)_updateImageAndAccessibilityLabel;

@end
