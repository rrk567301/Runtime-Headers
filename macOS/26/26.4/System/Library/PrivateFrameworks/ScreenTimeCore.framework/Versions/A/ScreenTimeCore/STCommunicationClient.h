@class NSXPCConnection;

@interface STCommunicationClient : NSObject

@property (readonly) NSXPCConnection *connection;

+ (id)_newConnection;

- (void)authenticateWithDescription:(id)a0 completionHandler:(id /* block */)a1;
- (void)authenticateForCommunicationConfigurationOverrideWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (id)currentConfigurationWithError:(id *)a0;
- (void)dealloc;

@end
