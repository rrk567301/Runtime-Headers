@class NSCache, NSString, NSView, NSURL, NSMutableSet, CompletionWindow, WBSFaviconRequestsController;

@interface UnifiedFieldCompletionControllerObjCAdapter : NSObject <CompletionUIPresentationControllerDelegate, MenuTableViewDelegate, NSTableViewDataSource, NSTableViewDelegate> {
    double _lastKnownUnifiedFieldWidth;
    double _lastKnownWindowBackingScaleFactor;
    void *_completionController;
    NSMutableSet *_completionAbortingNotificationNames;
    BOOL _shouldPostAccessibilityRefreshNotification;
    CompletionWindow *_completionWindow;
    WBSFaviconRequestsController *_requestsController;
    NSCache *_searchUIMapsCellViewCache;
}

@property (readonly, nonatomic) NSView *completionWindowContentView;
@property (readonly, nonatomic, getter=isParsecActionButtonSelected) BOOL parsecActionButtonSelected;
@property (readonly, nonatomic) NSURL *parsecActionButtonPunchoutURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_atLeastOneCompletionListSectionHasChangedBetweenList:(const void *)a0 list:(const void *)a1;
+ (id)simplifiedURLStringForURLString:(id)a0;
+ (BOOL)wantsFavoritesViewInCompletionList;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (long long)numberOfRowsInTableView:(id)a0;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (id)tableView:(id)a0 rowViewForRow:(long long)a1;
- (id)tableView:(id)a0 selectionIndexesForProposedSelection:(id)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewColumnDidResize:(id)a0;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)tableViewSelectionIsChanging:(id)a0;
- (void *)completionController;
- (void)_requestImageForCell:(id)a0 itemAtRow:(unsigned long long)a1;
- (void)_updateHeightsOfParsecCellViews;
- (void)_abortCompletionFromNotification:(id)a0;
- (id)_browserWindowController;
- (id)_completionListTableView;
- (void)_completionListTableViewFrameDidChange:(id)a0;
- (void)_configureParsecCell:(id)a0 usingCompletionListItem:(void *)a1;
- (BOOL)_listItemIsBookmarkOrHistoryMatch:(void *)a0;
- (BOOL)_listItemIsCloudTabsMatch:(void *)a0;
- (BOOL)_listItemIsQuickWebsiteSearchItem:(void *)a0;
- (BOOL)_listItemUsesMagnifyingGlassImage:(void *)a0;
- (id)_parsecCellViewForCompletionListItem:(void *)a0;
- (int)_parsecCellViewTypeForCompletionListItem:(void *)a0;
- (void)_registerForCompletionAbortingNotificationNamed:(id)a0 object:(id)a1;
- (void)_registerForCompletionAbortingNotifications;
- (BOOL)_shouldPostAXRefreshNotificationWithOldList:(const void *)a0 newListItems:(const void *)a1;
- (BOOL)_shouldUseSearchUIViewForSearchResult:(id)a0;
- (id)_tableCellViewForParsecSearchCompletionListItemWhenUsingSearchUI:(void *)a0;
- (void)_unregisterForCompletionAbortingNotifications;
- (void)_updateActionButtonVisibility;
- (int)attemptedToAbortCompletion:(int)a0;
- (BOOL)canRestoreSearchState:(id)a0;
- (BOOL)canShowFavoritesViewWithFailureReason:(unsigned long long *)a0;
- (void)completionUIPresentationControllerDidFinishPresentationAnimation:(id)a0;
- (void)completionUIPresentationControllerWillDismiss:(id)a0;
- (void)completionUIPresentationControllerWillStartPresentationAnimation:(id)a0;
- (void)completionWindowDidHide:(id)a0;
- (void)completionWindowDidShow:(id)a0;
- (void)didReloadCompletionList;
- (void)didUpdateCompletionList;
- (BOOL)handleMoveRightInField:(id)a0;
- (void)handledEscKeyWhenCompletionUIWasNotVisible;
- (id)initWithCompletionController:(void *)a0;
- (void)menuTableView:(id)a0 mouseUpInRow:(long long)a1;
- (BOOL)parsecResultShouldUseTwoColumnPresentation:(id)a0 askedToForceTwoColumnPresentation:(BOOL)a1;
- (void)restoreSearchState:(id)a0;
- (BOOL)shouldAbortCompletionFromNotification:(id)a0;
- (BOOL)shouldShowIconAndURLInSameColumnAsTitleForCompletionItem:(void *)a0;
- (void)showFavoritesViewIfPossible;
- (void)unifiedFieldCompletionListDidHide;
- (void)unifiedFieldCompletionListDidShow;
- (void)willReloadCompletionList;
- (void)willUpdateCompletionListFromList:(const void *)a0 toList:(const void *)a1;

@end
