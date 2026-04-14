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

- (unsigned long long)getFirstVisiblePageIndex;
- (id)allDockedApps;
- (id)springboardPageNumbersWithAppPredictionPanels;
- (long long)springboardPageLocationForBundleId:(id)a0;
- (unsigned long long)numberOfFolders;
- (void)_reload;
- (long long)springboardPageNumberForBundleId:(id)a0;
- (id)init;
- (BOOL)appInFolderWithBundleId:(id)a0;
- (long long)folderPageNumberForBundleId:(id)a0;
- (id)allFolderApps;
- (id)allInstalledAppsKnownToSpringBoard;
- (unsigned long long)numberOfPages;
- (void).cxx_destruct;
- (id)springboardPageNumbersWithSuggestionsWidgets;
- (id)allAppsKnownToSpringBoard;
- (unsigned long long)numberOfApps;
- (id)initWithHomeScreenConfigCache:(id)a0;
- (BOOL)appOnDockWithBundleId:(id)a0;
- (id)nonFolderAppSetOnPages;

@end
