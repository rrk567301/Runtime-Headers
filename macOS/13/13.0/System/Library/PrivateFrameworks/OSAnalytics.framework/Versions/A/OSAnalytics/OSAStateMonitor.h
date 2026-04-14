@interface OSAStateMonitor : NSObject

+ (void)recordEvent:(id)a0;
+ (void)evaluateState;
+ (void)checkCALogWrittenStatus;
+ (void)checkSubmissionStatus;
+ (void)postFailureWithReason:(id)a0;
+ (id)keyForEvent:(id)a0;
+ (id)dateForEvent:(id)a0;

@end
