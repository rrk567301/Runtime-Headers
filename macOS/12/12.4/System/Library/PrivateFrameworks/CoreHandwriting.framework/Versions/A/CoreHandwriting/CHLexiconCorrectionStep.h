@class CHStringOVSChecker, CHSpellChecker, NSLocale, NSDictionary, NSCharacterSet;

@interface CHLexiconCorrectionStep : CHPostprocessingStep

@property (nonatomic) BOOL shouldAutoCapitalize;
@property (retain, nonatomic) NSLocale *locale;
@property (nonatomic) const struct _LXLexicon { } *staticLexicon;
@property (nonatomic) const struct _LXLexicon { } *customLexicon;
@property (nonatomic) const struct _LXLexicon { } *phraseLexicon;
@property (nonatomic) const struct _LXLexicon { } *customPhraseLexicon;
@property (nonatomic) void *lmVocabulary;
@property (retain, nonatomic) CHStringOVSChecker *ovsStringChecker;
@property (readonly, nonatomic) int autoCapitalizationMode;
@property (nonatomic) BOOL shouldAutoCorrect;
@property (retain, nonatomic) CHSpellChecker *spellChecker;
@property (retain, nonatomic) NSDictionary *textReplacements;
@property (retain, nonatomic) NSCharacterSet *consumableStrokesCharSet;
@property (retain, nonatomic) NSCharacterSet *fullWidthPunctuationThatExpectsUppercaseAfter;
@property (retain, nonatomic) NSCharacterSet *punctuationThatExpectsUppercaseAfter;

- (void)dealloc;
- (void).cxx_destruct;
- (id)process:(id)a0 options:(id)a1;
- (id)initWithAutoCapitalizationMode:(int)a0 shouldAutoCorrect:(BOOL)a1 shouldAutoCapitalize:(BOOL)a2 locale:(id)a3 staticLexicon:(struct _LXLexicon { } *)a4 customLexicon:(struct _LXLexicon { } *)a5 phraseLexicon:(struct _LXLexicon { } *)a6 customPhraseLexicon:(struct _LXLexicon { } *)a7 spellChecker:(id)a8 lmVocabulary:(void *)a9 ovsStringChecker:(id)a10 textReplacements:(id)a11;
- (id)getSpellCorrectedToken:(id)a0 contextBeforeToken:(id)a1;
- (id)applyLexiconCorrections:(id)a0 shouldCapitalizeWord:(BOOL)a1 shouldSkipEntryCorrection:(BOOL)a2 outBestTokenIndex:(long long *)a3 bestLexiconTokenScore:(double *)a4 textReplacements:(id)a5 contextBeforeToken:(id)a6 allowSpellChecker:(BOOL)a7;
- (id)createPseudoTokensFromToken:(id)a0;
- (id)applyCorrectionsOnSingleToken:(id)a0 isFirstToken:(BOOL)a1 contextBeforeToken:(id)a2 shouldCapitalizeGivenHistory:(BOOL)a3 textReplacements:(id)a4 isSingleIsolatedCharacter:(BOOL)a5 allowSpellChecker:(BOOL)a6;
- (id)applyCorrectionsAcrossToken:(id)a0 isFirstToken:(BOOL)a1 contextBeforeToken:(id)a2 shouldCapitalizeGivenHistory:(BOOL)a3 textReplacements:(id)a4 isSingleIsolatedCharacter:(BOOL)a5;

@end
