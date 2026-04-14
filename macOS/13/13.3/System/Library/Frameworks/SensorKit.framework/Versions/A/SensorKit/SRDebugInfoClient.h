@class NSXPCConnection;

@interface SRDebugInfoClient : NSObject

@property (retain) NSXPCConnection *connection;
@property BOOL connectionDidInterrupt;

+ (void)initialize;
+ (id)clientInterface;
+ (id)remoteInterface;
+ (id)connectionToDaemon;

- (void)dealloc;
- (id)init;
- (id)initWithConnection:(id)a0;
- (void)invalidate;
- (void)setupConnection;
- (void)datastoreListingWithReply:(id /* block */)a0;
- (void)dumpClientsWithReply:(id /* block */)a0;
- (void)dumpConfigurationsWithReply:(id /* block */)a0;
- (void)dumpDefaultsWithReply:(id /* block */)a0;
- (void)dumpStateCacheWithReply:(id /* block */)a0;
- (void)listClientsWithReply:(id /* block */)a0;

@end
