@class NSMutableSet, NSObject;
@protocol OS_xpc_object;

@interface LOMDeviceConnectionLocal : LOMDeviceConnection {
    NSObject<OS_xpc_object> *_xpcListener;
    NSMutableSet *_connections;
}

- (void)cancel;
- (BOOL)activate;
- (id)initWithServiceName:(id)a0;
- (BOOL)setupXPCListener;
- (void).cxx_destruct;
- (void)acceptConnection:(id)a0;
- (void)teardownXPCListener;
- (BOOL)validateEntitlements:(id)a0;

@end
