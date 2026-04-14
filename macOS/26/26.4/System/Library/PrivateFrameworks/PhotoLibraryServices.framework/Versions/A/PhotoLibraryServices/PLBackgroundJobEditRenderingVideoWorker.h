@interface PLBackgroundJobEditRenderingVideoWorker : PLBackgroundJobEditRenderingWorker

+ (BOOL)shouldUseExpectedDurationCriteria;

- (unsigned long long)type;
- (id)_predicateToFetchDeferredAdjustmentNeededAssets;

@end
