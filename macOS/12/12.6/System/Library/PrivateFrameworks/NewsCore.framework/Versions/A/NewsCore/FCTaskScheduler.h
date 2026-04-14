@interface FCTaskScheduler : NSObject

+ (id)lowPriorityOperationQueue;
+ (id)lowPriorityQueue;
+ (void)scheduleLowPriorityOperation:(id)a0;
+ (id)backgroundDownloadOperationQueue;
+ (void)scheduleLowPriorityBlock:(id /* block */)a0;
+ (void)scheduleLowPriorityAsyncBlock:(id /* block */)a0;
+ (void)scheduleLowPriorityBlockForMainThread:(id /* block */)a0;
+ (void)pushHighPriorityTaskInFlight;
+ (void)popHighPriorityTaskInFlight;
+ (void)enableBackgroundDownloadsInSpiteOfHighPriorityTasks;
+ (void)scheduleOptionalPrefetchBlock:(id /* block */)a0;
+ (void)executeOptionalPrefetchBlock:(id /* block */)a0;
+ (void)disableOptionalPrefetching;

@end
