@class IMKCandidates, NSString, NSArray;

@interface IMKCandidateBasedInputController : IMKInputController <IMKCandidateControllerDelegate, IMKCandidateSelectionViewDelegate, IMKCandidatesDelegate> {
    NSArray *_secondaryCandidates;
}

@property (nonatomic) BOOL primaryCandidatesShownByScrubbing;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectedRange;
@property (nonatomic) unsigned long long windowLevel;
@property (nonatomic) BOOL sInvalidateIMKTextOrientation;
@property (nonatomic) BOOL sInvalidateIsIncrementalSearchInputContext;
@property (nonatomic) BOOL sInvalidateIncrementalSearchClientGeometry;
@property (nonatomic) BOOL touchBarCandidatesDidPresent;
@property (nonatomic) unsigned long long touchBarCandidatesSelectionTimeStamp;
@property (retain, nonatomic) IMKCandidates *candidateController;
@property (retain, nonatomic) IMKCandidates *candidateControllerForScrubber;
@property (retain, nonatomic) IMKCandidates *candidateControllerForTouchBar;
@property (readonly, nonatomic) BOOL isVerticalLayout;
@property (readonly, nonatomic) BOOL isIncrementalSearchInputContext;
@property (readonly, nonatomic) unsigned long long incrementalSearchClientGeometry;
@property (nonatomic) BOOL automaticallyShowPrimaryCandidatesInSecondaryController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)insertText:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)activateServer:(id)a0;
- (void)deactivateServer:(id)a0;
- (void)setMarkedText:(id)a0 selectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)inlineText;
- (id)displayMethod;
- (id)sortingMethods;
- (id)textClient;
- (void)didSelectSortingMode:(id)a0;
- (BOOL)isUsingIncrementalSearch;
- (id)informationView;
- (long long)windowType;
- (void)updateWindowLevel;
- (id)functionRowItemTextInputViewController;
- (unsigned long long)firstVisibleLineForCandidateController:(id)a0;
- (id)selectedCandidateForProposedCandidate:(id)a0 candidateController:(id)a1;
- (void)didFinishInteracting:(id)a0;
- (void)didHideCandidates:(id)a0;
- (void)showScrubberPanel;
- (id)candidatesForSortingMethod:(id)a0;
- (BOOL)shouldUpdateExistingCandidates;
- (id)defaultDisplayMethod;
- (id)currentInlineText;
- (void)candidateSelectionChanged:(id)a0 candidateController:(id)a1;
- (void)candidateSelected:(id)a0 candidateController:(id)a1;
- (void)didSelectSortingMode:(id)a0 candidateController:(id)a1;
- (void)didShowCandidates:(id)a0;
- (void)didUpdateCandidates:(id)a0;
- (id)makeCandidateController;
- (id)makeTouchBarCandidateController;
- (id)makeScrubbingCandidateController;
- (void)updateCandidateController:(id)a0;
- (void)showCandidateListDictionary:(id)a0 sortingModes:(id)a1 selectedSortingMode:(id)a2;
- (void)showCandidateListDictionary:(id)a0 sortingModes:(id)a1;
- (void)showCandidates:(id)a0;
- (void)invalidateClientSideInfoCache;
- (id)displayMethods;
- (id)selectedDisplayMethod;
- (void)setSecondaryCandidates:(id)a0;
- (BOOL)selectDisplayMethod:(id)a0;
- (void)reloadCandidates;
- (void)hideCandidates;
- (void)reloadSecondaryCandidatesOnly;
- (void)hideSecondaryCandidatesOnly;
- (BOOL)shouldHandleTouchBarPresentationManually;
- (void)reflectOnScreenCandidatesInTouchBar;
- (void)hideScrubberAndCancelFurtherRequests;

@end
