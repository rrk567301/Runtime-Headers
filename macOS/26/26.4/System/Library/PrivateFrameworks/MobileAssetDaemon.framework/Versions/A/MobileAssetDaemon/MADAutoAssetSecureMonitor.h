@class NSObject;
@protocol OS_dispatch_queue;

@interface MADAutoAssetSecureMonitor : NSObject

@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *monitorQueue;
@property (nonatomic) long long monitorBackgroundTaskStatus;
@property (nonatomic) BOOL activelyMonitoring;
@property (nonatomic) BOOL performedInitialOperation;
@property (nonatomic) BOOL currentlyRegistered;

+ (void)shutdown;
+ (id)autoAssetSecureMonitor;
+ (id)defaultTimesForBackoffRetry;
+ (id)nameForBGSystemTaskSchedulerError:(long long)a0;
+ (id)nameForBackgroundTaskStatus:(long long)a0;
+ (void)resumeWithNeedToMonitor:(id)a0 monitoringServerConnectivity:(BOOL)a1;
+ (void)updatedNeedToMonitor:(id)a0 monitoringServerConnectivity:(BOOL)a1;

- (id)_summary;
- (void).cxx_destruct;
- (id)init;
- (id)summary;
- (id)description;
- (long long)_incrementBackoffWithRetryIndex;
- (void)_cancelTask:(id)a0 forReason:(id)a1;
- (void)_createBackoffWithRetryCookieFile;
- (id)_createNonRepeatingSystemTask:(id)a0 withScheduledAfterSecs:(double)a1;
- (id)_currentTaskRequest:(id)a0;
- (void)_handleTatsuServerConnected:(id)a0;
- (long long)_readBackoffWithRetryIndex;
- (void)_registerBackgroundTask:(id)a0;
- (void)_resumeWithNeedToMonitor:(id)a0 monitoringServerConnectivity:(BOOL)a1;
- (long long)_secondsForBackoffWithRetryIndex:(long long)a0;
- (void)_submitBackgroundDownloadTask:(id)a0;
- (void)_updatedNeedToMonitor:(id)a0 monitoringServerConnectivity:(BOOL)a1;

@end
