@interface TPSKeyboardUtilities : NSObject

+ (char)isDictationEnabled;
+ (id)enabledDictationLanguages;
+ (char)isDictationSelectedForLanguage:(id)a0;
+ (id)_variantForInputMode:(id)a0;
+ (char)hasCustomizedKeyboard;
+ (id)installedInputModes;
+ (char)isAutoCorrectionEnabled;
+ (char)isExtendedSuggestionSupportedForInputMode:(id)a0;
+ (char)isHandwritingEnabledForInputMode:(id)a0;
+ (char)isInputModeInstalledForLanguage:(id)a0;

@end
