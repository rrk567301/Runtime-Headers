@class _ATXAppInfoManager, BPSSink, ATXInternalAppRegistrationNotification, NSObject, _ATXDuetHelper, ATXSafariIntentEventQualityFilter, PETScalarEventTracker, _ATXAppLaunchSequenceManager, PETDistributionEventTracker, _ATXDataStore, _ATXAppLaunchHistogramManager, NSUserDefaults, ATXCombinedIntentStream, BMBiomeScheduler;
@protocol OS_dispatch_queue, _CDLocalContext, ATXPredictionContextBuilderProtocol;

@interface ATXAppIntentMonitor : NSObject {
    _ATXAppLaunchHistogramManager *_appLaunchHistogramManager;
    _ATXDuetHelper *_duetHelper;
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

- (id)initWithAppLaunchHistogramManager:(id)a0 appInfoManager:(id)a1 appActionLaunchSequenceManager:(id)a2 duetHelper:(id)a3 intentStream:(id)a4 activityStream:(id)a5 menuItemStream:(id)a6 toolKitActionStream:(id)a7 dataStore:(id)a8 predictionContextBuilder:(id)a9 userDefaults:(id)a10 safariIntentFilter:(id)a11;
- (BOOL)shouldProcessNSUADonationsForSessionStartDate:(id)a0;
- (void)_handleCompletedIntentForForSourceItemID:(id)a0 atxIntentSource:(long long)a1;
- (void)updateActionPredictionPipelineForIntentEvent:(id)a0 weight:(float)a1 appSessionStartDate:(id)a2 appSessionEndDate:(id)a3;
- (void)_respondToIntentStreamChangingWithIntent:(id)a0;
- (void)_updateActionPredictionHistogramsForIntentEvent:(id)a0 weight:(float)a1 context:(id)a2;
- (void)start;
- (void)dealloc;
- (void)_listenToLinkActionStream;
- (void)_listenToIntentStream;
- (void)updateActionPredictionPipelineForIntentEvent:(id)a0 weight:(float)a1 appSessionStartDate:(id)a2 appSessionEndDate:(id)a3 context:(id)a4;
- (void)stop;
- (id)_appActionLaunchSequenceManager;
- (void)processIntentDonationsDuringAppSessionForBundleId:(id)a0 startDate:(id)a1 endDate:(id)a2 globals:(id)a3;
- (BOOL)sessionStartedBeforeDonationForStartDate:(id)a0 latestDonationDate:(id)a1;
- (void)_listenToActivityStream;
- (id)init;
- (void)_logIntentPredictionsForIntentEvent:(id)a0 context:(id)a1;
- (void)handleAppRegistrationForBundleIds:(id)a0;
- (BOOL)shouldProcessIntentDonationsForSessionStartDate:(id)a0;
- (void)_displayDonationOnLockscreenWithAction:(id)a0;
- (BOOL)_isAllowedDaemonDonationBundleId:(id)a0;
- (id)adjustedEndDateForOneSecondFlooringWithAppSessionEndDate:(id)a0;
- (BOOL)shouldAcceptMessageDonation:(id)a0;
- (void)updateActionPredictionPipelineForAppSession:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (void)_respondToLinkActionStreamChangingWithInvocation:(id)a0;
- (id)initWithAppLaunchHistogramManager:(id)a0 appInfoManager:(id)a1 appActionLaunchSequenceManager:(id)a2 dataStore:(id)a3;
- (void)_syncForTests;
- (void)processWeightedIntentDonations:(id)a0 forBundleId:(id)a1 startDate:(id)a2 endDate:(id)a3 globals:(id)a4;
- (id)fetchIntentEventsForAppSessionWithBundleId:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (id)adjustedStartDateForOneSecondFlooringWithAppSessionStartDate:(id)a0;
- (void)removeDonationFromLockscreenForAction:(id)a0;
- (void)updateActionPredictionSlotResolutionForIntentEvent:(id)a0 weight:(float)a1 prevLocationUUID:(id)a2 locationUUID:(id)a3 currentMotionType:(long long)a4 appSessionStartDate:(id)a5 appSessionEndDate:(id)a6 geohash:(long long)a7 coarseGeohash:(long long)a8;
- (void).cxx_destruct;
- (void)_handleDonationImmediatelyForBundleId:(id)a0 sourceItemID:(id)a1 completedSuccessfully:(BOOL)a2 isDonatedBySiri:(BOOL)a3 isAllowedDaemonDonationBundleId:(BOOL)a4;

@end
