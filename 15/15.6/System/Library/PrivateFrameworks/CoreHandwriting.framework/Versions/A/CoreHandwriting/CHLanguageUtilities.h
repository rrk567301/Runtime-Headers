@interface CHLanguageUtilities : NSObject

+ (double)characterLMLogProbabilityForString:(id)a0 characterLM:(id)a1;
+ (double)computeEditPenalizationFromString:(id)a0 toReferenceString:(id)a1 withSuffix:(id)a2 withCaseSensitivity:(char)a3 withFirstLetterCaseSensitivity:(char)a4 withDiacriticSensitivity:(char)a5 withDiacriticsCharSet:(id)a6 withConsumableStrokesCharSet:(id)a7 outputSuffix:(id *)a8 lexiconExtraCharacters:(id *)a9 firstLetterCaseFlipped:(char *)a10;
+ (char)findPartialMatchInPhraseLexicon:(struct _LXLexicon { } *)a0 token:(id)a1 contextBeforeToken:(id)a2;
+ (char)isMecabraConversionCandidateAllowed:(id)a0;
+ (id)lexiconCorrectionsForToken:(id)a0 locale:(id)a1 lexicon:(struct _LXLexicon { } *)a2 lmVocabulary:(void *)a3 ovsStringChecker:(id)a4 textReplacements:(id)a5 consumableStrokesSet:(id)a6 minimumTokenScore:(double)a7 activeHistoryRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a8 outBestTokenScore:(double *)a9 shouldCapitalizeWord:(char)a10 shouldSkipEntryCorrection:(char)a11 allowFullCapsCorrections:(char)a12 minimalLengthForLowConfidenceCorrections:(long long)a13 lowConfidenceThreshold:(double)a14 minimalLengthForCustomCapitalizationCorrections:(long long)a15 outBestTokenIndex:(long long *)a16 outFoundTokenInLexicon:(char *)a17 outFoundCaseMatchingTokenInLexicon:(char *)a18 outCorrectionFromOutOfContextEntry:(char *)a19;
+ (char)lexiconHasEntryForString:(id)a0 withLexicon:(struct _LXLexicon { } *)a1 outHasMatchingString:(char *)a2;
+ (id)mecabraTokenizationAndKanaConversionForString:(id)a0 mecabraEngine:(struct __Mecabra { } *)a1 contextRef:(struct __MecabraContext { } *)a2 leftCandidateRef:(void *)a3 alternativeCandidateLimit:(long long)a4;
+ (unsigned int)normalizeLMTokenIDForWord:(id)a0 tokenID:(unsigned int)a1 isFromPattern:(char)a2 score:(double *)a3 wordLanguageModel:(void *)a4;
+ (id)performInverseBiDiForNumeric:(id)a0 isRTLContext:(char)a1;
+ (char)shouldCapitalizeGivenHistory:(id)a0 shouldAutoCapitalizeSetting:(char)a1 locale:(id)a2;
+ (id)splitStringIntoSubtokensForLexicon:(id)a0 minLength:(long long)a1;
+ (unsigned int)tokenIDForString:(id)a0 withLexicon:(struct _LXLexicon { } *)a1;
+ (id)tokensRangesForString:(id)a0 outTokenIDs:(id *)a1 wordLanguageModel:(void *)a2;
+ (id)transformCyrillicToLatin:(id)a0;
+ (id)transformLatinToCyrillic:(id)a0;
+ (id)transformString:(id)a0 usingConfusions:(id)a1;
+ (id)transliterateStringUsingICUTransliterator:(id)a0 _icuTransliterator:(void **)a1;

@end
