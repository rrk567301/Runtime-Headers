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
@property (nonatomic) char useRelaxedOVSPolicy;
@property (nonatomic) char skipCandidateQualityFilter;

+ (struct USet { } *)createAcceptableCharacterSetForKeyboardLocale:(id)a0;
+ (id)createSpecializationForInputMode:(id)a0;
+ (id)findPrefixMatchesFor:(id)a0 fromIndex:(unsigned long long)a1 usingCompositionMap:(id)a2 matchesInputAsPrefix:(char)a3;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithInputMode:(id)a0;
- (char)canHandleKeyHitTest;
- (id)keyboardBehaviors;
- (id)replacementForDoubleSpace;
- (char)shouldAddModifierSymbolsToWordCharacters;
- (char)shouldExtendPriorWord;
- (id)supplementalLexiconWordExtraCharacters;
- (char)supportsReversionUI;
- (id)terminatorsDeletingAutospace;
- (id)wordCharacters;
- (id)wordSeparator;
- (char)doesComposeText;
- (id)wordMedialPunctuationCharacters;
- (unsigned long long)maxPriorWordTokensAfterTrimming;
- (id)accentKeyStringForKeyboardState:(id)a0;
- (char)acceptsCharacter:(unsigned int)a0;
- (id)allAccentKeyStrings;
- (char)allowsAutocorrectionOfValidWords;
- (char)canConvertExternalToExternal;
- (id)compositionMapForLayout:(id)a0 reverse:(char)a1;
- (struct USet { } *)createAcceptableCharacterSet;
- (void *)createInputManager:(id)a0;
- (char)deletesByComposedCharacterSequence;
- (id)dictionaryInputMode;
- (char)dictionaryUsesExternalEncoding;
- (id)externalStringToInternal:(id)a0;
- (id)externalStringToInternal:(id)a0 byConvertingEagerly:(char)a1;
- (id)findPrefixMatchesFor:(id)a0 fromIndex:(unsigned long long)a1 usingCompositionMap:(id)a2 matchesInputAsPrefix:(char)a3;
- (id)getComposedStringFor:(id)a0 usingMap:(id)a1;
- (id)getComposedStringFor:(id)a0 usingMap:(id)a1 byConvertingEagerly:(char)a2;
- (id)internalStringToExternal:(id)a0;
- (id)layoutTags;
- (id)nonstopPunctuationCharacters;
- (const struct USet { } *)precomposedCharacterSet;
- (void)reloadPrecomposedCharacterSetWithIdiom:(long long)a0;
- (id)sentenceDelimitingCharacters;
- (id)sentencePrefixingCharacters;
- (id)sentenceTrailingCharacters;
- (char)shouldClearInput:(id)a0;
- (char)shouldConvertAutocorrectionCandidatesToFullWidth;
- (char)shouldConvertCandidateToExternal;
- (char)shouldConvertEagerly;
- (char)shouldLearnLowercaseAtBeginningOfSentence;
- (id)spaceDeletingCharacters;
- (void)specializeInputManager:(void *)a0 forLayoutState:(id)a1;
- (char)supportsLearning;

@end
