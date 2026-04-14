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
- (id)init;
- (void)forEachHelper:(id /* block */)a0;
- (void)stopMonitoringAppLaunchSignposts;
- (void)stopMonitoringWorkflows;
- (void).cxx_destruct;
- (void)reportLatencyToReceiveSignposts:(id)a0;
- (void)stopMonitoringSignposts;
- (BOOL)monitorSignposts:(BOOL)a0;
- (BOOL)needsEnablementChange;
- (void)checkMonitoring:(BOOL)a0;
- (void)setupRetryAfterFailure;
- (BOOL)monitorWorkflowsWithDailyLogLimit:(int)a0 perPeriodLogLimit:(int)a1 periodLengthSec:(int)a2;
- (BOOL)monitorAppLaunchSignposts;
- (void)forEachEnabledHelper:(id /* block */)a0;

@end
