@class NSMutableDictionary, CESRSpeechProfileSettings, TRIClient, NSObject, CESRDictionaryLog;
@protocol OS_dispatch_queue, CCSetEnumerator;

@interface CESRSpeechProfileSiteResolver : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *siteForURL;
@property (retain, nonatomic) NSObject<CCSetEnumerator> *setEnumerator;
@property (retain, nonatomic) CESRSpeechProfileSettings *settings;
@property (retain, nonatomic) CESRDictionaryLog *resolverInfo;
@property (retain, nonatomic) TRIClient *trialClient;

+ (id)defaultResolver;

- (void).cxx_destruct;
- (char)performMaintenance:(id /* block */)a0;
- (char)clearAllState;
- (char)_loadSiteAtURL:(id)a0 shouldBootstrap:(char)a1;
- (id)initWithSetEnumerator:(id)a0 settings:(id)a1;
- (id)_applicableSetsForSite:(id)a0 allSets:(id)a1;
- (char)_maintainSiteAtURL:(id)a0 shouldDefer:(id /* block */)a1;
- (id)_retrieveOrLoadSiteAtURL:(id)a0 error:(id *)a1;
- (id)_commonSiteURLForPersonaId:(id)a0;
- (char)_enumerateSiteURLsUsingBlock:(id /* block */)a0;
- (void)_handleSysdiagnoseStarted;
- (char)_handleUpdatedSets:(id)a0;
- (char)_handleUpdatedSets:(id)a0 siteURL:(id)a1;
- (id)_lastGlobalMaintenanceAttempt;
- (id)_lastGlobalRebuildAttempt;
- (id)_lastGlobalResetAttempt;
- (char)_loadAllSites;
- (char)_loadOrCreateResolverInfo;
- (char)_maintainAllSites:(id /* block */)a0;
- (char)_prepareUpdateParametersForSiteURL:(id)a0 site:(id *)a1 siteWriter:(id *)a2 allSets:(id *)a3;
- (char)_rebuildAllSites:(id /* block */)a0;
- (char)_rebuildAllSitesWithSetEnumerator:(id)a0;
- (char)_rebuildSiteAtURL:(id)a0 shouldDefer:(id /* block */)a1;
- (char)_recordGlobalMaintenanceAttempt:(id *)a0;
- (char)_recordGlobalRebuildAttempt:(id *)a0;
- (char)_recordGlobalResetAttempt:(id *)a0;
- (void)_registerTrialExperimentUpdateHandler;
- (char)_resetAllSites;
- (char)_resetSiteAtURL:(id)a0;
- (char)_siteRequiresMaintenance:(id)a0;
- (char)_siteRequiresRebuild:(id)a0;
- (char)_siteRequiresReset:(id)a0;
- (id)_siteURLsForPersonaId:(id)a0;
- (id)_userVaultSiteURLForPersonaId:(id)a0;
- (char)clearSpeechProfileSiteWithUserId:(id)a0;
- (void)deleteInactiveSites;
- (char)handleAssetUpdate;
- (char)handleSettingsChange;
- (void)handleSiteAvailableForPersona:(id)a0;
- (void)handleSiteUnavailableForPersona:(id)a0;
- (void)handleSiteUnavailableSoonForPersona:(id)a0;
- (void)handleSysdiagnoseStarted;
- (char)handleUpdatedSets:(id)a0;
- (char)rebuildAllSpeechProfilesWithSetEnumerator:(id)a0;
- (char)rebuildSpeechProfileSiteWithUserId:(id)a0;

@end
