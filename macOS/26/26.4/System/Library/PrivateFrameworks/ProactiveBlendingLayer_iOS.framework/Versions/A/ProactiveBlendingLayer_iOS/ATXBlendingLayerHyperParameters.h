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
- (BOOL)uiSupportsExecutableTypeForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (id)consumerSubTypesToConsiderForClientModelIds:(id)a0;
- (long long)minConfidenceCategoryToConsider;
- (id)layoutsToConsiderForConsumerSubType:(unsigned char)a0;
- (BOOL)uiIsEnabledForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (double)sessionLogSamplingRate;
- (BOOL)isSuggestionEligibleForSuggestionsWidget:(id)a0;
- (id)initForTestingWithTrialAssetsOnly;
- (BOOL)uiSupportsClientModelIdForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (BOOL)uiSupportsSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (double)maxAgeOfStackSuggestionToConsiderStaleInSeconds;
- (void).cxx_destruct;
- (id)executableTypesToConsiderForConsumerSubType:(unsigned char)a0;
- (id)initForTestingWithMobileAssetAssetsOnly;
- (id)clientModelsToConsiderForConsumerSubType:(unsigned char)a0;
- (id)clientModelsToConsiderForConsumerSubType;
- (BOOL)isSuggestionEligibleForAppPredictionPanel:(id)a0;
- (id)init;
- (BOOL)uiConfidenceLevelMetBySuggestion:(id)a0;
- (id)clientModelPriorityOrder;
- (BOOL)uiSupportsLayoutType:(long long)a0 consumerSubType:(unsigned char)a1;
- (unsigned long long)lohStacksToConsiderAboveAndBelowForDeduplication;

@end
