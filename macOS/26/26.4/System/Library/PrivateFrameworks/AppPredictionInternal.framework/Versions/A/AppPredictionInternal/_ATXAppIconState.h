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

- (id)springboardPageNumbersWithAppPredictionPanels;
- (unsigned long long)numberOfFolders;
- (BOOL)appInFolderWithBundleId:(id)a0;
- (long long)springboardPageNumberForBundleId:(id)a0;
- (id)springboardPageNumbersWithSuggestionsWidgets;
- (id)nonFolderAppSetOnPages;
- (unsigned long long)numberOfApps;
- (void).cxx_destruct;
- (id)allAppsKnownToSpringBoard;
- (id)allDockedApps;
- (id)init;
- (id)allInstalledAppsKnownToSpringBoard;
- (BOOL)appOnDockWithBundleId:(id)a0;
- (id)initWithHomeScreenConfigCache:(id)a0;
- (void)_reload;
- (id)allFolderApps;
- (long long)springboardPageLocationForBundleId:(id)a0;
- (long long)folderPageNumberForBundleId:(id)a0;
- (unsigned long long)numberOfPages;
- (unsigned long long)getFirstVisiblePageIndex;

@end
