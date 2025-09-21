@interface FMScheduler : NSObject

+ (id)mainThreadScheduler;
+ (id)globalAsyncScheduler;
+ (id)operationQueueSchedulerWithMaxConcurrentOperationCount:(long long)a0;
+ (id)immediateScheduler;
+ (id)serialDispatchQueueSchedulerWithName:(id)a0;
+ (id)schedulerWithDispatchQueue:(id)a0;

@end
