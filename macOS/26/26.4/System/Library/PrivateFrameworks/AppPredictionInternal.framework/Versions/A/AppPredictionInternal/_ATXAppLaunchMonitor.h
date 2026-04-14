@class _PASQueueLock, NSUserDefaults, ATXAppClipUsageDuetContextUpdateListener, _ATXAppIconState, NSSet, NSObject, _PASLock;
@protocol OS_dispatch_queue, ATXPETEventTracker2Protocol;

@interface _ATXAppLaunchMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_appLaunchHistoryQueue;
    NSObject<OS_dispatch_queue> *_logQueue;
    _PASQueueLock *_history;
    _PASLock *_cdContext;
    NSUserDefaults *_userDefaults;
    ATXAppClipUsageDuetContextUpdateListener *_appClipChangeListener;
    id<ATXPETEventTracker2Protocol> _tracker;
    _ATXAppIconState *_appIconState;
    NSSet *_predictionUpdateBlacklist;
}

+ (int)petClipCaptureTypeFromDuetClipLaunchReason:(int)a0;
+ (void)filterRemoteAppLaunchesByDisplayEvents:(id)a0 displayEvents:(id)a1 initialDisplayState:(BOOL)a2 block:(id /* block */)a3;
+ (id)predictionUpdateBlacklistedBundleIds;
+ (void)_harvestAppPredictionDataForBundleId:(id)a0 response:(id)a1;
+ (void)_logAppLaunch:(id)a0 from:(unsigned long long)a1;
+ (void)_logPredictionForBundleId:(id)a0 poweringAppClipBundleId:(id)a1 urlHash:(id)a2 isClip:(BOOL)a3 appLaunchReason:(id)a4 appClipLaunchReason:(int)a5 consumerType:(unsigned long long)a6 consumerSubType:(unsigned char)a7 context:(id)a8;
+ (void)mergeAppLaunches:(id)a0 andBacklightTransitions:(id)a1 callingAppLaunchBlock:(id /* block */)a2;

- (void)clearHistory;
- (void)stop;
- (void)processRemoteAppLaunches;
- (void)processDonationsForPreviousAppSessionEndIfNeeded;
- (void)_syncForTests;
- (void)_updateAppIconStateForTests:(id)a0;
- (void)_logAppLaunchOverallCaptureRateForBundleId:(id)a0 launchReason:(id)a1;
- (void)registerForBacklightChange;
- (void)addLaunchWithBundleId:(id)a0 date:(id)a1 timeZone:(id)a2 reason:(id)a3;
- (id)appLaunchSequenceManager;
- (id)appIconState;
- (BOOL)saveRemoteLaunchBookmarkDate:(id)a0 outError:(id *)a1;
- (void)handleRemoteAppLaunch:(id)a0 context:(id)a1;
- (void)swapAppInFocusStream:(id)a0 andDisplayOnIntervalStream:(id)a1;
- (id)initWithAppInfoManager:(id)a0 appLaunchHistogramManager:(id)a1 appLaunchSequenceManager:(id)a2 appDailyDose:(id)a3 appInFocusStream:(id)a4 displayOnIntervalStream:(id)a5 contextBuilder:(id)a6 tracker:(id)a7;
- (void)_addLaunchWithLockWitness:(id)a0 bundleId:(id)a1 date:(id)a2 timeZone:(id)a3 reason:(id)a4 context:(id)a5;
- (id)remoteLaunchBookmarkDate;
- (id)endDateForStreamQuery;
- (void)registerForAppClipLaunch;
- (id)dailyDose;
- (void)logAppLaunchForBundleId:(id)a0 launchReason:(id)a1;
- (void)clearIntentHistogramHistory;
- (void).cxx_destruct;
- (id)appLaunchHistogramManager;
- (id)initWithInMemoryStore;
- (BOOL)isValidAppLaunchBundleId:(id)a0;
- (void)registerForAppChange;
- (id)initWithAppInfoManager:(id)a0 appLaunchHistogramManager:(id)a1 appLaunchSequenceManager:(id)a2 appDailyDose:(id)a3 appInFocusStream:(id)a4 displayOnIntervalStream:(id)a5 contextBuilder:(id)a6 tracker:(id)a7 predictionUpdateBlacklist:(id)a8 heroPoiManager:(id)a9;
- (id)appInfoManager;
- (id)init;
- (id)stopDeltaRecording;
- (void)handleAppOrClipLaunchNotificationForBundleId:(id)a0 poweringAppClipBundleId:(id)a1 urlHash:(id)a2 isClip:(BOOL)a3 appLaunchReason:(id)a4 appClipLaunchReason:(int)a5 date:(id)a6;
- (void)start;
- (void)_logAppPanelLaunchRatioForBundleId:(id)a0 launchReason:(id)a1;
- (void)handleBacklightChangeNotificationWithValue:(int)a0 date:(id)a1;
- (void)startDeltaRecording;
- (void)_logAppPanelCaptureRateForBundleId:(id)a0;
- (void)updateLaunchHistoryFromStream:(double)a0 callback:(id /* block */)a1;
- (void)dealloc;

@end
