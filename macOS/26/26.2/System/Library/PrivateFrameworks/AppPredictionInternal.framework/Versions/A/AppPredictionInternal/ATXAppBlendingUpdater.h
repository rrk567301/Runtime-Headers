@interface ATXAppBlendingUpdater : NSObject

+ (id)clientModelIdForConsumerSubType:(unsigned char)a0;
+ (id)clientModelSpecForAppPredictionsForClientModelId:(id)a0;
+ (void)updateBlendingLayerForConsumerSubType:(unsigned char)a0;
+ (id)clientModelForAppPredictionsForClientModelId:(id)a0;

@end
