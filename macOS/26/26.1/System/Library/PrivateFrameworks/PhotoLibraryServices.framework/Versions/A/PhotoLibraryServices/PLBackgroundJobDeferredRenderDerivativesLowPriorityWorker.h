@interface PLBackgroundJobDeferredRenderDerivativesLowPriorityWorker : PLBackgroundJobDeferredRenderDerivativesBaseWorker

+ (id)_criteriaToUse;

- (id)taskIdentifier;
- (unsigned long long)type;
- (id)_predicateToFetchDeferredAssets;
- (id)deferredProcessingStatesHandled;

@end
