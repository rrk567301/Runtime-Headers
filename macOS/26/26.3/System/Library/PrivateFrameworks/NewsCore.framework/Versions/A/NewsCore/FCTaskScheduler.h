@interface FCTaskScheduler : NSObject

+ (id)lowPriorityQueue;
+ (void)scheduleLowPriorityBlockForMainThread:(id /* block */)a0;
+ (void)scheduleBackgroundDownloadOperation:(id)a0;
+ (void)pushHighPriorityTaskInFlight;
+ (void)disableOptionalPrefetching;
+ (void)enableBackgroundDownloadsInSpiteOfHighPriorityTasks;
+ (void)scheduleLowPriorityOperation:(id)a0;
+ (void)scheduleLowPriorityAsyncBlock:(id /* block */)a0;
+ (id)lowPriorityOperationQueue;
+ (id)backgroundDownloadOperationQueue;
+ (void)boostBackgroundDownloads;
+ (void)scheduleLowPriorityBlock:(id /* block */)a0;
+ (void)schedulePostLaunchBlockForMainThread:(id /* block */)a0;
+ (id)postLaunchQueue;
+ (void)popHighPriorityTaskInFlight;
+ (void)scheduleOptionalPrefetchBlock:(id /* block */)a0;
+ (void)executeOptionalPrefetchBlock:(id /* block */)a0;

@end
