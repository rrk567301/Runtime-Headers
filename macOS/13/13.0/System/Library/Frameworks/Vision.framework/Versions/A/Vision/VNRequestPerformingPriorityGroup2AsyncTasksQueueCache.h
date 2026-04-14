@interface VNRequestPerformingPriorityGroup2AsyncTasksQueueCache : VNAsyncTasksQueueCache

+ (id)sharedCache;
+ (id)queueLabelWithUniqueAppendix:(id)a0;
+ (long long)maximumAllowedTasksInTheQueue;

@end
