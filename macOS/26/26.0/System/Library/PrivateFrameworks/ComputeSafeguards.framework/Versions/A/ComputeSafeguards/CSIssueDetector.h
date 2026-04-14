@class NSArray, NSRegularExpression, CSPowerlogDBReader, NSObject, NSMutableArray;
@protocol OS_dispatch_source, OS_os_log;

@interface CSIssueDetector : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *triggerTimer;
@property (retain, nonatomic) NSObject<OS_os_log> *logger;
@property (retain) NSArray *genericCPUDetectorProcessDenyList;
@property (retain) NSRegularExpression *genericCPUDetectorProcessDenyRegex;
@property (retain) NSMutableArray *fatalMitigatedProcessList;
@property (retain) CSPowerlogDBReader *powerlogDBReader;
@property (retain) NSArray *rules;

+ (id)sharedInstance;

- (id)_init;
- (void)dayChangedNotificationReceived:(id)a0;
- (void)registerForDayChangedNotification;
- (void).cxx_destruct;
- (void)logIssuesToPowerLogWithPayload:(id)a0;
- (void)clearFatalMitigatedProcessList;
- (BOOL)compareWithValue1:(float)a0 andValue2:(float)a1 andComparator:(int)a2;
- (void)detectIssuesFromStartTime:(id)a0 endDate:(id)a1 withRules:(id)a2;
- (void)detectWithLookbackDuration:(double)a0;
- (id)evaluateRuleInFixedWindow:(id)a0 withStartDate:(id)a1 andEndDate:(id)a2;
- (id)evaluateRuleWithSlidingWindow:(id)a0 withStartDate:(id)a1 andEndDate:(id)a2;
- (void)forceDetectorViolationForProcess:(id)a0 withHandler:(id /* block */)a1;
- (id)getCPUIssueStartEndTime:(id)a0 valueThreshold:(float)a1;
- (id)getCPUIssueWithMitigationSuggestionForCoalitionID:(int)a0 withLaunchdName:(id)a1 fromStartDate:(id)a2 toEndDate:(id)a3 byRule:(id)a4;
- (id)getValueOfMetric:(int)a0 startDate:(id)a1 endDate:(id)a2;
- (void)handleDetectedIssues:(id)a0;
- (void)processCPUIntervalsForCondition:(id)a0 startDate:(id)a1 endDate:(id)a2 rule:(id)a3 normalizer:(id)a4 issueCandidates:(id)a5;
- (void)resetRuleParameters:(id)a0 withHandler:(id /* block */)a1;
- (void)setRuleParameters:(id)a0 withWindowSize:(id)a1 withStepSize:(id)a2 withMaxLookback:(id)a3 withDaemonOnly:(id)a4 withHandler:(id /* block */)a5;
- (void)testDetectWithLookbackDuration;
- (void)testHandleDetectedIssues;
- (void)updateCPUBuffer:(id)a0;

@end
