@interface VNDetectorSyncTasksQueueCache : VNSyncTasksQueueCache

+ (id)sharedCache;
+ (id)queueLabelWithUniqueAppendix:(id)a0;
+ (long long)maximumAllowedTasksInTheQueue;

@end
