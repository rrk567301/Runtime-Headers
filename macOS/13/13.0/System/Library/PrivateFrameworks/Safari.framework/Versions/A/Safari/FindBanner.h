@class NSTextField, NSSearchField, NSResponder, NSString, NSPopUpButton, NSTimer, NSSegmentedControl;
@protocol FindBannerDelegate;

@interface FindBanner : Banner <NSControlTextEditingDelegate, NSMenuItemValidation> {
    NSTimer *_clearMatchCountTimer;
    int _lastFindPasteboardChangeCount;
    unsigned long long _matchCount;
    long long _matchIndex;
    NSString *_previousSearchString;
    BOOL _nextReturnShouldPerformFind;
    BOOL _suppressUpdatingSearchFieldFromFindPasteboard;
    BOOL _forceUpdateSearchFieldFromFindPasteboardScheduled;
    BOOL _beepOnFailure;
}

@property (weak) NSSearchField *searchField;
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
- (id)_searchString;
- (void)awakeFromNib;
- (void)controlTextDidChange:(id)a0;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (BOOL)isInKeyWindow;
- (void)focusSearchField;
- (void)_setStatus:(id)a0;
- (id)bannerNibName;
- (void)didInstallBannerView;
- (void)updateControlsForTitlebarColor;
- (void)willUninstallBannerView;
- (void)findNext:(id)a0;
- (void)findPrevious:(id)a0;
- (void)_clearStatus;
- (void)_findBannerBehaviorDidChange:(id)a0;
- (void)_windowDidUpdate:(id)a0;
- (void)findFromNextPreviousControl:(id)a0;
- (void)findFromSearchField:(id)a0;
- (void)takeFindBehaviorFromPopupButton:(id)a0;
- (void)_setUseMatchesWordStartsOnly:(BOOL)a0;
- (BOOL)readyToFind;
- (void)setSearchFieldString:(id)a0;
- (void)hideOverlay;
- (unsigned long long)_optionsForCountingMatches;
- (void)updateDisplayedMatchCountForString:(id)a0 to:(unsigned long long)a1 at:(long long)a2;
- (BOOL)_canHighlightAllMatches;
- (void)_cancelClearMatchCountTimer;
- (id)_computeStatusText;
- (void)_findString:(id)a0 direction:(unsigned long long)a1 beepOnFailure:(BOOL)a2;
- (void)_findWithDirection:(unsigned long long)a0 beepOnFailure:(BOOL)a1;
- (void)_highlightAllMatchesIfPossible;
- (void)_makeSearchFieldFirstResponder;
- (long long)_segmentIndexForFindPrevious;
- (long long)_segmentIndexForFindNext;
- (void)_startObservingWindowAndBannerView;
- (void)_stopObservingWindowAndBannerView;
- (void)_updateFindPasteboardFromSearchField;
- (void)_updateHighlightedMatches;
- (void)_updateNextAndPreviousButtons;
- (void)_updateSearchFieldFromFindPasteboard;

@end
