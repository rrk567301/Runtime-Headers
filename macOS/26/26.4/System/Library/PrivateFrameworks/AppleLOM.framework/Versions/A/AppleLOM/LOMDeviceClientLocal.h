@class NSObject;
@protocol OS_xpc_object;

@interface LOMDeviceClientLocal : LOMDeviceClient {
    NSObject<OS_xpc_object> *_connection;
}

- (void)teardownXPCConnection;
- (void).cxx_destruct;
- (BOOL)setupXPCConnection;
- (id)init;
- (id)description;
- (BOOL)install:(id)a0 error:(out id *)a1;
- (id)sendCommand:(id)a0 error:(id *)a1;

@end
