@interface PLBackgroundJobLowPriorityBatterySearchIndexingWorker : PLBackgroundJobSearchIndexingWorker

+ (id)_criteriaToUse;

- (short)_jobType;
- (char)_supportsIndexRebuild;

@end
