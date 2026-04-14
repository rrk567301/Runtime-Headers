@class OS_xpc_remote_connection, NSMutableSet;

@interface LOMDeviceConnectionRemote : LOMDeviceConnection {
    OS_xpc_remote_connection *_xpcListener;
    NSMutableSet *_connections;
}

- (BOOL)setupXPCListener;
- (void)cancel;
- (id)initWithServiceName:(id)a0;
- (void).cxx_destruct;
- (BOOL)activate;
- (void)teardownXPCListener;

@end
