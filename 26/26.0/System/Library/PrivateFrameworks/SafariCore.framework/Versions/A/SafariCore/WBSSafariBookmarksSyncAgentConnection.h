@class NSXPCConnection;
@protocol WBSSafariBookmarksSyncAgentProtocol;

@interface WBSSafariBookmarksSyncAgentConnection : NSObject {
    NSXPCConnection *_connection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectionLock;
}

@property (readonly, nonatomic) id<WBSSafariBookmarksSyncAgentProtocol> remoteObjectProxy;

- (void)_setUpConnectionIfNeeded;
- (id)init;
- (void)_connectionDidInvalidate;
- (void).cxx_destruct;

@end
