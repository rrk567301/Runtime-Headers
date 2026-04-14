@class STYSignpostStreamingStatistics, STYGeneralSignpostMonitorHelper, STYSpecialAppLaunchSignpostMonitorHelper, STYWorkflowResponsivenessMonitorHelper, NSDate, NSObject, SignpostSupportObjectExtractor;
@protocol OS_dispatch_queue;

@interface STYSignpostsMonitor : NSObject

@property (retain) NSObject<OS_dispatch_queue> *monitorQueue;
@property (retain) SignpostSupportObjectExtractor *signpostExtractor;
@property (retain) STYSignpostStreamingStatistics *streamingStatistics;
@property (retain) NSDate *timeOfLastExtractorFailure;
@property unsigned int successiveExtractorFailureCount;
@property unsigned int eventCount;
@property (retain) STYGeneralSignpostMonitorHelper *generalSignpostHelper;
@property (retain) STYSpecialAppLaunchSignpostMonitorHelper *specialAppLaunchSignpostHelper;
@property (retain) STYWorkflowResponsivenessMonitorHelper *workflowResponsivenessHelper;

+ (id)sharedMonitor;

- (void)disable;
- (void)reportLatencyToReceiveSignposts:(id)a0;
- (void)checkMonitoring:(BOOL)a0;
- (BOOL)monitorSignposts:(BOOL)a0;
- (void)stopMonitoringWorkflows;
- (void)stopMonitoringAppLaunchSignposts;
- (void)stopMonitoringSignposts;
- (id)init;
- (void)forEachHelper:(id /* block */)a0;
- (void)setupRetryAfterFailure;
- (BOOL)needsEnablementChange;
- (void)forEachEnabledHelper:(id /* block */)a0;
- (BOOL)monitorAppLaunchSignposts;
- (BOOL)monitorWorkflowsWithDailyLogLimit:(int)a0 perPeriodLogLimit:(int)a1 periodLengthSec:(int)a2;
- (void).cxx_destruct;

@end
