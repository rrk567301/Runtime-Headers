@class NSLock, NSXPCConnection;

@interface DCDeviceMetadataDaemonConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *conn;
@property (retain, nonatomic) NSLock *connLock;

- (id)connection;
- (id)remoteObjectProxy:(id /* block */)a0;
- (id)synchronousRemoteObjectProxy:(id /* block */)a0;
- (int)currentUID;
- (void).cxx_destruct;
- (id)init;

@end
