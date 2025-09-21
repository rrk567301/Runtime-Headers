@class NSXPCConnection;

@interface AFSiriCapabilitiesServiceClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

- (void)dealloc;
- (void).cxx_destruct;
- (id)service;
- (id)serviceWithErrorHandler:(id /* block */)a0;
- (void)shouldDownloadAssetsForSiriSystemAssistantExperience:(id /* block */)a0;
- (char)shouldDownloadAssetsForSiriSystemAssistantExperienceSync;
- (void)siriSystemAssistantExperienceEnabled:(id /* block */)a0;
- (char)siriSystemAssistantExperienceEnabledSync;
- (void)siriWithAppIntentsEnabled:(id /* block */)a0;
- (char)siriWithAppIntentsEnabledSync;
- (id)syncServiceWithErrorHandler:(id /* block */)a0;

@end
