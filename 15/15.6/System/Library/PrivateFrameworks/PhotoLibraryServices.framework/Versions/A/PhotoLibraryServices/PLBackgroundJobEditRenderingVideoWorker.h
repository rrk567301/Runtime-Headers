@interface PLBackgroundJobEditRenderingVideoWorker : PLBackgroundJobEditRenderingWorker

+ (char)shouldUseExpectedDurationCriteria;

- (id)_predicateToFetchDeferredAdjustmentNeededAssets;

@end
