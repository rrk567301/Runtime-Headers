@interface PLBackgroundJobEditRenderingVideoWorker : PLBackgroundJobEditRenderingWorker

+ (BOOL)shouldUseExpectedDurationCriteria;

- (id)_predicateToFetchDeferredAdjustmentNeededAssets;
- (unsigned long long)type;

@end
