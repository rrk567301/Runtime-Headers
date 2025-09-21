@interface PLBackgroundJobHighPrioritySearchIndexingWorker : PLBackgroundJobSearchIndexingWorker

+ (id)_criteriaToUse;

- (unsigned long long)type;
- (short)_jobType;

@end
