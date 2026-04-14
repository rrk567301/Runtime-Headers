@interface SCRLanguageUtilities : NSObject

+ (BOOL)systemLanguageIDSubsumesLanguageID:(id)a0;
+ (id)nilOutIfSystemLanguageID:(id)a0;
+ (id)findClosestMatchForLanguageID:(id)a0 inList:(id)a1;
+ (BOOL)isLanguageID:(id)a0 subsumedByLanguageID:(id)a1;
+ (BOOL)languageIDContainsAreaCode:(id)a0;
+ (id)languageIDFromLocaleID:(id)a0 matchingLanguageID:(id)a1;
+ (id)phoneticDescriptionForWord:(id)a0 locale:(id)a1;
+ (BOOL)canSpeakString:(id)a0 withVoiceID:(id)a1;
+ (id)primaryLanguageForString:(id)a0;
+ (id)languageTagsForString:(id)a0;
+ (id)markupLanguagesForAttributedString:(id)a0;
+ (BOOL)isSupportedIdentificationLanguage:(id)a0;

@end
