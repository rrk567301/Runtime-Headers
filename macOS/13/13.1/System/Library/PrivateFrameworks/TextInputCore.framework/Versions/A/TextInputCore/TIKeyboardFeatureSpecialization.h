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

+ (id)createSpecializationForInputMode:(id)a0;
+ (id)findPrefixMatchesFor:(id)a0 fromIndex:(unsigned long long)a1 usingCompositionMap:(id)a2 matchesInputAsPrefix:(BOOL)a3;
+ (struct USet { } *)createAcceptableCharacterSetForKeyboardLocale:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithInputMode:(id)a0;
- (BOOL)canHandleKeyHitTest;
- (BOOL)shouldExtendPriorWord;
- (id)wordSeparator;
- (id)keyboardBehaviors;
- (id)replacementForDoubleSpace;
- (BOOL)shouldAddModifierSymbolsToWordCharacters;
- (id)wordCharacters;
- (id)supplementalLexiconWordExtraCharacters;
- (id)terminatorsDeletingAutospace;
- (BOOL)doesComposeText;
- (id)allAccentKeyStrings;
- (id)layoutTags;
- (id)nonstopPunctuationCharacters;
- (id)sentencePrefixingCharacters;
- (id)sentenceDelimitingCharacters;
- (id)sentenceTrailingCharacters;
- (id)externalStringToInternal:(id)a0;
- (id)internalStringToExternal:(id)a0;
- (void)reloadPrecomposedCharacterSetWithIdiom:(long long)a0;
- (BOOL)supportsLearning;
- (BOOL)shouldLearnLowercaseAtBeginningOfSentence;
- (id)accentKeyStringForKeyboardState:(id)a0;
- (BOOL)shouldConvertEagerly;
- (void *)createInputManager;
- (void)specializeInputManager:(void *)a0 forLayoutState:(id)a1;
- (id)compositionMapForLayout:(id)a0 reverse:(BOOL)a1;
- (id)getComposedStringFor:(id)a0 usingMap:(id)a1;
- (id)getComposedStringFor:(id)a0 usingMap:(id)a1 byConvertingEagerly:(BOOL)a2;
- (id)findPrefixMatchesFor:(id)a0 fromIndex:(unsigned long long)a1 usingCompositionMap:(id)a2 matchesInputAsPrefix:(BOOL)a3;
- (BOOL)shouldClearInput:(id)a0;
- (id)externalStringToInternal:(id)a0 byConvertingEagerly:(BOOL)a1;
- (unsigned long long)maxPriorWordTokensAfterTrimming;
- (BOOL)acceptsCharacter:(unsigned int)a0;
- (struct USet { } *)createAcceptableCharacterSet;
- (BOOL)dictionaryUsesExternalEncoding;
- (const struct USet { } *)precomposedCharacterSet;
- (BOOL)shouldConvertCandidateToExternal;
- (BOOL)canConvertExternalToExternal;
- (BOOL)allowsAutocorrectionOfValidWords;
- (id)dictionaryInputMode;
- (BOOL)shouldConvertAutocorrectionCandidatesToFullWidth;

@end
