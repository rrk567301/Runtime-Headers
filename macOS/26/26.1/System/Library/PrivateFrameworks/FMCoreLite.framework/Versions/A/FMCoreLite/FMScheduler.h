@interface FMScheduler : NSObject

+ (id)mainThreadScheduler;
+ (id)immediateScheduler;
+ (id)operationQueueSchedulerWithMaxConcurrentOperationCount:(long long)a0;
+ (id)serialDispatchQueueSchedulerWithName:(id)a0;
+ (id)globalAsyncScheduler;
+ (id)schedulerWithDispatchQueue:(id)a0;

@end
