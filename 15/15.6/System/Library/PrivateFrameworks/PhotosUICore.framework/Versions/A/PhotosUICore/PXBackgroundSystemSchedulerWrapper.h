@class NSDictionary;

@interface PXBackgroundSystemSchedulerWrapper : NSObject

@property (class, readonly, nonatomic) NSDictionary *taskParameters;

+ (char)signalTaskStartedWithError:(id *)a0;
+ (char)signalTaskStoppedWithError:(id *)a0;

@end
