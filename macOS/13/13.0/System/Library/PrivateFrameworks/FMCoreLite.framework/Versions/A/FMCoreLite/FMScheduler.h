@interface FMScheduler : NSObject

+ (id)immediateScheduler;
+ (id)globalAsyncScheduler;
+ (id)mainThreadScheduler;
+ (id)serialDispatchQueueSchedulerWithName:(id)a0;
+ (id)operationQueueSchedulerWithMaxConcurrentOperationCount:(long long)a0;
+ (id)schedulerWithDispatchQueue:(id)a0;

@end
