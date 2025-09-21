@interface TIKeyboardInputManager_mul : TIKeyboardInputManager {
    char _isSuspended;
    char _choseSecondaryPrev;
}

@property (nonatomic) char choseSecondary;
@property (nonatomic) char isFreezingInputMethodChoice;
@property (readonly, nonatomic) char shouldDynamicallySwitchBetweenPrimaryAndSecondary;
@property (nonatomic) long long indexOfLastDynamicSwitch;

- (void)resume;
- (void)suspend;
- (void)clearInput;
- (id)keyboardConfiguration;
- (id)candidateArray:(id)a0 withCandidateUniquelyInsertedToFront:(id)a1;
- (void)chooseBetterInputMethod;
- (char)containsActiveLanguage:(id)a0 language:(id)a1;
- (void)didUpdateInputModeProbabilities:(id)a0;
- (void)didUpdateInputModes:(id)a0;
- (char)emphasizesAlternativeInput;
- (void)enumerateInputModesWithBlock:(id /* block */)a0;
- (unsigned int)externalIndexToInternal:(unsigned int)a0;
- (id)externalStringToInternal:(id)a0;
- (id)getBetterLexiconLocale:(char *)a0;
- (id)getCurrentExternalStringGiven:(char)a0;
- (id)getPlainCandidate;
- (void)handleAlternativeInput:(id)a0 givenCandidate:(id)a1;
- (id)handleKeyboardInput:(id)a0;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (unsigned int)internalIndexToExternal:(unsigned int)a0;
- (id)internalStringToExternal:(id)a0;
- (char)isHighMemoryManager;
- (char)isUsingMultilingual;
- (void)keyLayoutDidChangeTo:(id)a0;
- (id)keyLayoutMap;
- (id)keyLayoutMapAsNearbyKeys;
- (void *)languageModelContainer;
- (unsigned int)lexiconIDForInputMode:(id)a0;
- (struct vector<KB::LexiconInfo, std::allocator<KB::LexiconInfo>> { struct *x0; struct *x1; struct __compressed_pair<KB::LexiconInfo *, std::allocator<KB::LexiconInfo>> { struct *x0; } x2; })lexiconInformationVector;
- (id)lexiconLocaleOfString:(id)a0 inputMode:(id)a1;
- (id)listOfModelLocalesFromActiveInputModes;
- (void)loadDictionaries;
- (id)modelLoaderForModelLocaleMapping:(id)a0 customResourcePaths:(id)a1 dynamicResourcePath:(id)a2 usesLinguisticContext:(char)a3 isMultiLingualModeEnabled:(char)a4 validEnglishTransformerMultilingualConfig:(char)a5;
- (id)modelLocaleToInputModeMapping;
- (id)resourceInputModes;
- (char)shouldDynamicallySwitchBetweenPrimaryAndSecondaryWrapper;
- (char)shouldFreezeInputMethodChoiceForPopupVariants;
- (char)shouldPassAlternativeInputAsPrediction:(id)a0 isRecognized:(char)a1;
- (char)shouldUpdateDictionary;
- (char)stringIsRecognizedByAlternativeIM:(id)a0;
- (void)updateAutocorrectionListGivenOutdatedInput:(id)a0 andUpdatedInput:(id)a1;
- (char)updateLanguageModelForKeyboardState;
- (void)updateLanguagePriors;
- (char)usesRetrocorrection;
- (char)validEnglishTransformerMultilingualConfig;
- (float)weightForInputMode:(id)a0;

@end
