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
+ (id)abHelperWithTrialAssets;
+ (id)abHelperWithMobileAssets;

- (id)abGroup;
- (BOOL)uiIsEnabledForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (unsigned long long)lohStacksToConsiderAboveAndBelowForDeduplication;
- (BOOL)uiConfidenceLevelMetBySuggestion:(id)a0;
- (id)clientModelsToConsiderForConsumerSubType:(unsigned char)a0;
- (long long)minConfidenceCategoryToConsider;
- (id)initForTestingWithMobileAssetAssetsOnly;
- (id)initForTestingWithTrialAssetsOnly;
- (id)clientModelsToConsiderForConsumerSubType;
- (id)clientModelPriorityOrder;
- (id)executableTypesToConsiderForConsumerSubType:(unsigned char)a0;
- (BOOL)uiSupportsLayoutType:(long long)a0 consumerSubType:(unsigned char)a1;
- (id)layoutsToConsiderForConsumerSubType:(unsigned char)a0;
- (double)sessionLogSamplingRate;
- (id)consumerSubTypesToConsiderForClientModelIds:(id)a0;
- (BOOL)uiSupportsExecutableTypeForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (BOOL)isSuggestionEligibleForSuggestionsWidget:(id)a0;
- (void).cxx_destruct;
- (BOOL)uiSupportsSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (BOOL)isSuggestionEligibleForAppPredictionPanel:(id)a0;
- (double)maxAgeOfStackSuggestionToConsiderStaleInSeconds;
- (id)init;
- (BOOL)uiSupportsClientModelIdForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;

@end
