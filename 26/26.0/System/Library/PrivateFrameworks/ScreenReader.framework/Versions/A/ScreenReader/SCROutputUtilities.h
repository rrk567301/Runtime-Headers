@interface SCROutputUtilities : NSObject

+ (BOOL)handleSpeechEventForAction:(id)a0 isSpeechEnabled:(BOOL)a1;
+ (BOOL)isCharacterSupported:(unsigned int)a0 characterRange:(id)a1;
+ (BOOL)isLiteralCharactersAction:(id)a0;
+ (BOOL)isTextAttributeAction:(id)a0;
+ (void)makeNumberSubstitutionsInAction:(id)a0;
+ (float)relativePitchChange:(id)a0 key:(id)a1;
+ (void)replaceMathCharactersInAction:(id)a0;
+ (void)replaceStringInAction:(id)a0 string:(id)a1;
+ (void)replaceUnspeakableAction:(id)a0;
+ (void)replaceWithUserSubstitutions:(id)a0;
+ (BOOL)shouldSpeakNumberAsDigit:(id)a0;
+ (id)updatePunctuationSettings:(id)a0;
+ (id)voicePrefsForCategory:(id)a0;

@end
