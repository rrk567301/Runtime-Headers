@class OS_xpc_remote_connection, NSMutableSet;

@interface LOMDeviceConnectionRemote : LOMDeviceConnection {
    OS_xpc_remote_connection *_xpcListener;
    NSMutableSet *_connections;
}

- (void)cancel;
- (void).cxx_destruct;
- (BOOL)setupXPCListener;
- (BOOL)activate;
- (id)initWithServiceName:(id)a0;
- (void)teardownXPCListener;

@end
