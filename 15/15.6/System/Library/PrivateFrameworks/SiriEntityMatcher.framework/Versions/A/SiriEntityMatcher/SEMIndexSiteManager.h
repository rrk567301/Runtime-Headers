@class SEMSettings, NSURL, SEMIndexSiteCache, SEMDictionaryLog, NSObject;
@protocol OS_dispatch_queue, CCSetEnumerator;

@interface SEMIndexSiteManager : NSObject {
    NSURL *_managerDirectory;
    NSObject<CCSetEnumerator> *_setEnumerator;
    NSObject<OS_dispatch_queue> *_queue;
    SEMDictionaryLog *_managerInfo;
    SEMIndexSiteCache *_indexSiteCache;
    SEMSettings *_settings;
}

- (void).cxx_destruct;
- (char)_performMaintenance:(id /* block */)a0;
- (char)performMaintenance:(id /* block */)a0;
- (char)clearAllState;
- (char)handleSettingsChange;
- (void)handleSysdiagnoseStarted;
- (char)handleUpdatedSets:(id)a0;
- (char)_updateContainsSetsInUserVault:(id)a0;
- (id)initWithManagerDirectory:(id)a0 indexSiteCache:(id)a1 setEnumerator:(id)a2 settings:(id)a3;
- (id)_cachedWriterForIndexSiteType:(unsigned char)a0;
- (unsigned char)_checkForDeferredOperationAtIndexSite:(id)a0;
- (char)_checkLastDateOfOperation:(unsigned char)a0 isOverdue:(char *)a1 atSite:(id)a2;
- (char)_didHandleUpdatedSets:(id)a0 shouldDefer:(id /* block */)a1;
- (char)_didRefreshSettings:(id /* block */)a0 skipMaintenance:(char *)a1;
- (id)_discoverAllSetsForIndexSiteType:(unsigned char)a0;
- (char)_enumerateAllIndexSiteWritersUsingBlock:(id /* block */)a0;
- (char)_loadManagerDirectoryAndAvailableIndexSites;
- (void)_loadOrCreateManagerInfo;
- (char)_performAnyDeferredOperationsAtIndexSite:(id)a0 outOperationPerformed:(unsigned char *)a1 shouldDefer:(id /* block */)a2;
- (char)_performAnyDeferredOperationsAtIndexSiteType:(unsigned char)a0 shouldDefer:(id /* block */)a1;
- (char)_performOperation:(unsigned char)a0 atIndexSite:(id)a1 shouldDefer:(id /* block */)a2;
- (char)_performOperation:(unsigned char)a0 atIndexSite:(id)a1 withDate:(id)a2 shouldDefer:(id /* block */)a3;
- (char)_performOperationAtAllIndexSites:(unsigned char)a0 shouldDefer:(id /* block */)a1;
- (char)_rebuildAllStateWithSetEnumerator:(id)a0;
- (void)_recordOperationTriggered:(unsigned char)a0 withDate:(id)a1;
- (char)_resetManagerDirectory;
- (char)_updateIndexSiteType:(unsigned char)a0 updatedSets:(id)a1 shouldDefer:(id /* block */)a2;
- (char)handleIndexSiteAvailableWithType:(unsigned char)a0 shouldDefer:(id /* block */)a1;
- (char)rebuildAllStateWithSetEnumerator:(id)a0;

@end
