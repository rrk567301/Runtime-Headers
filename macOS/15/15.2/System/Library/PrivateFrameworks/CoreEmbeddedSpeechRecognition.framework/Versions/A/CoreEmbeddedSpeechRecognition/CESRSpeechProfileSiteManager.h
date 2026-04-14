@class NSString, NSURL, CESRSpeechProfileSettings, CESRSpeechProfileSiteCache, NSMutableDictionary, CESRDictionaryLog, NSObject, TRIClient;
@protocol OS_dispatch_queue, CCSetEnumerator;

@interface CESRSpeechProfileSiteManager : NSObject <CESRSpeechProfileSiteManagement> {
    NSURL *_rootDirectoryURL;
    CESRSpeechProfileSettings *_settings;
    NSObject<CCSetEnumerator> *_setEnumerator;
    NSObject<OS_dispatch_queue> *_queue;
    CESRDictionaryLog *_managerInfo;
    CESRSpeechProfileSiteCache *_speechProfileSiteCache;
    NSMutableDictionary *_speechProfileSiteWriterCache;
    TRIClient *_trialClient;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;

- (void).cxx_destruct;
- (BOOL)performMaintenance:(id /* block */)a0;
- (BOOL)clearAllState;
- (id)_sortBySpeechProfileSite:(id)a0 error:(id *)a1;
- (id)_allSetsSortedBySpeechProfileSite:(id *)a0;
- (id)_cachedWriterAtSpeechProfileSiteURL:(id)a0;
- (id)_cachedWriterForSpeechProfileSite:(id)a0;
- (BOOL)_didHandleUpdatedSets:(id)a0 shouldDefer:(id /* block */)a1;
- (BOOL)_didPerformVerification:(id /* block */)a0;
- (BOOL)_isDataProtectionError:(id)a0;
- (void)_loadOrCreateManagerInfo;
- (BOOL)_loadSpeechProfileSites;
- (BOOL)_performRebuildWithUserId:(id)a0;
- (BOOL)_processUpdatesToSets:(id)a0 shouldDefer:(id /* block */)a1;
- (BOOL)_rebuildAll:(id /* block */)a0;
- (BOOL)_rebuildAllSpeechProfilesWithSerializedSets:(id)a0;
- (void)_registerTrialExperimentUpdateHandler;
- (BOOL)_removeSiteWithUserId:(id)a0;
- (BOOL)_resetRootDirectory;
- (BOOL)clearSpeechProfileSiteWithUserId:(id)a0;
- (BOOL)handleAssetUpdate;
- (BOOL)handleSettingsChange;
- (void)handleSysdiagnoseStarted;
- (BOOL)handleUpdatedSets:(id)a0;
- (id)initWithRootDirectoryURL:(id)a0 setEnumerator:(id)a1 settings:(id)a2;
- (id)initWithRootDirectoryURL:(id)a0 setEnumerator:(id)a1 settings:(id)a2 queue:(id)a3 siteCache:(id)a4 siteWriterCache:(id)a5 managerInfo:(id)a6;
- (BOOL)rebuildAllSpeechProfilesWithSerializedSets:(id)a0;
- (BOOL)rebuildSpeechProfileSiteWithUserId:(id)a0;

@end
