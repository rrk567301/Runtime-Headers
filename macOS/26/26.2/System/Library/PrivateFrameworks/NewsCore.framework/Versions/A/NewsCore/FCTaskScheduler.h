@interface FCTaskScheduler : NSObject

+ (void)scheduleLowPriorityBlock:(id /* block */)a0;
+ (id)postLaunchQueue;
+ (id)lowPriorityOperationQueue;
+ (void)scheduleLowPriorityBlockForMainThread:(id /* block */)a0;
+ (void)scheduleOptionalPrefetchBlock:(id /* block */)a0;
+ (void)boostBackgroundDownloads;
+ (void)enableBackgroundDownloadsInSpiteOfHighPriorityTasks;
+ (void)popHighPriorityTaskInFlight;
+ (void)scheduleLowPriorityOperation:(id)a0;
+ (void)scheduleLowPriorityAsyncBlock:(id /* block */)a0;
+ (void)executeOptionalPrefetchBlock:(id /* block */)a0;
+ (void)scheduleBackgroundDownloadOperation:(id)a0;
+ (void)disableOptionalPrefetching;
+ (id)backgroundDownloadOperationQueue;
+ (void)schedulePostLaunchBlockForMainThread:(id /* block */)a0;
+ (void)pushHighPriorityTaskInFlight;
+ (id)lowPriorityQueue;

@end
