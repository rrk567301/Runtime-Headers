@class NSXPCConnection;

@interface AFSiriCapabilitiesServiceClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

- (id)service;
- (void)dealloc;
- (id)serviceWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)shouldDownloadAssetsForSiriSystemAssistantExperience:(id /* block */)a0;
- (BOOL)shouldDownloadAssetsForSiriSystemAssistantExperienceSync;
- (void)siriSystemAssistantExperienceEnabled:(id /* block */)a0;
- (BOOL)siriSystemAssistantExperienceEnabledSync;
- (void)siriWithAppIntentsEnabled:(id /* block */)a0;
- (BOOL)siriWithAppIntentsEnabledSync;
- (id)syncServiceWithErrorHandler:(id /* block */)a0;

@end
