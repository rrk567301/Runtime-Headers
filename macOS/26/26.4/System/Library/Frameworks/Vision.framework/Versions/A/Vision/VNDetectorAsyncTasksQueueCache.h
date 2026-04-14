@interface VNDetectorAsyncTasksQueueCache : VNAsyncTasksQueueCache

+ (long long)maximumAllowedTasksInTheQueue;
+ (id)sharedCache;
+ (id)queueLabelWithUniqueAppendix:(id)a0;

@end
