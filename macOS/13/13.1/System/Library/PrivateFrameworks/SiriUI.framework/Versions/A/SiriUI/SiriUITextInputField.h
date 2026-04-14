@interface SiriUITextInputField : NSSearchField

- (id)accessibilityLabel;
- (void)awakeFromNib;
- (id)accessibilityIdentifier;
- (BOOL)becomeFirstResponder;
- (void)selectText:(id)a0;
- (BOOL)textShouldEndEditing:(id)a0;
- (void)loadTextCheckingPreferences:(id)a0;
- (void)saveTextCheckingPreferences:(id)a0;

@end
