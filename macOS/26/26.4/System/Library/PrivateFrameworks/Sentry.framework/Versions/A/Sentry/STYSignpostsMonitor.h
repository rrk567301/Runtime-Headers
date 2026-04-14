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
- (void)stopMonitoringAppLaunchSignposts;
- (void)checkMonitoring:(BOOL)a0;
- (void)forEachEnabledHelper:(id /* block */)a0;
- (void)setupRetryAfterFailure;
- (void)stopMonitoringSignposts;
- (void)forEachHelper:(id /* block */)a0;
- (BOOL)needsEnablementChange;
- (BOOL)monitorAppLaunchSignposts;
- (BOOL)monitorWorkflowsWithDailyLogLimit:(int)a0 perPeriodLogLimit:(int)a1 periodLengthSec:(int)a2;
- (void)stopMonitoringWorkflows;
- (void).cxx_destruct;
- (BOOL)monitorSignposts:(BOOL)a0;
- (id)init;
- (void)reportLatencyToReceiveSignposts:(id)a0;

@end
