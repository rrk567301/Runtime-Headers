@class OS_xpc_remote_connection, NSMutableSet;

@interface LOMDeviceConnectionRemote : LOMDeviceConnection {
    OS_xpc_remote_connection *_xpcListener;
    NSMutableSet *_connections;
}

- (BOOL)activate;
- (id)initWithServiceName:(id)a0;
- (void)cancel;
- (void).cxx_destruct;
- (BOOL)setupXPCListener;
- (void)teardownXPCListener;

@end
