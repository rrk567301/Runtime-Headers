@interface OSAStateMonitor : NSObject

+ (void)recordEvent:(id)a0;
+ (void)checkCALogWrittenStatus;
+ (void)checkSubmissionStatus;
+ (id)dateForEvent:(id)a0;
+ (void)evaluateState;
+ (id)keyForEvent:(id)a0;
+ (void)postFailureWithReason:(id)a0;

@end
