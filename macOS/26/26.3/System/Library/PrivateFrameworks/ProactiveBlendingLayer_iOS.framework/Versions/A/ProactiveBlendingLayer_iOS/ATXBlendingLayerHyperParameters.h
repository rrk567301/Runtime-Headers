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

- (BOOL)isSuggestionEligibleForSuggestionsWidget:(id)a0;
- (id)executableTypesToConsiderForConsumerSubType:(unsigned char)a0;
- (long long)minConfidenceCategoryToConsider;
- (BOOL)uiSupportsLayoutType:(long long)a0 consumerSubType:(unsigned char)a1;
- (id)init;
- (double)maxAgeOfStackSuggestionToConsiderStaleInSeconds;
- (id)initForTestingWithMobileAssetAssetsOnly;
- (BOOL)uiSupportsSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (id)clientModelsToConsiderForConsumerSubType:(unsigned char)a0;
- (void).cxx_destruct;
- (BOOL)uiConfidenceLevelMetBySuggestion:(id)a0;
- (double)sessionLogSamplingRate;
- (id)initForTestingWithTrialAssetsOnly;
- (BOOL)isSuggestionEligibleForAppPredictionPanel:(id)a0;
- (id)clientModelsToConsiderForConsumerSubType;
- (BOOL)uiSupportsClientModelIdForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (id)consumerSubTypesToConsiderForClientModelIds:(id)a0;
- (id)layoutsToConsiderForConsumerSubType:(unsigned char)a0;
- (unsigned long long)lohStacksToConsiderAboveAndBelowForDeduplication;
- (BOOL)uiSupportsExecutableTypeForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (id)abGroup;
- (BOOL)uiIsEnabledForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (id)clientModelPriorityOrder;

@end
