@class NSXPCListener, NSXPCListenerEndpoint, NSXPCConnection, NSXPCInterface, NSString;

@interface STCommunicationServiceClient : NSObject <NSXPCListenerDelegate, STPasscodeAuthenticationResultReceiverProtocol>

@property (retain) NSXPCConnection *connection;
@property (retain) NSXPCListener *activeListener;
@property (readonly) NSXPCListenerEndpoint *clientListenerEndpoint;
@property (retain) id providedService;
@property (retain) NSXPCInterface *providedServiceInterface;
@property (copy) id /* block */ pendingAuthenticationCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)dealloc;
- (void)authenticateForCommunicationConfigurationOverrideWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (id)currentConfigurationWithError:(id *)a0;
- (void).cxx_destruct;
- (void)receivePasscodeAuthenticationResult:(id)a0 completionHandler:(id /* block */)a1;

@end
