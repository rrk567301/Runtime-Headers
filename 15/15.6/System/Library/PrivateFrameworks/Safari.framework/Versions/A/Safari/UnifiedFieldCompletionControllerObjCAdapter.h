@class NSCache, NSString, NSView, NSDictionary, NSMutableSet, CompletionWindow, WBSFaviconRequestsController;

@interface UnifiedFieldCompletionControllerObjCAdapter : NSObject <SearchUICommandDelegate, SearchUIFeedbackDelegate, CompletionUIPresentationControllerDelegate, MenuTableViewDelegate, NSTableViewDataSource, NSTableViewDelegate> {
    double _lastKnownUnifiedFieldWidth;
    double _lastKnownWindowBackingScaleFactor;
    void *_completionController;
    NSMutableSet *_completionAbortingNotificationNames;
    char _shouldPostAccessibilityRefreshNotification;
    CompletionWindow *_completionWindow;
    WBSFaviconRequestsController *_requestsController;
    NSCache *_searchUICellViewCache;
}

@property (readonly, nonatomic) NSView *completionWindowContentView;
@property (retain, nonatomic) NSDictionary *searchQueriesCalculatedFromDedupedHistoryItems;
@property (readonly, nonatomic) long long selectedIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)_atLeastOneCompletionListSectionHasChangedBetweenList:(const void *)a0 list:(const void *)a1;
+ (id)simplifiedURLStringForURLString:(id)a0;
+ (char)wantsStartPageViewInCompletionList;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (long long)numberOfRowsInTableView:(id)a0;
- (void)selectItemAtIndex:(long long)a0;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (id)tableView:(id)a0 rowViewForRow:(long long)a1;
- (id)tableView:(id)a0 selectionIndexesForProposedSelection:(id)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewColumnDidResize:(id)a0;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)tableViewSelectionIsChanging:(id)a0;
- (void)performCommand:(id)a0;
- (void)_historyItemsWereRemoved:(id)a0;
- (void)_historyWasCleared:(id)a0;
- (void)_requestImageForCell:(id)a0 itemAtRow:(unsigned long long)a1;
- (id)commandDelegate;
- (void)menuTableViewDidDeselectAllRows;
- (void)_abortCompletionFromNotification:(id)a0;
- (void)_addDeletionAffordanceToCompletionListItem:(id)a0 forMatch:(id)a1 inRow:(long long)a2;
- (id)_browserWindowController;
- (id)_completionListTableView;
- (void)_configureParsecCell:(id)a0 usingCompletionListItem:(void *)a1;
- (char)_listItemIsBookmarkOrHistoryMatch:(void *)a0;
- (char)_listItemIsCloudTabsMatch:(void *)a0;
- (char)_listItemIsQuickWebsiteSearchItem:(void *)a0;
- (char)_listItemUsesMagnifyingGlassImage:(void *)a0;
- (void)_registerForCompletionAbortingNotificationNamed:(id)a0 object:(id)a1;
- (void)_registerForCompletionAbortingNotifications;
- (void)_removeIgnoredSiriSuggestedSiteRecordsForHistoryItem:(id)a0;
- (char)_shouldPostAXRefreshNotificationWithOldList:(const void *)a0 newListItems:(const void *)a1;
- (char)_shouldUseSearchUIViewForSearchResult:(id)a0;
- (id)_tableCellViewForParsecSearchCompletionListItemWhenUsingSearchUI:(void *)a0;
- (void)_unregisterForCompletionAbortingNotifications;
- (id)_urlFromCommand:(id)a0;
- (int)attemptedToAbortCompletion:(int)a0;
- (char)canPerformCommand:(id)a0;
- (char)canRestoreSearchState:(id)a0;
- (char)canShowStartPageViewWithFailureReason:(unsigned long long *)a0;
- (void *)completionController;
- (void)completionUIPresentationControllerDidFinishPresentationAnimation:(id)a0;
- (void)completionUIPresentationControllerWillDismiss:(id)a0;
- (void)completionUIPresentationControllerWillStartPresentationAnimation:(id)a0;
- (void)completionWindowDidHide:(id)a0;
- (void)completionWindowDidShow:(id)a0;
- (void)didReloadCompletionList;
- (void)didUpdateCompletionList;
- (char)executeActionForSelectedParsecResult;
- (char)handleMoveRightInField:(id)a0;
- (void)handledEscKeyWhenCompletionUIWasNotVisible;
- (id)iconFromImageCacheForParsecSearchResult:(id)a0;
- (id)initWithCompletionController:(void *)a0;
- (void)menuTableView:(id)a0 mouseUpInRow:(long long)a1;
- (void)restoreSearchState:(id)a0;
- (char)shouldAbortCompletionFromNotification:(id)a0;
- (char)shouldHandleCardSectionEngagement:(id)a0;
- (char)shouldShowIconAndURLInSameColumnAsTitleForCompletionItem:(void *)a0;
- (void)showStartPageViewIfPossible;
- (void)unifiedFieldCompletionListDidHide;
- (void)unifiedFieldCompletionListDidShow;
- (void)willReloadCompletionList;
- (void)willUpdateCompletionListFromList:(const void *)a0 toList:(const void *)a1;

@end
