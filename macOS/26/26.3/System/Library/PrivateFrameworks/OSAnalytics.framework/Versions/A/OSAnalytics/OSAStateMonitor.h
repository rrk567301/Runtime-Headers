@interface OSAStateMonitor : NSObject

+ (void)evaluateState;
+ (id)evaluateCALogStates:(id)a0;
+ (void)checkCALogWrittenStatus;
+ (void)checkAndReportCALogStates;
+ (void)recordEvent:(id)a0;
+ (id)CALogStateToString:(long long)a0;
+ (void)recordEvent:(id)a0 with:(id)a1;
+ (void)postFailureWithReason:(id)a0;
+ (id)keyForEvent:(id)a0;
+ (BOOL)processCALogEvent:(id)a0 eventPayload:(id)a1 into:(id *)a2;
+ (id)dateForEvent:(id)a0;
+ (void)checkSubmissionStatus;

@end
