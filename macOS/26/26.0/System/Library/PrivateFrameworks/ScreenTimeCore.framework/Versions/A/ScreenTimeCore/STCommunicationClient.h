@class STCommunicationServiceClient, NSXPCConnection;

@interface STCommunicationClient : NSObject

@property (readonly) NSXPCConnection *connection;
@property (retain, nonatomic) STCommunicationServiceClient *communicationServiceClient;

+ (id)_newConnection;

- (void)dealloc;
- (void)authenticateForCommunicationConfigurationOverrideWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (id)currentConfigurationWithError:(id *)a0;
- (void).cxx_destruct;

@end
