@class CIMMecabraEngine, NSString, NSViewController, CIMCandidate;

@interface CIMPinyinEngine : CIMBaseEngine

@property (nonatomic) BOOL capsLockEnabled;
@property (nonatomic) BOOL lastCharacterWasNumber;
@property (nonatomic) BOOL leftSingleQuotationMarkInserted;
@property (nonatomic) BOOL leftDoubleQuotationMarkInserted;
@property (nonatomic) NSString *pairedPunctuationsInsertedInLastAction;
@property (retain, nonatomic) CIMMecabraEngine *mecabraEngine;
@property (retain, nonatomic) CIMCandidate *selectedCandidate;
@property (retain, nonatomic) NSViewController *strokeInformationViewController;
@property (nonatomic) BOOL previousInputSelectedTone;
@property (nonatomic) BOOL usesStandardPinyinKeyboardLayout;
@property (readonly, nonatomic) BOOL isShuangpin;
@property (readonly, nonatomic) CIMCandidate *selectedMecabraCandidate;

+ (id)contextualVariantMapping;

- (void).cxx_destruct;
- (void)reset;
- (void)updateSettings;
- (void)endSession;
- (id)helpAnchorName;
- (id)inputString;
- (int)mecabraInputMethodType;
- (id)sortingMethods;
- (id)informationView;
- (unsigned long long)panelType;
- (void)updateCandidateController:(id)a0;
- (id)currentInlineText;
- (BOOL)shouldUpdateExistingCandidates;
- (id)mecabraEnvironment;
- (void)preflightSpellChecker;
- (void)checkSettings:(id)a0 withClient:(id)a1;
- (void)updateSettingsForKeyboardLayout;
- (void)handleMecabraSettings;
- (void)selectNextTone;
- (void)selectPreviousTone;
- (void)enterStrokeSequence;
- (void)doCommandBySelector:(SEL)a0 withUserInfo:(id)a1;
- (id)composedText;
- (void)showCandidateWindowIfNeeded;
- (void)commitInlineForSpecialWindow;
- (BOOL)commitCandidate:(id)a0 selectionMethod:(id)a1;
- (BOOL)commitCandidateWithSelection:(id)a0 method:(id)a1;
- (void)endSessionConfirmingInlineText;
- (void)endSessionAbandoningInlineText;
- (void)didHandleCandidateSelected:(id)a0 isSecondary:(BOOL)a1;
- (BOOL)handleITABCEvent;
- (BOOL)isFirstCandidateSelected;
- (BOOL)isShowingCandidateViewAboveInline;
- (BOOL)expandableWindowIsShownAboveInlineAndEventIsRepeating;
- (BOOL)handleEventDynamic;
- (void)performPageNavigationLeft:(id)a0;
- (void)performPageNavigationRight:(id)a0;
- (BOOL)isInlineEmpty;
- (id)contextualVariantForPunctuation:(id)a0;
- (void)forgetSelectedWord;
- (BOOL)commitSelectedCandidate;
- (id)convertedPunctuationFromString:(id)a0;
- (BOOL)commitInlineTextCandidate;
- (id)convertedBasicLatinPunctuationFromStringForURL:(id)a0;
- (BOOL)insertPairedPunctuations:(id)a0;
- (void)updateMarkedText;
- (BOOL)shouldShowStrokeInformationWindowForCandidates:(id)a0;
- (BOOL)shouldShowStrokeInformationWindow;
- (id)candidateListDictionaryWithSortingMethod:(id)a0;
- (void)updateTextReplacementEntries;
- (void)mouseClicked;
- (void)didHandleCandidateSelected:(id)a0 candidateController:(id)a1;
- (void)didHandleSecondaryCandidateSelected:(id)a0;
- (void)didHandleCandidateSelectionChanged:(id)a0 candidateController:(id)a1;
- (BOOL)handleKeyEvent;
- (void)showPunctationCandidates;
- (BOOL)isUsingSortingBar;
- (id)insertApostrophesForPinyinString:(void *)a0;

@end
