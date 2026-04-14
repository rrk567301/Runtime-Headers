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

- (id)clientModelPriorityOrder;
- (BOOL)uiSupportsSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (unsigned long long)lohStacksToConsiderAboveAndBelowForDeduplication;
- (id)clientModelsToConsiderForConsumerSubType:(unsigned char)a0;
- (id)initForTestingWithTrialAssetsOnly;
- (id)abGroup;
- (id)layoutsToConsiderForConsumerSubType:(unsigned char)a0;
- (BOOL)uiSupportsLayoutType:(long long)a0 consumerSubType:(unsigned char)a1;
- (long long)minConfidenceCategoryToConsider;
- (BOOL)uiSupportsClientModelIdForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (BOOL)isSuggestionEligibleForSuggestionsWidget:(id)a0;
- (id)clientModelsToConsiderForConsumerSubType;
- (void).cxx_destruct;
- (id)initForTestingWithMobileAssetAssetsOnly;
- (double)sessionLogSamplingRate;
- (id)executableTypesToConsiderForConsumerSubType:(unsigned char)a0;
- (BOOL)isSuggestionEligibleForAppPredictionPanel:(id)a0;
- (BOOL)uiIsEnabledForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (id)consumerSubTypesToConsiderForClientModelIds:(id)a0;
- (BOOL)uiConfidenceLevelMetBySuggestion:(id)a0;
- (id)init;
- (BOOL)uiSupportsExecutableTypeForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (double)maxAgeOfStackSuggestionToConsiderStaleInSeconds;

@end
