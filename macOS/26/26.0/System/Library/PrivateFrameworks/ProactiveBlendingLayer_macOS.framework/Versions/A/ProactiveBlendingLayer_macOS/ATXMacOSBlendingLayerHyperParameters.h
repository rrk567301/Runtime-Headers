@class NSString;

@interface ATXMacOSBlendingLayerHyperParameters : NSObject <ATXUniversalBlendingLayerHyperParametersProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)uiConfidenceLevelMetBySuggestion:(id)a0;
- (BOOL)uiSupportsExecutableTypeForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (long long)minConfidenceCategoryToConsider;
- (BOOL)uiIsEnabledForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (id)abGroup;
- (id)executableTypesToConsiderForConsumerSubType:(unsigned char)a0;
- (BOOL)uiSupportsSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (id)clientModelsToConsiderForConsumerSubType:(unsigned char)a0;
- (BOOL)uiSupportsLayoutType:(long long)a0 consumerSubType:(unsigned char)a1;
- (id)consumerSubTypesToConsiderForClientModelIds:(id)a0;
- (double)sessionLogSamplingRate;
- (BOOL)uiSupportsClientModelIdForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (id)layoutsToConsiderForConsumerSubType:(unsigned char)a0;
- (id)clientModelsToConsiderForConsumerSubType;
- (id)clientModelPriorityOrder;

@end
