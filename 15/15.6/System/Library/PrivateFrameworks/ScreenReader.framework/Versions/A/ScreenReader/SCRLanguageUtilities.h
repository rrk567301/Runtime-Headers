@interface SCRLanguageUtilities : NSObject

+ (id)LanguageCanonicalFormToGeneralLanguage:(id)a0;
+ (char)canSpeakString:(id)a0 withLanguageID:(id)a1;
+ (char)canSpeakString:(id)a0 withVoiceID:(id)a1;
+ (id)findClosestMatchForLanguageID:(id)a0 inList:(id)a1;
+ (id)generalLanguageID:(id)a0;
+ (char)isLanguageID:(id)a0 subsumedByLanguageID:(id)a1;
+ (char)isSameLanguage:(id)a0 asLanguage:(id)a1;
+ (char)isSupportedIdentificationLanguage:(id)a0;
+ (char)isTaggedAttributedString:(id)a0;
+ (char)languageIDContainsAreaCode:(id)a0;
+ (id)languageIDFromLocaleID:(id)a0 matchingLanguageID:(id)a1;
+ (id)languageIDFromVoiceID:(id)a0;
+ (id)languageTagsForString:(id)a0;
+ (id)markupLanguagesForAttributedString:(id)a0;
+ (id)nilOutIfSystemLanguageID:(id)a0;
+ (id)phoneticDescriptionForWord:(id)a0 locale:(id)a1;
+ (id)primaryLanguageForString:(id)a0;
+ (char)shouldDetectLanguage:(id)a0 defaultLanguage:(id)a1 variants:(id)a2;
+ (char)shouldMarkupString:(id)a0 defaultLanguage:(id)a1 variants:(id)a2;
+ (char)shouldNotUsePrimaryLanguage:(id)a0 defaultLanguage:(id)a1;
+ (char)systemLanguageIDSubsumesLanguageID:(id)a0;
+ (id)tagAttributedString:(id)a0 appLanguage:(id)a1;

@end
