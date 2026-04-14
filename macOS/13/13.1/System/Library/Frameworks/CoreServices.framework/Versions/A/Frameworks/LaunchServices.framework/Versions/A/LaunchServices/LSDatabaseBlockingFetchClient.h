@class NSXPCConnection;

@interface LSDatabaseBlockingFetchClient : NSObject <LSDatabaseBlockingFetchProtocol> {
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
- (id)initWithXPCConnection:(id)a0;
- (void)getServerStoreBlockingWithCompletionHandler:(id /* block */)a0;

@end
