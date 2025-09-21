@class CIMMecabraEngine, NSString, NSViewController, CIMCandidate;

@interface CIMPinyinEngine : CIMBaseEngine

@property (nonatomic) char capsLockEnabled;
@property (nonatomic) char lastCharacterWasNumber;
@property (nonatomic) char leftSingleQuotationMarkInserted;
@property (nonatomic) char leftDoubleQuotationMarkInserted;
@property (nonatomic) NSString *pairedPunctuationsInsertedInLastAction;
@property (retain, nonatomic) CIMMecabraEngine *mecabraEngine;
@property (retain, nonatomic) CIMCandidate *selectedCandidate;
@property (retain, nonatomic) NSViewController *strokeInformationViewController;
@property (nonatomic) char previousInputSelectedTone;
@property (nonatomic) char usesStandardPinyinKeyboardLayout;
@property (readonly, nonatomic) char isShuangpin;
@property (readonly, nonatomic) CIMCandidate *selectedMecabraCandidate;

+ (id)contextualVariantMapping;

- (void).cxx_destruct;
- (void)reset;
- (unsigned long long)panelType;
- (void)updateSettings;
- (void)endSession;
- (id)helpAnchorName;
- (id)inputString;
- (int)mecabraInputMethodType;
- (id)informationView;
- (id)currentInlineText;
- (char)shouldUpdateExistingCandidates;
- (id)sortingMethods;
- (void)updateCandidateController:(id)a0;
- (id)mecabraEnvironment;
- (id)convertedPunctuationFromString:(id)a0;
- (void)updateSettingsForKeyboardLayout;
- (id)candidateListDictionaryWithSortingMethod:(id)a0;
- (void)checkSettings:(id)a0 withClient:(id)a1;
- (char)commitCandidate:(id)a0 selectionMethod:(id)a1;
- (char)commitCandidateWithSelection:(id)a0 method:(id)a1;
- (void)commitInlineForSpecialWindow;
- (char)commitInlineTextCandidate;
- (char)commitSelectedCandidate;
- (id)composedText;
- (id)contextualVariantForPunctuation:(id)a0;
- (id)convertedBasicLatinPunctuationFromStringForURL:(id)a0;
- (void)didHandleCandidateSelected:(id)a0 candidateController:(id)a1;
- (void)didHandleCandidateSelected:(id)a0 isSecondary:(char)a1;
- (void)didHandleCandidateSelectionChanged:(id)a0 candidateController:(id)a1;
- (void)didHandleSecondaryCandidateSelected:(id)a0;
- (void)doCommandBySelector:(SEL)a0 withUserInfo:(id)a1;
- (void)endSessionAbandoningInlineText;
- (void)endSessionConfirmingInlineText;
- (void)enterStrokeSequence;
- (char)expandableWindowIsShownAboveInlineAndEventIsRepeating;
- (void)forgetSelectedWord;
- (char)handleEventDynamic;
- (char)handleITABCEvent;
- (char)handleKeyEvent;
- (void)handleMecabraSettings;
- (id)insertApostrophesForPinyinString:(void *)a0;
- (char)insertPairedPunctuations:(id)a0;
- (char)isFirstCandidateSelected;
- (char)isInlineEmpty;
- (char)isShowingCandidateViewAboveInline;
- (char)isUsingSortingBar;
- (void)mouseClicked;
- (void)performPageNavigationLeft:(id)a0;
- (void)performPageNavigationRight:(id)a0;
- (void)preflightSpellChecker;
- (void)selectNextTone;
- (void)selectPreviousTone;
- (char)shouldShowStrokeInformationWindow;
- (char)shouldShowStrokeInformationWindowForCandidates:(id)a0;
- (void)showCandidateWindowIfNeeded;
- (void)showPunctationCandidates;
- (void)updateMarkedText;
- (void)updateTextReplacementEntries;

@end
