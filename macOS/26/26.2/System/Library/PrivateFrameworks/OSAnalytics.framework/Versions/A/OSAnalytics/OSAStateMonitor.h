@interface OSAStateMonitor : NSObject

+ (id)keyForEvent:(id)a0;
+ (id)evaluateCALogStates:(id)a0;
+ (void)evaluateState;
+ (id)CALogStateToString:(long long)a0;
+ (void)checkCALogWrittenStatus;
+ (void)checkAndReportCALogStates;
+ (void)checkSubmissionStatus;
+ (void)postFailureWithReason:(id)a0;
+ (void)recordEvent:(id)a0 with:(id)a1;
+ (void)recordEvent:(id)a0;
+ (BOOL)processCALogEvent:(id)a0 eventPayload:(id)a1 into:(id *)a2;
+ (id)dateForEvent:(id)a0;

@end
