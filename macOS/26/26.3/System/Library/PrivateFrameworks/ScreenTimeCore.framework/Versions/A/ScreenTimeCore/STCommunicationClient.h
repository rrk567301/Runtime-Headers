@class NSXPCConnection;

@interface STCommunicationClient : NSObject

@property (readonly) NSXPCConnection *connection;

+ (id)_newConnection;

- (id)init;
- (void).cxx_destruct;
- (void)authenticateForCommunicationConfigurationOverrideWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (id)currentConfigurationWithError:(id *)a0;

@end
