@class NSString, NSDictionary;

@interface ATXBlendingLayerHyperParameters : NSObject <ATXUniversalBlendingLayerHyperParametersProtocol> {
    NSDictionary *_parameters;
    NSDictionary *_clientModelsToConsiderForConsumerSubType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)abHelperWithMobileAssets;
+ (id)abHelperWithTrialAssets;

- (BOOL)uiConfidenceLevelMetBySuggestion:(id)a0;
- (BOOL)uiSupportsExecutableTypeForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (long long)minConfidenceCategoryToConsider;
- (BOOL)uiIsEnabledForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (id)abGroup;
- (id)initForTestingWithMobileAssetAssetsOnly;
- (unsigned long long)lohStacksToConsiderAboveAndBelowForDeduplication;
- (id)executableTypesToConsiderForConsumerSubType:(unsigned char)a0;
- (BOOL)uiSupportsSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (id)clientModelsToConsiderForConsumerSubType:(unsigned char)a0;
- (BOOL)uiSupportsLayoutType:(long long)a0 consumerSubType:(unsigned char)a1;
- (id)init;
- (id)consumerSubTypesToConsiderForClientModelIds:(id)a0;
- (double)sessionLogSamplingRate;
- (BOOL)uiSupportsClientModelIdForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (double)maxAgeOfStackSuggestionToConsiderStaleInSeconds;
- (id)initForTestingWithTrialAssetsOnly;
- (id)layoutsToConsiderForConsumerSubType:(unsigned char)a0;
- (id)clientModelsToConsiderForConsumerSubType;
- (id)clientModelPriorityOrder;
- (BOOL)isSuggestionEligibleForSuggestionsWidget:(id)a0;
- (BOOL)isSuggestionEligibleForAppPredictionPanel:(id)a0;
- (void).cxx_destruct;

@end
