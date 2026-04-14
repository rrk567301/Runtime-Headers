@class SEMSettings, NSMutableDictionary, NSURL, SEMIndexSiteCache, NSObject, SEMDictionaryLog;
@protocol OS_dispatch_queue, CCSetEnumerator;

@interface SEMIndexSiteManager : NSObject {
    NSURL *_rootDirectoryURL;
    NSObject<CCSetEnumerator> *_setEnumerator;
    NSObject<OS_dispatch_queue> *_queue;
    SEMDictionaryLog *_managerInfo;
    SEMIndexSiteCache *_indexSiteCache;
    NSMutableDictionary *_indexSiteWriterCache;
}

@property (readonly, nonatomic) SEMSettings *settings;

+ (id)defaultManager;

- (void).cxx_destruct;
- (BOOL)performMaintenance:(id /* block */)a0;
- (BOOL)clearAllState;
- (void)_loadOrCreateManagerInfo;
- (BOOL)_resetRootDirectory;
- (BOOL)_didHandleUpdatedSets:(id)a0 shouldDefer:(id /* block */)a1;
- (BOOL)_didPerformVerification:(id /* block */)a0;
- (BOOL)_isDataProtectionError:(id)a0;
- (BOOL)_removeSiteWithUserId:(id)a0;
- (BOOL)handleSettingsChange;
- (BOOL)handleUpdatedSets:(id)a0;
- (id)initWithRootDirectoryURL:(id)a0 setEnumerator:(id)a1 settings:(id)a2;
- (id)_allSetsSorted:(id *)a0;
- (BOOL)_loadIndexSites;
- (id)_cachedWriterForIndexSite:(id)a0;
- (BOOL)_didHandleAnyUpdatedSets:(id /* block */)a0;
- (BOOL)_didRefreshSettings:(id /* block */)a0 skipMaintenance:(BOOL *)a1;
- (void)_handleSysdiagnoseStarted;
- (BOOL)_rebuildAllIndexSites:(id /* block */)a0;
- (BOOL)_rebuildAllStateWithSerializedSets:(id)a0;
- (id)_sortByIndexSite:(id)a0 error:(id *)a1;
- (BOOL)_updateApplicableIndexSitesWithSets:(id)a0 shouldDefer:(id /* block */)a1;
- (BOOL)clearIndexSiteWithUserId:(id)a0;
- (void)handleSysdiagnoseStarted;
- (BOOL)rebuildAllStateWithSerializedSets:(id)a0;

@end
