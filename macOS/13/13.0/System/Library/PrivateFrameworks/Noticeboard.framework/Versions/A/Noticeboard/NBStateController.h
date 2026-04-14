@class NSLock, NSXPCConnection;

@interface NBStateController : NSObject <NBStateDaemonProtocol>

@property (retain) NSXPCConnection *serviceConnection;
@property (retain) NSLock *connectionLock;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)_xpcConnection;
- (void)setLocalState:(id)a0 forNoticeboardNotificationIdentifier:(id)a1;
- (void)deleteLocalStateForNoticeboardNotificationIdentifier:(id)a0;
- (void)resetNoticeboardCatalogCheckTimestamp;
- (void)markNotificationAsFinishedForIdentifier:(id)a0;

@end
