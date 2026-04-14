@interface QPSwiftBridge : NSObject

+ (id)debugDescriptionFromLLMQULoggingMetrics:(id)a0;
+ (id)loggingMetricsFromLLMQUResult:(id)a0;
+ (id)parseFromLLMQUResult:(id)a0;
+ (void)parseLLMQUString:(id)a0 originatorPID:(id)a1 completion:(id /* block */)a2;
+ (void)prewarmLLMQUModelServerWithOriginatorPID:(int)a0;

@end
