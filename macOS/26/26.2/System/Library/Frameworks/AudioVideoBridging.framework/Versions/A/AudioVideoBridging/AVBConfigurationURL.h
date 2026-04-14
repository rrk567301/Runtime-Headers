@interface AVBConfigurationURL : NSObject

+ (BOOL)URLIsConfigurationURL:(id)a0;
+ (id)connectionsURLForEntityID:(unsigned long long)a0 onInterface:(id)a1;
+ (id)entityConfigurationURLForEntityID:(unsigned long long)a0 onInterface:(id)a1;
+ (BOOL)isConnectionsURL:(id)a0;
+ (BOOL)isEntityConfigurationURL:(id)a0;
+ (BOOL)isMediaClockAssistantURL:(id)a0;
+ (BOOL)isSampleRateAssistantURL:(id)a0;
+ (BOOL)isSetupAssistantURL:(id)a0;
+ (BOOL)isTuneOutputStreamLatencyAssistantURL:(id)a0;
+ (id)mediaClockAssistantURLForEntityID:(unsigned long long)a0 onInterface:(id)a1;
+ (id)sampleRateAssistantURLForEntityID:(unsigned long long)a0 onInterface:(id)a1;
+ (id)setupAssistantURL;
+ (id)setupAssistantURLForEntityID:(unsigned long long)a0 onInterface:(id)a1;
+ (id)tuneOutputStreamLatencyAssistantURLForEntityID:(unsigned long long)a0 onInterface:(id)a1;

@end
