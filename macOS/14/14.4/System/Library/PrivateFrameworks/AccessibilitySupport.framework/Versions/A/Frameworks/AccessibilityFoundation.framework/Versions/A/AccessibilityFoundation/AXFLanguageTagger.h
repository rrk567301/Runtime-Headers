@interface AXFLanguageTagger : NSObject

+ (id)_dialectWithHighestProbability:(struct { int x0; float x1; } *)a0;
+ (id)_allLangIDs;
+ (id)_createTagForContent:(id)a0 tokenRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 document:(id)a2 createdFromNewline:(BOOL)a3;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })_extendRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forContent:(id)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
+ (void)_hypothesesForContent:(id)a0 withHints:(struct { int x0; float x1; } *)a1 guesses:(struct { int x0; float x1; } *)a2;
+ (BOOL)_isNewline:(id)a0;
+ (void *)_languageTaggerForContent:(id)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })_manuallyProcessContent:(id)a0 tokenRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 currentRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
+ (void *)_scriptTaggerForContent:(id)a0;
+ (void)_tagRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 document:(id)a1 tags:(id)a2 createdFromNewline:(BOOL)a3;
+ (void *)_taggerForContent:(id)a0 tagScheme:(id)a1;
+ (id)langCodeForlangId:(int)a0;
+ (int)langIDforLangCode:(id)a0;
+ (id)languageTagsForContent:(id)a0;
+ (id)markupLanguageTagForAttributedString:(id)a0;
+ (id)primaryLanguageForContent:(id)a0;
+ (struct { int x0; float x1; } *)_calculateLanguageHintsBasedOnSystemLanguage;
+ (struct { int x0; float x1; } *)_languageHintsEvenlyDistributedWithProbability:(float)a0 excludingHints:(id)a1;

@end
