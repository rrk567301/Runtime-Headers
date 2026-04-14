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
- (void)updateCandidateController:(id)a0;
- (id)currentInlineText;
- (id)mecabraCreationOptionsDictionary;
- (unsigned long long)analysisOptions;
- (void)commitCandidate:(id)a0;
- (id)composedText;
- (id)candidateListDictionaryWithSortingMethod:(id)a0;
- (void)updateTextReplacementEntries;
- (void)didHandleCandidateSelectionChanged:(id)a0 candidateController:(id)a1;
- (id)initWithScriptType:(unsigned long long)a0 inputModeName:(id)a1 withInputController:(id)a2;
- (BOOL)handlePunctuationAndSymbolsAndUppercaseLetters:(unsigned short)a0;
- (id)inputCharacterSet;
- (unsigned long long)maxLengthOfInline;
- (id)wildcardCharacterSet;
- (id)getCharacterCodeForCharacter:(id)a0;
- (id)enumeratedCandidates;
- (id)shownInlineText;
- (BOOL)shouldGroupWindowMovement;
- (BOOL)shouldShowAssociatedWords;
- (BOOL)handleSpaceForNormalInlineStateWithDynamicPrompt;
- (BOOL)handleReturn;
- (BOOL)handleCharacter;
- (void)autoConvert;
- (BOOL)candidateShouldShowInputCode:(id)a0;
- (void)resetAutoConvertionState;
- (void)commitShownInline;
- (id)shouldAutoCommitCode:(id)a0;

@end
