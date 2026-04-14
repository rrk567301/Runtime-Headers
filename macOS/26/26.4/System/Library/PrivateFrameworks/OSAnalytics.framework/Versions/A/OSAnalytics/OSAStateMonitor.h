@interface OSAStateMonitor : NSObject

+ (void)checkAndReportCALogStates;
+ (id)evaluateCALogStates:(id)a0;
+ (BOOL)processCALogEvent:(id)a0 eventPayload:(id)a1 into:(id *)a2;
+ (void)checkCALogWrittenStatus;
+ (void)recordEvent:(id)a0;
+ (id)CALogStateToString:(long long)a0;
+ (void)postFailureWithReason:(id)a0;
+ (void)evaluateState;
+ (id)dateForEvent:(id)a0;
+ (void)recordEvent:(id)a0 with:(id)a1;
+ (id)keyForEvent:(id)a0;
+ (void)checkSubmissionStatus;

@end
