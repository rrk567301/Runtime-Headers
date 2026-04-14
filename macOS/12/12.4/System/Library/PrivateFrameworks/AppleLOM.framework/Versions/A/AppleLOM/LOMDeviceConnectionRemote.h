@class OS_xpc_remote_connection, NSMutableSet;

@interface LOMDeviceConnectionRemote : LOMDeviceConnection {
    OS_xpc_remote_connection *_xpcListener;
    NSMutableSet *_connections;
}

- (void).cxx_destruct;
- (void)cancel;
- (BOOL)activate;
- (id)initWithServiceName:(id)a0;
- (BOOL)setupXPCListener;
- (void)teardownXPCListener;

@end
