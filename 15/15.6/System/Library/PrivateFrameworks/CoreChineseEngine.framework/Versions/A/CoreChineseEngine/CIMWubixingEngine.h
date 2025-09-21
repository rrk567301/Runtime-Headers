@class NSMutableArray, NSString, CIMTextReplacementController, CIMContactsReader;

@interface CIMWubixingEngine : CIMShapeBasedEngine

@property (retain, nonatomic) CIMTextReplacementController *textReplacementController;
@property (retain, nonatomic) CIMContactsReader *contactsReader;
@property (retain, nonatomic) NSString *remainingString;
@property (retain, nonatomic) NSMutableArray *convertedCandidates;

- (void).cxx_destruct;
- (unsigned long long)panelType;
- (id)helpAnchorName;
- (id)keyboardLayoutName;
- (void)updateContacts:(id)a0;
- (int)mecabraInputMethodType;
- (char)handleNumberKey:(unsigned short)a0;
- (id)currentInlineText;
- (id)sortingMethods;
- (void)updateCandidateController:(id)a0;
- (id)mecabraCreationOptionsDictionary;
- (unsigned long long)analysisOptions;
- (char)handleCharacter;
- (id)shownInlineText;
- (void)autoConvert;
- (id)candidateListDictionaryWithSortingMethod:(id)a0;
- (char)candidateShouldShowInputCode:(id)a0;
- (void)commitCandidate:(id)a0;
- (void)commitShownInline;
- (id)composedText;
- (void)didHandleCandidateSelectionChanged:(id)a0 candidateController:(id)a1;
- (id)enumeratedCandidates;
- (id)getCharacterCodeForCharacter:(id)a0;
- (char)handlePunctuationAndSymbolsAndUppercaseLetters:(unsigned short)a0;
- (char)handleReturn;
- (char)handleSpaceForNormalInlineStateWithDynamicPrompt;
- (id)initWithScriptType:(unsigned long long)a0 inputModeName:(id)a1 withInputController:(id)a2;
- (id)inputCharacterSet;
- (unsigned long long)maxLengthOfInline;
- (void)resetAutoConvertionState;
- (id)shouldAutoCommitCode:(id)a0;
- (char)shouldGroupWindowMovement;
- (char)shouldShowAssociatedWords;
- (void)updateTextReplacementEntries;
- (id)wildcardCharacterSet;

@end
