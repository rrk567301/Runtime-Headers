@class NSLock, NSXPCConnection;

@interface DCDeviceMetadataDaemonConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *conn;
@property (retain, nonatomic) NSLock *connLock;

- (id)remoteObjectProxy:(id /* block */)a0;
- (id)init;
- (id)synchronousRemoteObjectProxy:(id /* block */)a0;
- (id)connection;
- (void).cxx_destruct;
- (int)currentUID;

@end
