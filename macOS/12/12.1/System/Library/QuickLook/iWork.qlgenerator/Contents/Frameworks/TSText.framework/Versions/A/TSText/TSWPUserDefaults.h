@interface TSWPUserDefaults : NSObject

@property (class, nonatomic) BOOL preferMathTypeForEditingEquations;

+ (void)initialize;
+ (unsigned long long)minimumFontSize;
+ (BOOL)allowsFontSmoothing;
+ (BOOL)underlineLinks;
+ (void)setUnderlineLinks:(BOOL)a0;
+ (unsigned long long)maximumFontSize;
+ (id)invisiblesColor;
+ (BOOL)p_UserDefaultSet:(id)a0 force:(BOOL)a1;
+ (void)setAutomaticallyDetectLinks:(BOOL)a0;
+ (void)setAutomaticallyDetectLists:(BOOL)a0;
+ (void)setSuperscriptNumericalSuffixes:(BOOL)a0;
+ (void)setSpellCheckingEnabled:(BOOL)a0;
+ (BOOL)automaticallyDetectLinks;
+ (BOOL)automaticallyDetectLists;
+ (BOOL)superscriptNumericalSuffixes;
+ (BOOL)spellCheckingEnabled;
+ (void)setInvisiblesColor:(id)a0;
+ (void)registerUserDefaults:(BOOL)a0;
+ (BOOL)p_cachedBoolForKey:(id)a0;
+ (BOOL)spellCheckingAllowed;
+ (id)quotesArrayForLanguage:(id)a0;
+ (id)doubleQuotesOptions;
+ (id)singleQuotesOptions;
+ (id)appReplacementsDictionary;
+ (BOOL)automaticTextReplacement;
+ (id)p_caseInsensitiveDictionary:(id)a0 mergedWithDictionary:(id)a1;
+ (BOOL)automaticallyFormatFractions;
+ (void)p_defaultsChanged:(id)a0;
+ (BOOL)automaticallyDetectPhoneLinks;
+ (BOOL)shouldShowInvisibles;
+ (BOOL)automaticDashSubstitution;
+ (BOOL)automaticQuoteSubstitution;
+ (BOOL)grammarChecking;
+ (BOOL)automaticSpellingCorrection;
+ (void)setAutomaticSpellingCorrection:(BOOL)a0;
+ (BOOL)automaticCapitalization;
+ (void)setAutomaticCapitalization:(BOOL)a0;
+ (id)ignoredWordsArray;
+ (void)setIgnoredWordsArray:(id)a0;
+ (BOOL)addIgnoredWord:(id)a0;
+ (BOOL)hasPreferMathTypeForEditingEquations;
+ (long long)doubleQuotes;
+ (long long)singleQuotes;
+ (void)setDoubleQuotes:(long long)a0;
+ (void)setSingleQuotes:(long long)a0;
+ (id)replacementsDictionaryAllowingFractions:(BOOL)a0;
+ (void)setReplacementsDictionary:(id)a0;
+ (void)setAutomaticallyDetectPhoneLinks:(BOOL)a0;
+ (void)setAutomaticallyFormatFractions:(BOOL)a0;
+ (void)setAutomaticDashSubstitution:(BOOL)a0;
+ (void)setAutomaticQuoteSubstitution:(BOOL)a0;
+ (void)setAutomaticTextReplacement:(BOOL)a0;
+ (void)setGrammarChecking:(BOOL)a0;

@end
