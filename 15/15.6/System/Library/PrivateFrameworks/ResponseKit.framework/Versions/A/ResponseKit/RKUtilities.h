@interface RKUtilities : NSObject

+ (char)RKRepairStringNeeded:(id)a0;
+ (id)addLikelySubtagsForLocaleIdentifier:(id)a0;
+ (id)canonicalLanguageAndScriptCodeIdentifierForIdentifier:(id)a0;
+ (id)getDeviceModel;
+ (char)isDeviceSupportedForLSTMBasedLanguageIdentification:(id)a0;
+ (char)isLanguageSupportedByNSLinguisticTaggerForLanguageIdentification:(id)a0;
+ (char)isLanguageSupportedBySmartPunctuation:(id)a0;
+ (char)isLanguageSupportedForLemmatization:(id)a0;
+ (char)isLanguageSupportedForPartOfSpeech:(id)a0;
+ (id)normalizeForPersonalization:(id)a0;
+ (char)prefixInArray:(id)a0 withArray:(id)a1;
+ (id)removeEmoji:(id)a0;
+ (id)removeMultipleWhitespaces:(id)a0;
+ (id)stripDiacritics:(id)a0;
+ (id)stripEmojiSkinTones:(id)a0;
+ (id)stripPunctuations:(id)a0;
+ (char)suffixInArray:(id)a0 withArray:(id)a1;
+ (char)tokenInArray:(id)a0 withArray:(id)a1;

@end
