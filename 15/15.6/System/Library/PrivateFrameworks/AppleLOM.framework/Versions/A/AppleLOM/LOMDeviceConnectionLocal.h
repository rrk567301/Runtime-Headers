@class NSMutableSet, NSObject;
@protocol OS_xpc_object;

@interface LOMDeviceConnectionLocal : LOMDeviceConnection {
    NSObject<OS_xpc_object> *_xpcListener;
    NSMutableSet *_connections;
}

- (void).cxx_destruct;
- (char)activate;
- (void)cancel;
- (id)initWithServiceName:(id)a0;
- (void)acceptConnection:(id)a0;
- (char)setupXPCListener;
- (void)teardownXPCListener;
- (char)validateEntitlements:(id)a0;

@end
