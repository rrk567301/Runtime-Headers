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
- (id)initWithSetEnumerator:(id)a0 settings:(id)a1;
- (BOOL)performMaintenance:(unsigned long long)a0 shouldDefer:(id /* block */)a1;
- (BOOL)_loadSiteAtURL:(id)a0 shouldBootstrap:(BOOL)a1;
- (id)_cachedSiteAtURL:(id)a0;
- (id)_commonSiteURLForPersonaId:(id)a0;
- (BOOL)_enumerateSiteURLsUsingBlock:(id /* block */)a0;
- (void)_handleSysdiagnoseStarted;
- (BOOL)_handleUpdatedSets:(id)a0;
- (BOOL)_handleUpdatedSets:(id)a0 siteURL:(id)a1;
- (BOOL)_initializeManagerInfo;
- (id)_lastGlobalMaintenanceAttempt;
- (id)_lastGlobalRebuildAttempt;
- (id)_lastGlobalResetAttempt;
- (BOOL)_loadAllSites;
- (BOOL)_maintainAllSites:(unsigned long long)a0 shouldDefer:(id /* block */)a1;
- (BOOL)_maintainSiteAtURL:(id)a0 maintenanceLevel:(unsigned long long)a1 shouldDefer:(id /* block */)a2;
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
- (void)deleteInactiveSites;
- (void)handleNewPersonaIds:(id)a0;
- (void)handleRemovedPersonaIds:(id)a0;
- (void)handleSiteAvailableForPersonaId:(id)a0;
- (void)handleSiteUnavailableForPersonaId:(id)a0;
- (void)handleSiteUnavailableSoonForPersonaId:(id)a0;
- (void)handleSysdiagnoseStarted;
- (BOOL)handleUpdatedSets:(id)a0;
- (BOOL)rebuildAllSpeechProfilesWithSetEnumerator:(id)a0;
- (BOOL)rebuildSpeechProfileSitesForPersonaId:(id)a0;
- (BOOL)resetAllSpeechProfileSites;
- (BOOL)resetSpeechProfileSitesForPersonaId:(id)a0;
- (void)snapshotBookmarksForLocale:(id)a0 toPath:(id)a1;
- (void)updateRequiredLocales;

@end
