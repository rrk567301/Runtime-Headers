@interface PLBackgroundJobDeferredRenderDerivativesHighPriorityWorker : PLBackgroundJobDeferredRenderDerivativesBaseWorker

+ (id)_criteriaToUse;

- (id)taskIdentifier;
- (unsigned long long)type;
- (id)deferredProcessingStatesHandled;
- (id)_predicateToFetchDeferredAssets;

@end
