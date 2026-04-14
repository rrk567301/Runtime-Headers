@class NSString;

@interface ATXMacOSBlendingLayerHyperParameters : NSObject <ATXUniversalBlendingLayerHyperParametersProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)abGroup;
- (id)clientModelsToConsiderForConsumerSubType;
- (BOOL)uiConfidenceLevelMetBySuggestion:(id)a0;
- (BOOL)uiSupportsClientModelIdForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (BOOL)uiSupportsExecutableTypeForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (BOOL)uiIsEnabledForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (BOOL)uiSupportsLayoutType:(long long)a0 consumerSubType:(unsigned char)a1;
- (long long)minConfidenceCategoryToConsider;
- (id)clientModelsToConsiderForConsumerSubType:(unsigned char)a0;
- (id)layoutsToConsiderForConsumerSubType:(unsigned char)a0;
- (id)executableTypesToConsiderForConsumerSubType:(unsigned char)a0;
- (double)sessionLogSamplingRate;
- (id)clientModelPriorityOrder;
- (BOOL)uiSupportsSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (id)consumerSubTypesToConsiderForClientModelIds:(id)a0;

@end
