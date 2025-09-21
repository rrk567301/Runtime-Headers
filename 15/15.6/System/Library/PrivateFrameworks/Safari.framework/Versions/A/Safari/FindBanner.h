@class NSTextField, NSString, NSResponder, NSTimer, FindBannerSearchField, NSPopUpButton, NSSegmentedControl;
@protocol FindBannerDelegate;

@interface FindBanner : Banner <NSControlTextEditingDelegate, NSMenuItemValidation> {
    NSTimer *_clearMatchCountTimer;
    int _lastFindPasteboardChangeCount;
    unsigned long long _matchCount;
    long long _matchIndex;
    NSString *_previousSearchString;
    char _nextReturnShouldPerformFind;
    char _suppressUpdatingSearchFieldFromFindPasteboard;
    char _forceUpdateSearchFieldFromFindPasteboardScheduled;
    char _beepOnFailure;
}

@property (weak) FindBannerSearchField *searchField;
@property (weak) NSSegmentedControl *nextPreviousControl;
@property (weak) NSTextField *statusField;
@property (weak) NSPopUpButton *findBehaviorPopUp;
@property (weak, nonatomic) id<FindBannerDelegate> delegate;
@property (weak, nonatomic) NSResponder *supplementalSearchFieldCommandPerformer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)bannerSortOrder;
+ (unsigned long long)_optionsForFindingMatches;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_setStatus:(id)a0;
- (void)awakeFromNib;
- (char)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)controlTextDidChange:(id)a0;
- (void)focusSearchField;
- (char)isInKeyWindow;
- (char)_canHighlightAllMatches;
- (void)_cancelClearMatchCountTimer;
- (void)_clearStatus;
- (id)_computeStatusText;
- (void)_findBannerBehaviorDidChange:(id)a0;
- (void)_findString:(id)a0 direction:(unsigned long long)a1 beepOnFailure:(char)a2;
- (void)_findWithDirection:(unsigned long long)a0 beepOnFailure:(char)a1;
- (void)_highlightAllMatchesIfPossible;
- (void)_makeSearchFieldFirstResponder;
- (unsigned long long)_optionsForCountingMatches;
- (id)_searchString;
- (long long)_segmentIndexForFindNext;
- (long long)_segmentIndexForFindPrevious;
- (void)_setUseMatchesWordStartsOnly:(char)a0;
- (void)_startObservingWindowAndBannerView;
- (void)_stopObservingWindowAndBannerView;
- (void)_updateFindPasteboardFromSearchField;
- (void)_updateHighlightedMatches;
- (void)_updateNextAndPreviousButtons;
- (void)_updateSearchFieldFromFindPasteboard;
- (void)_windowDidUpdate:(id)a0;
- (id)bannerNibName;
- (void)didEndInstallAnimationBannerView;
- (void)didInstallBannerView;
- (void)findFromNextPreviousControl:(id)a0;
- (void)findFromSearchField:(id)a0;
- (void)findNext:(id)a0;
- (void)findPrevious:(id)a0;
- (void)hideOverlay;
- (char)readyToFind;
- (void)setSearchFieldString:(id)a0;
- (void)takeFindBehaviorFromPopupButton:(id)a0;
- (void)updateControlsForTitlebarColor;
- (void)updateDisplayedMatchCountForString:(id)a0 to:(unsigned long long)a1 at:(long long)a2;
- (void)willUninstallBannerView;

@end
