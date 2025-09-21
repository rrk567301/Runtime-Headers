@interface PLBackgroundJobLowPriorityChargerSearchIndexingWorker : PLBackgroundJobSearchIndexingWorker

+ (id)_criteriaToUse;

- (unsigned long long)type;
- (short)_jobType;
- (BOOL)_supportsIndexRebuild;

@end
