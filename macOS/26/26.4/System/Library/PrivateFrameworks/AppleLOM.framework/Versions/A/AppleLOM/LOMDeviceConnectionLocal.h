@class NSMutableSet, NSObject;
@protocol OS_xpc_object;

@interface LOMDeviceConnectionLocal : LOMDeviceConnection {
    NSObject<OS_xpc_object> *_xpcListener;
    NSMutableSet *_connections;
}

- (BOOL)activate;
- (id)initWithServiceName:(id)a0;
- (void)cancel;
- (void).cxx_destruct;
- (BOOL)setupXPCListener;
- (void)acceptConnection:(id)a0;
- (void)teardownXPCListener;
- (BOOL)validateEntitlements:(id)a0;

@end
