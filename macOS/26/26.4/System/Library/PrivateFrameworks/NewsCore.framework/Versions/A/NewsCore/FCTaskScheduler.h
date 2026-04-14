@interface FCTaskScheduler : NSObject

+ (void)disableOptionalPrefetching;
+ (void)popHighPriorityTaskInFlight;
+ (void)scheduleLowPriorityAsyncBlock:(id /* block */)a0;
+ (void)scheduleLowPriorityBlockForMainThread:(id /* block */)a0;
+ (void)enableBackgroundDownloadsInSpiteOfHighPriorityTasks;
+ (void)executeOptionalPrefetchBlock:(id /* block */)a0;
+ (id)lowPriorityOperationQueue;
+ (void)scheduleOptionalPrefetchBlock:(id /* block */)a0;
+ (void)pushHighPriorityTaskInFlight;
+ (void)boostBackgroundDownloads;
+ (id)postLaunchQueue;
+ (void)scheduleLowPriorityOperation:(id)a0;
+ (id)backgroundDownloadOperationQueue;
+ (void)schedulePostLaunchBlockForMainThread:(id /* block */)a0;
+ (id)lowPriorityQueue;
+ (void)scheduleLowPriorityBlock:(id /* block */)a0;
+ (void)scheduleBackgroundDownloadOperation:(id)a0;

@end
