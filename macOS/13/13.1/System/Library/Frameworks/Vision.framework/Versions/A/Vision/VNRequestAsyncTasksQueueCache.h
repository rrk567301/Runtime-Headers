@interface VNRequestAsyncTasksQueueCache : VNAsyncTasksQueueCache

+ (id)sharedCache;
+ (id)queueLabelWithUniqueAppendix:(id)a0;
+ (long long)maximumAllowedTasksInTheQueue;

@end
