@interface VNDetectorSyncTasksQueueCache : VNSyncTasksQueueCache

+ (long long)maximumAllowedTasksInTheQueue;
+ (id)sharedCache;
+ (id)queueLabelWithUniqueAppendix:(id)a0;

@end
