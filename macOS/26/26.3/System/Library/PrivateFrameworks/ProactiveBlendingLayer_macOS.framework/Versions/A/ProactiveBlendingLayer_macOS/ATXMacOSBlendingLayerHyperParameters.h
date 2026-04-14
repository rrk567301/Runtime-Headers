@class NSString;

@interface ATXMacOSBlendingLayerHyperParameters : NSObject <ATXUniversalBlendingLayerHyperParametersProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)executableTypesToConsiderForConsumerSubType:(unsigned char)a0;
- (long long)minConfidenceCategoryToConsider;
- (BOOL)uiSupportsLayoutType:(long long)a0 consumerSubType:(unsigned char)a1;
- (BOOL)uiSupportsSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (id)clientModelsToConsiderForConsumerSubType:(unsigned char)a0;
- (BOOL)uiConfidenceLevelMetBySuggestion:(id)a0;
- (double)sessionLogSamplingRate;
- (id)clientModelsToConsiderForConsumerSubType;
- (BOOL)uiSupportsClientModelIdForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (id)consumerSubTypesToConsiderForClientModelIds:(id)a0;
- (id)layoutsToConsiderForConsumerSubType:(unsigned char)a0;
- (BOOL)uiSupportsExecutableTypeForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (id)abGroup;
- (BOOL)uiIsEnabledForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (id)clientModelPriorityOrder;

@end
