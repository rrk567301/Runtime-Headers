@class NSString, NSDictionary, NSArray;

@interface NLLanguageRecognizer : NSObject {
    void *_identifier;
    NSArray *_languageConstraints;
    NSDictionary *_languageHints;
}

@property (readonly, copy, nonatomic) NSString *dominantLanguage;
@property (copy, nonatomic) NSDictionary *languageHints;
@property (copy, nonatomic) NSArray *languageConstraints;

+ (id)dominantLanguageForString:(id)a0;
+ (BOOL)_candidate:(id)a0 matchesDominantLanguage:(id)a1;
+ (id)_filteredLexiconForLanguage:(id)a0;
+ (id)_filteredLexiconForLanguage:(id)a0 waitUntilLoaded:(BOOL)a1;
+ (BOOL)_isString:(id)a0 words:(id)a1 plausiblyInLanguage:(id)a2;
+ (BOOL)_isWord:(id)a0 acceptableInLexicon:(id)a1;
+ (id)_lexiconForLanguage:(id)a0 waitUntilLoaded:(BOOL)a1;
+ (id)_loadLexiconForLanguage:(id)a0;
+ (id)_orderedCandidateLanguagesForCandidateLanguages:(id)a0 preferredLanguages:(id)a1;
+ (id)arabicCharacterContent:(id)a0;
+ (id)chineseCharacterContent:(id)a0;
+ (id)greekCharacterContent:(id)a0;
+ (id)hebrewCharacterContent:(id)a0;
+ (id)japaneseCharacterContent:(id)a0;
+ (id)koreanCharacterContent:(id)a0;
+ (id)mostAppropriateLanguageForString:(id)a0 candidateLanguages:(id)a1 preferredLanguages:(id)a2;
+ (void)prewarmDictionariesForCandidateLanguages:(id)a0 preferredLanguages:(id)a1 waitUntilLoaded:(BOOL)a2;
+ (void)releaseAllDictionaries;
+ (void)releaseDictionaries;
+ (void)releaseDictionariesExceptForLanguages:(id)a0;
+ (void)releaseDictionariesWithPreferredLanguages:(id)a0;
+ (id)specialCharacterContent:(id)a0;
+ (id)thaiCharacterContent:(id)a0;

- (void)reset;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)processString:(id)a0;
- (id)languageHypothesesWithMaximum:(unsigned long long)a0;
- (void)processString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
