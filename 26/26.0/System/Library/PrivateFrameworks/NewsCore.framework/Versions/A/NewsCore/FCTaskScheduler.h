@interface FCTaskScheduler : NSObject

+ (id)lowPriorityQueue;
+ (void)scheduleLowPriorityOperation:(id)a0;
+ (void)scheduleLowPriorityBlock:(id /* block */)a0;
+ (void)popHighPriorityTaskInFlight;
+ (void)executeOptionalPrefetchBlock:(id /* block */)a0;
+ (void)scheduleBackgroundDownloadOperation:(id)a0;
+ (void)scheduleOptionalPrefetchBlock:(id /* block */)a0;
+ (void)boostBackgroundDownloads;
+ (void)scheduleLowPriorityBlockForMainThread:(id /* block */)a0;
+ (id)postLaunchQueue;
+ (id)lowPriorityOperationQueue;
+ (void)schedulePostLaunchBlockForMainThread:(id /* block */)a0;
+ (void)disableOptionalPrefetching;
+ (id)backgroundDownloadOperationQueue;
+ (void)enableBackgroundDownloadsInSpiteOfHighPriorityTasks;
+ (void)scheduleLowPriorityAsyncBlock:(id /* block */)a0;
+ (void)pushHighPriorityTaskInFlight;

@end
