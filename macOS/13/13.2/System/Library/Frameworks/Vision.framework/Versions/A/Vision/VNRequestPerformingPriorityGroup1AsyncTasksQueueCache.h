@interface VNRequestPerformingPriorityGroup1AsyncTasksQueueCache : VNAsyncTasksQueueCache

+ (id)sharedCache;
+ (id)queueLabelWithUniqueAppendix:(id)a0;
+ (long long)maximumAllowedTasksInTheQueue;

@end
