@interface UAAccessibilityReaderSettings : UASettings

@property (class, readonly, nonatomic) UAAccessibilityReaderSettings *shared;

@property (readonly, nonatomic) BOOL accessibilityReaderIsSupported;
@property (nonatomic) BOOL accessibilityReaderEnabled;
@property (nonatomic) BOOL accessibilityReaderHotkeyEnabled;
@property (nonatomic) BOOL hasDefaultHotkey;
@property (nonatomic) BOOL autoStartSpeaking;

+ (id)keyPathsForValuesAffectingAccessibilityReaderEnabled;
+ (id)keyPathsForValuesAffectingAccessibilityReaderHotkeyEnabled;
+ (id)keyPathsForValuesAffectingAutoStartSpeaking;

- (id)_init;
- (void)activateReader;
- (BOOL)_isHotkeyComboInKeyboardEvent:(id)a0 hotkeyIdentifier:(id)a1;
- (void)initializeReaderHotkeys;
- (BOOL)isViewInReaderHotkeyDown:(id)a0;

@end
