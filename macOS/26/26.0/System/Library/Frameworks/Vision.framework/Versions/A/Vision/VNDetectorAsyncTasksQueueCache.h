@interface VNDetectorAsyncTasksQueueCache : VNAsyncTasksQueueCache

+ (id)queueLabelWithUniqueAppendix:(id)a0;
+ (id)sharedCache;
+ (long long)maximumAllowedTasksInTheQueue;

@end
