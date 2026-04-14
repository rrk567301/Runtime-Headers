@class SGSqlEntityStore, SGServiceContext;
@protocol SGXPCActivityManagerProtocol;

@interface SGDManagerForCTS : NSObject {
    SGSqlEntityStore *_harvestStore;
    SGServiceContext *_context;
    struct SGDSuggestManagerCTSCriteriaState { BOOL hasItemsHighPriority; BOOL hasItemsLowPriority; } _ctsCriteriaState;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _geocodeLock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _verificationLock;
    double _lastFrontfillFinishTime;
    id<SGXPCActivityManagerProtocol> _xpcActivityManager;
}

+ (id)defaultInstance;
+ (id)sharedSingletonInstance;
+ (void)_logCallInteractions:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithHarvestStore:(id)a0 xpcActivityManager:(id)a1;
- (void)registerForCTS;
- (id)serviceContext;
- (void)_registerMobileAssetMetadataDownloadActivity;
- (void)_performMobileAssetMetadataDownloadActivity:(id)a0;
- (void)_registerForCollectWeeklyStats;
- (void)_performCollectWeeklyStats:(id)a0;
- (void)_registerForCTSTrimActivity;
- (void)_performTrimActivity:(id)a0;
- (void)_registerForCTSVacuumActivity;
- (void)_performVacuumActivity;
- (void)_registerForCTSIdentityAnalysisActivity;
- (void)_performIdentityAnalysisActivity:(id)a0;
- (void)_registerForCTSSendRTCActivity;
- (void)_performSendRTCActivity:(id)a0;
- (void)_registerForContactDetailCacheRebuildActivity;
- (void)performContactDetailCacheRebuildActivity:(id)a0;
- (void)_registerProcessPendingGeocodesActivity;
- (void)_performProcessPendingGeocodesActivity:(id)a0;
- (void)_registerProcessPendingVerificationActivity;
- (void)_performProcessPendingVerificationActivity:(id)a0 overrideVerificationStatus:(id)a1;
- (void)_registerMailIntelligenceTasksActivity;
- (void)_performMailIntelligenceTasksActivity:(id)a0;
- (void)_registerHarvestedURLMetricUploadActivity;
- (void)_performHarvestedURLMetricUploadAcitivity:(id)a0;
- (BOOL)processSearchableItem:(id)a0 pipeline:(id)a1 context:(id)a2 harvestMetrics:(id)a3;
- (BOOL)processTextMessage:(id)a0 pipeline:(id)a1 context:(id)a2 harvestMetrics:(id)a3;
- (BOOL)processMailMessage:(id)a0 headers:(id)a1 pipeline:(id)a2 context:(id)a3 harvestMetrics:(id)a4;
- (BOOL)_processMessage:(id)a0 pipeline:(id)a1 context:(id)a2 harvestMetrics:(id)a3;
- (BOOL)processSearchableItem:(id)a0 pipeline:(id)a1 context:(id)a2;
- (BOOL)processSearchableItemForTesting:(id)a0;
- (BOOL)hasAlreadyHarvestedSearchableItem:(id)a0;
- (BOOL)_shouldDissectContentWithUniqueIdentifier:(id)a0 domainIdentifier:(id)a1 bundleIdentifier:(id)a2 headers:(id)a3 accountIdentifier:(id)a4;
- (void)_registerForPhoneQREngagementDataSync;
- (void)_performPhoneQREngagementDataSync:(id)a0;
- (void)waitForXpcActivityQueue;

@end
