@class CSPowerlogDBReader, CSIssueDetector, NSDate, NSObject;
@protocol OS_os_log, OS_dispatch_source;

@interface CSTriggerManager : NSObject

@property (retain) NSObject<OS_os_log> *logger;
@property (retain) NSObject<OS_dispatch_source> *triggerTimer;
@property float triggerInterval;
@property float savedTriggerInterval;
@property (retain) CSPowerlogDBReader *powerlogDBReader;
@property (retain) CSIssueDetector *issueDetector;
@property (retain) NSDate *lastTriggerTimerDate;

+ (id)sharedInstance;
+ (void)run;

- (id)_init;
- (void)_start;
- (void).cxx_destruct;
- (BOOL)checkCpuPercentageAndInvokeIssueDetection:(id)a0 windowStartDate:(id)a1;
- (BOOL)checkDrainAndInvokeIssueDetection:(id)a0;
- (BOOL)cpuPercentageTriggerForWindowEndDate:(id)a0 windowStartDate:(id)a1 score:(double *)a2;
- (void)detectAndInvokeIssueDetection:(id)a0 slidingWindowStartDate:(id)a1;
- (id)generateMetadataForDrain:(int)a0 cpuPercentage:(int)a1 detectionLookbackDuration:(int)a2;
- (id)generatePayloadWithMetadata:(id)a0 triggeredDetection:(int)a1 triggeredType:(int)a2;
- (int)getDetectionLookbackDuration;
- (int)getDrainPercentage:(id)a0;
- (id)getTriggerInterval;
- (void)logTriggerToPPS:(int)a0 cpuPercentage:(int)a1 triggeredDetection:(int)a2 triggeredType:(int)a3 detectionLookbackDuration:(int)a4;
- (void)modifyTriggerInterval:(id)a0;
- (void)processTimerFiredAction;

@end
