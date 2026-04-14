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
- (BOOL)shouldUpdateExistingCandidates;
- (id)currentInlineText;
- (void)updateCandidateController:(id)a0;
- (id)mecabraEnvironment;
- (void)preflightSpellChecker;
- (void)checkSettings:(id)a0 withClient:(id)a1;
- (void)doCommandBySelector:(SEL)a0 withUserInfo:(id)a1;
- (void)commitInlineForSpecialWindow;
- (id)candidateListDictionaryWithSortingMethod:(id)a0;
- (void)updateSettingsForKeyboardLayout;
- (void)handleMecabraSettings;
- (BOOL)commitCandidate:(id)a0 selectionMethod:(id)a1;
- (BOOL)commitCandidateWithSelection:(id)a0 method:(id)a1;
- (BOOL)commitSelectedCandidate;
- (BOOL)commitInlineTextCandidate;
- (void)endSessionConfirmingInlineText;
- (void)endSessionAbandoningInlineText;
- (void)mouseClicked;
- (BOOL)isInlineEmpty;
- (id)composedText;
- (void)didHandleCandidateSelected:(id)a0 candidateController:(id)a1;
- (void)didHandleSecondaryCandidateSelected:(id)a0;
- (void)didHandleCandidateSelected:(id)a0 isSecondary:(BOOL)a1;
- (void)didHandleCandidateSelectionChanged:(id)a0 candidateController:(id)a1;
- (BOOL)handleKeyEvent;
- (BOOL)isFirstCandidateSelected;
- (BOOL)isShowingCandidateViewAboveInline;
- (BOOL)expandableWindowIsShownAboveInlineAndEventIsRepeating;
- (void)performPageNavigationLeft:(id)a0;
- (void)performPageNavigationRight:(id)a0;
- (BOOL)handleITABCEvent;
- (id)convertedBasicLatinPunctuationFromStringForURL:(id)a0;
- (id)contextualVariantForPunctuation:(id)a0;
- (id)convertedPunctuationFromString:(id)a0;
- (void)showCandidateWindowIfNeeded;
- (BOOL)handleEventDynamic;
- (BOOL)insertPairedPunctuations:(id)a0;
- (void)updateMarkedText;
- (void)showPunctationCandidates;
- (void)selectPreviousTone;
- (void)selectNextTone;
- (void)forgetSelectedWord;
- (void)enterStrokeSequence;
- (BOOL)shouldShowStrokeInformationWindowForCandidates:(id)a0;
- (BOOL)shouldShowStrokeInformationWindow;
- (BOOL)isUsingSortingBar;
- (id)insertApostrophesForPinyinString:(void *)a0;
- (void)updateTextReplacementEntries;

@end
