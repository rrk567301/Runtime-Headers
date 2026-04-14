@class NSLock, NSXPCConnection;

@interface NBStateController : NSObject <NBStateDaemonProtocol>

@property (retain) NSXPCConnection *serviceConnection;
@property (retain) NSLock *connectionLock;

+ (id)sharedInstance;

- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (id)_xpcConnection;
- (id)init;
- (void).cxx_destruct;
- (void)deleteLocalStateForNoticeboardNotificationIdentifier:(id)a0;
- (void)markNotificationAsFinishedForIdentifier:(id)a0;
- (void)resetNoticeboardCatalogCheckTimestamp;
- (void)setLocalState:(id)a0 forNoticeboardNotificationIdentifier:(id)a1;

@end
