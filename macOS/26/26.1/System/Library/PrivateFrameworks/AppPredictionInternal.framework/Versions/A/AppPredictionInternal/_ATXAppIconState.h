@class _ATXInternalInstallNotification, NSArray, _ATXInternalUninstallNotification, NSDictionary, ATXHomeScreenConfigCache, NSObject, NSMutableIndexSet, _PASSimpleCoalescingTimer;
@protocol OS_dispatch_queue;

@interface _ATXAppIconState : NSObject {
    _ATXInternalInstallNotification *_installNotification;
    _ATXInternalUninstallNotification *_uninstallNotification;
    NSObject<OS_dispatch_queue> *_syncQueue;
    int _homeScreenConfigCacheChangeDarwinNotificationObserver;
    int _homeScreenTodayPageConfigCacheChangeDarwinNotificationObserver;
    int _dockAppListChangeDarwinNotificationObserver;
    ATXHomeScreenConfigCache *_homeScreenConfigCache;
    NSDictionary *_iconLocationByBundleId;
    unsigned long long _numHomeScreenPages;
    unsigned long long _numHomeScreenFolders;
    NSArray *_orderedVisiblePageIndices;
    NSMutableIndexSet *_pageIndicesWithAppPredictionPanels;
    NSMutableIndexSet *_pageIndicesWithSuggestionWidgets;
    _PASSimpleCoalescingTimer *_coalescedReloadOperation;
}

+ (id)sharedInstance;

- (void)_reload;
- (id)allDockedApps;
- (BOOL)appOnDockWithBundleId:(id)a0;
- (id)initWithHomeScreenConfigCache:(id)a0;
- (long long)springboardPageLocationForBundleId:(id)a0;
- (BOOL)appInFolderWithBundleId:(id)a0;
- (unsigned long long)getFirstVisiblePageIndex;
- (unsigned long long)numberOfFolders;
- (long long)springboardPageNumberForBundleId:(id)a0;
- (id)allAppsKnownToSpringBoard;
- (id)nonFolderAppSetOnPages;
- (id)springboardPageNumbersWithAppPredictionPanels;
- (id)springboardPageNumbersWithSuggestionsWidgets;
- (void).cxx_destruct;
- (id)allFolderApps;
- (long long)folderPageNumberForBundleId:(id)a0;
- (unsigned long long)numberOfApps;
- (unsigned long long)numberOfPages;
- (id)allInstalledAppsKnownToSpringBoard;
- (id)init;

@end
