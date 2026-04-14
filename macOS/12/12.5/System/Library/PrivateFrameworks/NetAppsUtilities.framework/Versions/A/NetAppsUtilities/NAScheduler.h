@interface NAScheduler : NSObject

+ (id)immediateScheduler;
+ (id)globalAsyncScheduler;
+ (id)mainThreadScheduler;
+ (id)serialDispatchQueueSchedulerWithName:(id)a0;
+ (id)operationQueueSchedulerWithMaxConcurrentOperationCount:(unsigned long long)a0;
+ (id)schedulerWithDispatchQueue:(id)a0;

@end
