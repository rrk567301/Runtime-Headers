@class NSString, NSMutableDictionary, NSObject, MADAnalyticsEventSubmitter;
@protocol OS_dispatch_queue;

@interface MADAnalyticsManager : NSObject {
    NSObject<OS_dispatch_queue> *_stateQueue;
    MADAnalyticsEventSubmitter *_coreEventSubmitter;
}

@property BOOL overrideClientNameAsTestTool;
@property BOOL prependClientNameWithTestTool;
@property BOOL recordCacheDeleteTelemetry;
@property BOOL analyticsSendImmediate;
@property (retain) NSMutableDictionary *assetTypeEventTracker;
@property (readonly, nonatomic) NSString *savePath;
@property (readonly) long long reportingLevel;

+ (id)getAnalyticsManager;
+ (id)getTestAnalyticsManager:(id)a0;

- (id)initWithPath:(id)a0;
- (void)setEvent:(id)a0;
- (void)submitEvent:(id)a0;
- (void)removeEvent:(id)a0;
- (void)submitAllEvents;
- (BOOL)saveEventToDisk:(id)a0;
- (id)nilToNoneString:(id)a0;
- (void)_queue_submitEvent:(id)a0;
- (id)recordMobileAssetPurgeAttempt:(id)a0 withUrgency:(int)a1 withBytesPurged:(long long)a2 withResult:(long long)a3 withDir:(id)a4 withRetentionPolicy:(long long)a5 withReason:(id)a6;
- (id)copyEventFromPath:(id)a0;
- (void)removeAllEvents;
- (void)analyticsPreferences;
- (void)recordDownloadSuccessForAssetType:(id)a0 notificationSuffix:(id)a1 fileType:(id)a2;
- (id)recordPushNotification:(id)a0 assetType:(id)a1 cloudChannel:(id)a2 forPopulationType:(long long)a3 userInitiated:(BOOL)a4 interestAcrossTerm:(BOOL)a5 lockAcrossReboot:(BOOL)a6 lockAcrossTermination:(BOOL)a7;
- (id)recordEventWithName:(id)a0 assetType:(id)a1 payload:(id)a2;
- (BOOL)shouldRecordEventForAssetType:(id)a0;
- (void)_queue_setEvent:(id)a0;
- (void)removeEventsWithName:(id)a0;
- (BOOL)eventRecordingEnabled;
- (void)recordDownloadAttemptForAssetType:(id)a0 clientName:(id)a1 baseUrl:(id)a2 relativePath:(id)a3 purpose:(id)a4 result:(id)a5 analyticsFileType:(id)a6 isAutoDownload:(BOOL)a7 isPallas:(BOOL)a8 pallasAssetAudience:(id)a9 isUserPriority:(BOOL)a10 bytesWritten:(id)a11 bytesTransferredEst:(id)a12 additionalData:(id)a13;
- (void).cxx_destruct;
- (id)recordCacheDeleteAttempt:(long long)a0 timeTakenSecs:(double)a1 cacheDeleteUrgency:(long long)a2 results:(id)a3 targetPurgeVolume:(id)a4 triggeringOperation:(long long)a5;
- (void)recordDownloadAttemptForAssetType:(id)a0 clientName:(id)a1 baseUrl:(id)a2 relativePath:(id)a3 purpose:(id)a4 result:(id)a5 analyticsFileType:(id)a6 isAutoDownload:(BOOL)a7 isPallas:(BOOL)a8 pallasAssetAudience:(id)a9 isUserPriority:(BOOL)a10 bytesWritten:(id)a11 bytesTransferredEst:(id)a12 withTaskMetrics:(id)a13 withOptions:(id)a14 additionalData:(id)a15;
- (id)init;
- (id)yesNoString:(BOOL)a0;
- (void)changeReportingLevel:(long long)a0;
- (void)recordBackportedBrainConnectAttemptSuccessful:(BOOL)a0 brainBuildVersion:(id)a1 errorString:(id)a2;
- (void)_queue_submitAllEvents;
- (id)recordPushNotification:(id)a0 assetType:(id)a1 cloudChannels:(id)a2 forPopulationType:(long long)a3 userInitiated:(BOOL)a4 interestAcrossTerm:(BOOL)a5 lockAcrossReboot:(BOOL)a6 lockAcrossTermination:(BOOL)a7;
- (id)removePrefix:(id)a0 fromString:(id)a1;
- (id)recordMobileAssetSecureAttempt:(id)a0 assetType:(id)a1 assetVersion:(id)a2 clientName:(id)a3 operation:(long long)a4 secureReason:(id)a5 fromLocation:(id)a6 sucessfullyPersonalized:(BOOL)a7 personalizeFailureReason:(id)a8 sucessfullyMounted:(BOOL)a9 mountingFailureReason:(id)a10 successfullyGrafted:(BOOL)a11 graftingFailureReason:(id)a12 successfullyMappedToExclave:(BOOL)a13 mapToExclaveFailureReason:(id)a14 withHealingResult:(long long)a15;
- (id)recordMobileAssetScheduler:(long long)a0 forSelector:(id)a1 withXpcID:(id)a2 forPushJob:(id)a3 forSetJob:(id)a4 inSchedulerState:(long long)a5 inXPCState:(id)a6 didJobFail:(id)a7;
- (void)recordQueryAttemptForAssetType:(id)a0 clientName:(id)a1 purpose:(id)a2 result:(id)a3 assetCount:(id)a4 returnTypes:(id)a5 filtered:(BOOL)a6 requireSpecificAsset:(BOOL)a7;
- (id)recordMobileAssetPromotionAttempt:(id)a0 assetType:(id)a1 assetVersion:(id)a2 osPromotion:(BOOL)a3 successfullyPromoted:(BOOL)a4 withReason:(long long)a5;

@end
