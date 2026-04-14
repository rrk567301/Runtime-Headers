@class NSLock, NSXPCConnection;

@interface NBStateController : NSObject <NBStateDaemonProtocol>

@property (retain) NSXPCConnection *serviceConnection;
@property (retain) NSLock *connectionLock;

+ (id)sharedInstance;

- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)remoteObjectProxy;
- (void).cxx_destruct;
- (id)init;
- (id)_xpcConnection;
- (void)dealloc;
- (void)deleteLocalStateForNoticeboardNotificationIdentifier:(id)a0;
- (void)markNotificationAsFinishedForIdentifier:(id)a0;
- (void)resetNoticeboardCatalogCheckTimestamp;
- (void)setLocalState:(id)a0 forNoticeboardNotificationIdentifier:(id)a1;

@end
