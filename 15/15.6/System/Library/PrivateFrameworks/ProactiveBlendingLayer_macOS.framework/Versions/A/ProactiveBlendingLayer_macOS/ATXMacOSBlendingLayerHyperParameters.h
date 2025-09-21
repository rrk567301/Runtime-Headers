@class NSString;

@interface ATXMacOSBlendingLayerHyperParameters : NSObject <ATXUniversalBlendingLayerHyperParametersProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)abGroup;
- (id)layoutsToConsiderForConsumerSubType:(unsigned char)a0;
- (double)sessionLogSamplingRate;
- (char)uiSupportsSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (long long)minConfidenceCategoryToConsider;
- (id)clientModelPriorityOrder;
- (id)clientModelsToConsiderForConsumerSubType;
- (id)clientModelsToConsiderForConsumerSubType:(unsigned char)a0;
- (id)consumerSubTypesToConsiderForClientModelIds:(id)a0;
- (id)executableTypesToConsiderForConsumerSubType:(unsigned char)a0;
- (char)uiConfidenceLevelMetBySuggestion:(id)a0;
- (char)uiIsEnabledForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (char)uiSupportsClientModelIdForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (char)uiSupportsExecutableTypeForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (char)uiSupportsLayoutType:(long long)a0 consumerSubType:(unsigned char)a1;

@end
