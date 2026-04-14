@class _ATXAppInfoManager, BMBiomeScheduler, ATXInternalAppRegistrationNotification, NSObject, ATXSafariIntentEventQualityFilter, PETScalarEventTracker, _ATXAppLaunchSequenceManager, PETDistributionEventTracker, _ATXDataStore, _ATXAppLaunchHistogramManager, NSUserDefaults, ATXCombinedIntentStream, BPSSink;
@protocol OS_dispatch_queue, _CDLocalContext, ATXPredictionContextBuilderProtocol;

@interface ATXAppIntentMonitor : NSObject {
    _ATXAppLaunchHistogramManager *_appLaunchHistogramManager;
    _ATXAppInfoManager *_appInfoManager;
    _ATXAppLaunchSequenceManager *_appActionLaunchSequenceManager;
    _ATXDataStore *_dataStore;
    ATXCombinedIntentStream *_combinedIntentStream;
    id<ATXPredictionContextBuilderProtocol> _predictionContextBuilder;
    NSObject<OS_dispatch_queue> *_appIntentHistoryQueue;
    id<_CDLocalContext> _context;
    NSObject<OS_dispatch_queue> *_donationQueue;
    NSObject<OS_dispatch_queue> *_donationQueueLinkActions;
    PETScalarEventTracker *_donatedActionsTracker;
    PETDistributionEventTracker *_donatedActionInCacheTracker;
    ATXInternalAppRegistrationNotification *_appRegistrationListener;
    NSUserDefaults *_userDefaults;
    ATXSafariIntentEventQualityFilter *_safariIntentQualityFilter;
    BMBiomeScheduler *_intentScheduler;
    BPSSink *_intentSink;
    BMBiomeScheduler *_linkActionScheduler;
    BPSSink *_linkActionSink;
    BMBiomeScheduler *_nsuaScheduler;
    BPSSink *_nsuaSink;
}

- (void)stop;
- (BOOL)sessionStartedBeforeDonationForStartDate:(id)a0 latestDonationDate:(id)a1;
- (id)adjustedStartDateForOneSecondFlooringWithAppSessionStartDate:(id)a0;
- (BOOL)shouldProcessNSUADonationsForSessionStartDate:(id)a0;
- (void)_syncForTests;
- (BOOL)_isAllowedDaemonDonationBundleId:(id)a0;
- (void)_handleCompletedIntentForForSourceItemID:(id)a0 atxIntentSource:(long long)a1;
- (void)updateActionPredictionPipelineForIntentEvent:(id)a0 weight:(float)a1 appSessionStartDate:(id)a2 appSessionEndDate:(id)a3 context:(id)a4;
- (void)_respondToLinkActionStreamChangingWithInvocation:(id)a0;
- (void)updateActionPredictionSlotResolutionForIntentEvent:(id)a0 weight:(float)a1 prevLocationUUID:(id)a2 locationUUID:(id)a3 currentMotionType:(long long)a4 appSessionStartDate:(id)a5 appSessionEndDate:(id)a6 geohash:(long long)a7 coarseGeohash:(long long)a8;
- (id)_appActionLaunchSequenceManager;
- (id)initWithAppLaunchHistogramManager:(id)a0 appInfoManager:(id)a1 appActionLaunchSequenceManager:(id)a2 intentStream:(id)a3 activityStream:(id)a4 menuItemStream:(id)a5 toolKitActionStream:(id)a6 dataStore:(id)a7 predictionContextBuilder:(id)a8 userDefaults:(id)a9 safariIntentFilter:(id)a10;
- (void)_listenToIntentStream;
- (void)_logIntentPredictionsForIntentEvent:(id)a0 context:(id)a1;
- (id)fetchIntentEventsForAppSessionWithBundleId:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (void)updateActionPredictionPipelineForIntentEvent:(id)a0 weight:(float)a1 appSessionStartDate:(id)a2 appSessionEndDate:(id)a3;
- (void)_updateActionPredictionHistogramsForIntentEvent:(id)a0 weight:(float)a1 context:(id)a2;
- (void)removeDonationFromLockscreenForAction:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldProcessIntentDonationsForSessionStartDate:(id)a0;
- (BOOL)shouldAcceptMessageDonation:(id)a0;
- (void)_respondToIntentStreamChangingWithIntent:(id)a0;
- (void)_handleDonationImmediatelyForBundleId:(id)a0 sourceItemID:(id)a1 completedSuccessfully:(BOOL)a2 isDonatedBySiri:(BOOL)a3 isAllowedDaemonDonationBundleId:(BOOL)a4;
- (id)init;
- (void)processIntentDonationsDuringAppSessionForBundleId:(id)a0 startDate:(id)a1 endDate:(id)a2 globals:(id)a3;
- (id)initWithAppLaunchHistogramManager:(id)a0 appInfoManager:(id)a1 appActionLaunchSequenceManager:(id)a2 dataStore:(id)a3;
- (void)start;
- (void)handleAppRegistrationForBundleIds:(id)a0;
- (void)updateActionPredictionPipelineForAppSession:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (id)adjustedEndDateForOneSecondFlooringWithAppSessionEndDate:(id)a0;
- (void)_listenToLinkActionStream;
- (void)_listenToActivityStream;
- (void)dealloc;
- (void)_displayDonationOnLockscreenWithAction:(id)a0;
- (void)processWeightedIntentDonations:(id)a0 forBundleId:(id)a1 startDate:(id)a2 endDate:(id)a3 globals:(id)a4;

@end
