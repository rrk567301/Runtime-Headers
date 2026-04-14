@class CESRSpeechProfileSiteCache, NSMutableDictionary, TRIClient, NSURL, CESRSpeechProfileSettings, NSObject, CESRDictionaryLog;
@protocol OS_dispatch_queue, CCSetEnumerator;

@interface CESRSpeechProfileSiteManager : NSObject {
    NSURL *_rootDirectoryURL;
    CESRSpeechProfileSettings *_settings;
    NSObject<CCSetEnumerator> *_setEnumerator;
    NSObject<OS_dispatch_queue> *_queue;
    CESRDictionaryLog *_managerInfo;
    CESRSpeechProfileSiteCache *_speechProfileSiteCache;
    NSMutableDictionary *_speechProfileSiteWriterCache;
    TRIClient *_trialClient;
}

+ (id)defaultManager;

- (void).cxx_destruct;
- (BOOL)performMaintenance:(id /* block */)a0;
- (BOOL)clearAllState;
- (BOOL)clearSpeechProfileSiteWithUserId:(id)a0;
- (BOOL)handleSettingsChange;
- (BOOL)handleUpdatedSets:(id)a0;
- (BOOL)rebuildSpeechProfileSiteWithUserId:(id)a0;
- (BOOL)_isDataProtectionError:(id)a0;
- (void)_loadOrCreateManagerInfo;
- (BOOL)_removeSiteWithUserId:(id)a0;
- (BOOL)_resetRootDirectory;
- (id)_sortBySpeechProfileSite:(id)a0 error:(id *)a1;
- (id)_allSetsSortedBySpeechProfileSite:(id *)a0;
- (id)_cachedWriterAtSpeechProfileSiteURL:(id)a0;
- (id)_cachedWriterForSpeechProfileSite:(id)a0;
- (BOOL)_didHandleUpdatedSets:(id)a0 shouldDefer:(id /* block */)a1;
- (BOOL)_didPerformVerification:(id /* block */)a0;
- (BOOL)_loadSpeechProfileSites;
- (BOOL)_performRebuildWithUserId:(id)a0;
- (BOOL)_processUpdatesToSets:(id)a0 shouldDefer:(id /* block */)a1;
- (BOOL)_rebuildAll:(id /* block */)a0;
- (BOOL)_rebuildAllSpeechProfilesWithSerializedSets:(id)a0;
- (void)_registerTrialExperimentUpdateHandler;
- (id)initWithRootDirectoryURL:(id)a0 setEnumerator:(id)a1 settings:(id)a2;
- (BOOL)rebuildAllSpeechProfilesWithSerializedSets:(id)a0;

@end
