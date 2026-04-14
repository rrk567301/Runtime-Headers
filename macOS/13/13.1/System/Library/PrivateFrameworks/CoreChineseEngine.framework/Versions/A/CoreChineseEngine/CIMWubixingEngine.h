@class NSMutableArray, NSString, NSOperationQueue, CIMTextReplacementController, CIMContactsReader;

@interface CIMWubixingEngine : CIMShapeBasedEngine

@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) CIMTextReplacementController *textReplacementController;
@property (retain, nonatomic) CIMContactsReader *contactsReader;
@property (retain, nonatomic) NSString *remainingString;
@property (retain, nonatomic) NSMutableArray *convertedCandidates;

- (void).cxx_destruct;
- (id)keyboardLayoutName;
- (id)helpAnchorName;
- (void)updateContacts:(id)a0;
- (int)mecabraInputMethodType;
- (BOOL)handleNumberKey:(unsigned short)a0;
- (id)sortingMethods;
- (unsigned long long)panelType;
- (id)currentInlineText;
- (void)updateCandidateController:(id)a0;
- (id)mecabraCreationOptionsDictionary;
- (unsigned long long)analysisOptions;
- (id)candidateListDictionaryWithSortingMethod:(id)a0;
- (id)composedText;
- (void)didHandleCandidateSelectionChanged:(id)a0 candidateController:(id)a1;
- (void)updateTextReplacementEntries;
- (id)initWithScriptType:(unsigned long long)a0 inputModeName:(id)a1 withInputController:(id)a2;
- (void)commitCandidate:(id)a0;
- (BOOL)handlePunctuationAndSymbolsAndUppercaseLetters:(unsigned short)a0;
- (id)inputCharacterSet;
- (unsigned long long)maxLengthOfInline;
- (id)wildcardCharacterSet;
- (id)getCharacterCodeForCharacter:(id)a0;
- (id)enumeratedCandidates;
- (id)shownInlineText;
- (BOOL)shouldGroupWindowMovement;
- (BOOL)handleSpaceForNormalInlineStateWithDynamicPrompt;
- (BOOL)handleReturn;
- (BOOL)handleCharacter;
- (void)autoConvert;
- (BOOL)shouldShowAssociatedWords;
- (BOOL)candidateShouldShowInputCode:(id)a0;
- (void)commitShownInline;
- (void)resetAutoConvertionState;
- (id)shouldAutoCommitCode:(id)a0;

@end
