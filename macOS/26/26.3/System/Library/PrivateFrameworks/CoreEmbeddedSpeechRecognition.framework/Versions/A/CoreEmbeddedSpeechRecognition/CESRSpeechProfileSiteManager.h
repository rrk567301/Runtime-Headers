@class NSMutableDictionary, CESRSpeechProfileSettings, TRIClient, NSObject, CESRDictionaryLog;
@protocol OS_dispatch_queue, CCSetEnumerator;

@interface CESRSpeechProfileSiteManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *siteForURL;
@property (retain, nonatomic) NSObject<CCSetEnumerator> *setEnumerator;
@property (retain, nonatomic) CESRSpeechProfileSettings *settings;
@property (retain, nonatomic) CESRDictionaryLog *managerInfo;
@property (retain, nonatomic) TRIClient *trialClient;

+ (id)defaultManager;

- (void).cxx_destruct;
- (BOOL)clearAllState;
- (BOOL)performMaintenance:(BOOL)a0 shouldDefer:(id /* block */)a1;
- (id)_retrieveOrLoadSiteAtURL:(id)a0 error:(id *)a1;
- (id)initWithSetEnumerator:(id)a0 settings:(id)a1;
- (BOOL)_loadSiteAtURL:(id)a0 shouldBootstrap:(BOOL)a1;
- (id)_commonSiteURLForPersonaId:(id)a0;
- (BOOL)_enumerateSiteURLsUsingBlock:(id /* block */)a0;
- (void)_handleSysdiagnoseStarted;
- (BOOL)_handleUpdatedSets:(id)a0;
- (BOOL)_handleUpdatedSets:(id)a0 siteURL:(id)a1;
- (id)_lastGlobalMaintenanceAttempt;
- (id)_lastGlobalRebuildAttempt;
- (id)_lastGlobalResetAttempt;
- (BOOL)_loadAllSites;
- (BOOL)_loadOrCreateManagerInfo;
- (BOOL)_maintainAllSites:(BOOL)a0 shouldDefer:(id /* block */)a1;
- (BOOL)_maintainSiteAtURL:(id)a0 rebuildOnly:(BOOL)a1 shouldDefer:(id /* block */)a2;
- (BOOL)_prepareSiteWriterForSiteURL:(id)a0 site:(id *)a1 siteWriter:(id *)a2;
- (BOOL)_rebuildAllSites:(id /* block */)a0;
- (BOOL)_rebuildAllSitesWithSetEnumerator:(id)a0;
- (BOOL)_rebuildSiteAtURL:(id)a0 shouldDefer:(id /* block */)a1;
- (BOOL)_recordGlobalMaintenanceAttempt:(id *)a0;
- (BOOL)_recordGlobalRebuildAttempt:(id *)a0;
- (BOOL)_recordGlobalResetAttempt:(id *)a0;
- (void)_registerTrialExperimentUpdateHandler;
- (BOOL)_resetAllSites;
- (BOOL)_resetSiteAtURL:(id)a0;
- (BOOL)_siteRequiresMaintenance:(id)a0;
- (BOOL)_siteRequiresRebuild:(id)a0;
- (BOOL)_siteRequiresReset:(id)a0;
- (id)_siteURLsForPersonaId:(id)a0;
- (void)_snapshotBookmarksForLocale:(id)a0 toPath:(id)a1;
- (BOOL)_snapshotSiteAtURL:(id)a0 locale:(id)a1 changeRegistry:(id)a2;
- (id)_userVaultSiteURLForPersonaId:(id)a0;
- (BOOL)clearSpeechProfileSiteWithUserId:(id)a0;
- (void)deleteInactiveSites;
- (void)handleNewPersonas:(id)a0;
- (void)handleRemovedPersonas:(id)a0;
- (void)handleSiteAvailableForPersona:(id)a0;
- (void)handleSiteUnavailableForPersona:(id)a0;
- (void)handleSiteUnavailableSoonForPersona:(id)a0;
- (void)handleSysdiagnoseStarted;
- (BOOL)handleUpdatedSets:(id)a0;
- (BOOL)rebuildAllSpeechProfilesWithSetEnumerator:(id)a0;
- (BOOL)rebuildSpeechProfileSiteWithUserId:(id)a0;
- (void)snapshotBookmarksForLocale:(id)a0 toPath:(id)a1;
- (void)updateRequiredLocales;

@end
