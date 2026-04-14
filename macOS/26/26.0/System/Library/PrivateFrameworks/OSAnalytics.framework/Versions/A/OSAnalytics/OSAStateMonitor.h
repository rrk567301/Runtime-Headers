@interface OSAStateMonitor : NSObject

+ (id)dateForEvent:(id)a0;
+ (void)recordEvent:(id)a0;
+ (void)postFailureWithReason:(id)a0;
+ (void)checkCALogWrittenStatus;
+ (id)keyForEvent:(id)a0;
+ (void)checkSubmissionStatus;
+ (void)recordEvent:(id)a0 with:(id)a1;
+ (void)checkAndReportCALogStates;
+ (BOOL)processCALogEvent:(id)a0 eventPayload:(id)a1 into:(id *)a2;
+ (id)CALogStateToString:(long long)a0;
+ (id)evaluateCALogStates:(id)a0;
+ (void)evaluateState;

@end
