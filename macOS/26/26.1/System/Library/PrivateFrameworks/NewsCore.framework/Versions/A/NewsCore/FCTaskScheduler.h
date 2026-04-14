@interface FCTaskScheduler : NSObject

+ (void)popHighPriorityTaskInFlight;
+ (void)boostBackgroundDownloads;
+ (id)lowPriorityQueue;
+ (id)lowPriorityOperationQueue;
+ (void)pushHighPriorityTaskInFlight;
+ (void)schedulePostLaunchBlockForMainThread:(id /* block */)a0;
+ (void)scheduleLowPriorityBlockForMainThread:(id /* block */)a0;
+ (void)scheduleBackgroundDownloadOperation:(id)a0;
+ (void)scheduleLowPriorityBlock:(id /* block */)a0;
+ (id)backgroundDownloadOperationQueue;
+ (void)scheduleLowPriorityOperation:(id)a0;
+ (void)scheduleLowPriorityAsyncBlock:(id /* block */)a0;
+ (void)disableOptionalPrefetching;
+ (void)enableBackgroundDownloadsInSpiteOfHighPriorityTasks;
+ (void)executeOptionalPrefetchBlock:(id /* block */)a0;
+ (void)scheduleOptionalPrefetchBlock:(id /* block */)a0;
+ (id)postLaunchQueue;

@end
