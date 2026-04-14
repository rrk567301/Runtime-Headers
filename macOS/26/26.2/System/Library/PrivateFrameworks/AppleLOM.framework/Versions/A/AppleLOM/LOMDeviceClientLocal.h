@class NSObject;
@protocol OS_xpc_object;

@interface LOMDeviceClientLocal : LOMDeviceClient {
    NSObject<OS_xpc_object> *_connection;
}

- (void).cxx_destruct;
- (id)description;
- (BOOL)setupXPCConnection;
- (id)init;
- (void)teardownXPCConnection;
- (BOOL)install:(id)a0 error:(out id *)a1;
- (id)sendCommand:(id)a0 error:(id *)a1;

@end
