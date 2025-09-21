@protocol PFTScheduler;

@interface PFTScheduler : NSObject

@property (class, readonly) id<PFTScheduler> immediateScheduler;
@property (class, readonly) id<PFTScheduler> globalAsyncScheduler;
@property (class, readonly) id<PFTScheduler> mainThreadScheduler;
@property (class, readonly) id<PFTScheduler> offMainThreadScheduler;
@property (class, readonly) id<PFTScheduler> inlineScheduler;

+ (id)offMainThreadSchedulerWithBackgroundScheduler:(id)a0;
+ (id)serialDispatchQueueSchedulerWithName:(id)a0;
+ (id)synchronousSerialDispatchQueueWithName:(id)a0;
+ (id)schedulerWithDispatchQueue:(id)a0;
+ (id)serialDispatchQueueSchedulerWithName:(id)a0 qualityOfService:(unsigned int)a1;
+ (id)operationQueueScheduleWithQualityOfService:(unsigned long long)a0;
+ (id)operationQueueSchedulerWithMaxConcurrentOperationCount:(long long)a0 qualityOfService:(unsigned long long)a1;
+ (id)operationQueueSchedulerWithMaxConcurrentOperationCount:(long long)a0 qualityOfService:(unsigned long long)a1 name:(id)a2;
+ (id)operationQueueSchedulerWithMaxConcurrentOperationCount:(long long)a0 underlyingQueue:(id)a1 qualityOfService:(unsigned long long)a2;
+ (id)operationQueueSchedulerWithOperationQueue:(id)a0 qualityOfService:(unsigned long long)a1;

@end
