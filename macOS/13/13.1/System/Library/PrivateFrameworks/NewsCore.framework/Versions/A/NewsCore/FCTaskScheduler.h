@interface FCTaskScheduler : NSObject

+ (id)lowPriorityOperationQueue;
+ (void)scheduleLowPriorityBlock:(id /* block */)a0;
+ (void)scheduleLowPriorityAsyncBlock:(id /* block */)a0;
+ (void)scheduleLowPriorityBlockForMainThread:(id /* block */)a0;
+ (void)scheduleLowPriorityOperation:(id)a0;
+ (id)lowPriorityQueue;
+ (id)backgroundDownloadOperationQueue;
+ (void)pushHighPriorityTaskInFlight;
+ (void)popHighPriorityTaskInFlight;
+ (void)enableBackgroundDownloadsInSpiteOfHighPriorityTasks;
+ (void)scheduleOptionalPrefetchBlock:(id /* block */)a0;
+ (void)executeOptionalPrefetchBlock:(id /* block */)a0;
+ (void)disableOptionalPrefetching;

@end
