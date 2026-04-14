@interface PLBackgroundJobDeferredRenderDerivativesLowPriorityWorker : PLBackgroundJobDeferredRenderDerivativesBaseWorker

+ (id)_criteriaToUse;

- (id)taskIdentifier;
- (id)deferredProcessingStatesHandled;
- (unsigned long long)type;
- (id)_predicateToFetchDeferredAssets;

@end
