@class NSXPCConnection;

@interface STCommunicationClient : NSObject

@property (readonly) NSXPCConnection *connection;

+ (id)_newConnection;

- (void)authenticateForCommunicationConfigurationOverrideWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (id)currentConfigurationWithError:(id *)a0;
- (void).cxx_destruct;
- (id)init;

@end
