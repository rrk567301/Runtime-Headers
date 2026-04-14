@class NSString, NSMutableDictionary, TIInputMode;

@interface TIKeyboardFeatureSpecialization : NSObject {
    NSString *m_softwareLayout;
    struct USet { } *m_precomposedCharacterSet;
    struct USet { } *m_acceptableCharacterSet;
    NSMutableDictionary *m_compositionMaps;
    NSMutableDictionary *m_reverseCompositionMaps;
}

@property (readonly, nonatomic) TIInputMode *inputMode;
@property (nonatomic) long long currentUserInterfaceIdiom;
@property (nonatomic) BOOL useRelaxedOVSPolicy;
@property (nonatomic) BOOL skipCandidateQualityFilter;

+ (struct USet { } *)createAcceptableCharacterSetForKeyboardLocale:(id)a0;
+ (id)createSpecializationForInputMode:(id)a0;
+ (id)findPrefixMatchesFor:(id)a0 fromIndex:(unsigned long long)a1 usingCompositionMap:(id)a2 matchesInputAsPrefix:(BOOL)a3;

- (id)terminatorsDeletingAutospace;
- (BOOL)canHandleKeyHitTest;
- (id)wordSeparator;
- (id)replacementForDoubleSpace;
- (id)wordCharacters;
- (id)spaceDeletingCharacters;
- (void)dealloc;
- (id)sentencePrefixingCharacters;
- (id)externalStringToInternal:(id)a0;
- (id)sentenceTrailingCharacters;
- (BOOL)shouldConvertAutocorrectionCandidatesToFullWidth;
- (BOOL)deletesByComposedCharacterSequence;
- (id)keyboardBehaviors;
- (id)wordMedialPunctuationCharacters;
- (id)allAccentKeyStrings;
- (id)nonstopPunctuationCharacters;
- (id)sentenceDelimitingCharacters;
- (BOOL)shouldAddModifierSymbolsToWordCharacters;
- (BOOL)doesComposeText;
- (id)layoutTags;
- (id)internalStringToExternal:(id)a0;
- (BOOL)shouldExtendPriorWord;
- (BOOL)acceptsCharacter:(unsigned int)a0;
- (id)supplementalLexiconWordExtraCharacters;
- (void).cxx_destruct;
- (BOOL)supportsReversionUI;
- (id)initWithInputMode:(id)a0;
- (unsigned long long)maxPriorWordTokensAfterTrimming;
- (id)accentKeyStringForKeyboardState:(id)a0;
- (BOOL)allowsAutocorrectionOfValidWords;
- (BOOL)canConvertExternalToExternal;
- (id)compositionMapForLayout:(id)a0 reverse:(BOOL)a1;
- (struct USet { } *)createAcceptableCharacterSet;
- (void *)createInputManager:(id)a0;
- (id)dictionaryInputMode;
- (BOOL)dictionaryUsesExternalEncoding;
- (id)externalStringToInternal:(id)a0 byConvertingEagerly:(BOOL)a1;
- (id)findPrefixMatchesFor:(id)a0 fromIndex:(unsigned long long)a1 usingCompositionMap:(id)a2 matchesInputAsPrefix:(BOOL)a3;
- (id)getComposedStringFor:(id)a0 usingMap:(id)a1;
- (id)getComposedStringFor:(id)a0 usingMap:(id)a1 byConvertingEagerly:(BOOL)a2;
- (const struct USet { } *)precomposedCharacterSet;
- (void)reloadPrecomposedCharacterSetWithIdiom:(long long)a0;
- (BOOL)shouldClearInput:(id)a0;
- (BOOL)shouldConvertCandidateToExternal;
- (BOOL)shouldConvertEagerly;
- (BOOL)shouldLearnLowercaseAtBeginningOfSentence;
- (void)specializeInputManager:(void *)a0 forLayoutState:(id)a1;
- (BOOL)supportsLearning;

@end
