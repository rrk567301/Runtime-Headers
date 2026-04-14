@class NSMutableDictionary, BPSSink, CSSearchableIndex, BMBiomeScheduler, NSObject, ATXMenuItemContext;
@protocol OS_dispatch_queue;

@interface ATXMenuItemManager : NSObject {
    BMBiomeScheduler *_scheduler;
    BPSSink *_sink;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_indexedMenuItemsByBundle;
    CSSearchableIndex *_index;
    ATXMenuItemContext *_menuItemCollector;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (id)initWithIndex:(id)a0;
- (void).cxx_destruct;
- (id)cachePathForMenuItemPredictions;
- (void)_computeDiffAndIndexItemsForBundleID:(id)a0 retrievedMenuItems:(id)a1 completionHandler:(id /* block */)a2;
- (id)_menuHierarchyComponentsKey;
- (void)_observeAppInFocusChanges;
- (void)_processAppInFocusEventForBundleID:(id)a0;
- (void)_retrieveDiffAndIndexItemsForBundleID:(id)a0 retrievedMenuItems:(id)a1 completionHandler:(id /* block */)a2;
- (void)_retrieveItemsFromSpotlight:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateIndexDictionaryForBundleID:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateIndexForBundleID:(id)a0 isRetry:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_updateSpotlight:(id)a0 deletions:(id)a1 completionHandler:(id /* block */)a2;
- (id)cachePathForMenuItemScores;
- (id)indexedMenuItemsFrom:(id)a0 forCurrentAppInFocusBundleId:(id)a1;
- (id)initWithIndex:(id)a0 testQuery:(id)a1 testMenuItems:(id)a2;
- (void)triggerMenuItemIndexingForBundleID:(id)a0;
- (void)updateIndexForBundleID:(id)a0 completionHandler:(id /* block */)a1;

@end
