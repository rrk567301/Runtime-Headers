@class NSLock, NSXPCConnection;

@interface DCDeviceMetadataDaemonConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *conn;
@property (retain, nonatomic) NSLock *connLock;

- (id)remoteObjectProxy:(id /* block */)a0;
- (id)init;
- (id)synchronousRemoteObjectProxy:(id /* block */)a0;
- (int)currentUID;
- (id)connection;
- (void).cxx_destruct;

@end
