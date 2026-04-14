@interface SCRMailApplication : SCRApplication

- (BOOL)handleRotorContentChooserMoveInDirection:(long long)a0 request:(id)a1;
- (void)_keyboardFocusDidChange:(id)a0;
- (BOOL)_isDeepKeyboardChildSynchronizedWithVoiceOver:(id)a0;
- (id)axIdentifierForSectionType:(id)a0;
- (BOOL)isMailApplication;

@end
