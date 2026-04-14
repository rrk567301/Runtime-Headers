@class NSObject, NSMutableArray, NSXPCConnection;
@protocol OS_dispatch_queue, WiFiP2PXPCProtocol;

@interface AWDLServiceDiscoveryManager : NSObject {
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_queue;
    id<WiFiP2PXPCProtocol> _proxy;
    NSMutableArray *_registeredServices;
    NSMutableArray *_activeTrafficRegistrations;
    int _numReconnectAttempts;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isConnected;
- (void)resetState;
- (void)handleError:(long long)a0;
- (void)startServiceDiscoveryWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)stopServiceDiscoveryWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (long long)createNewXpcConnection;
- (void)startServiceDiscoverySync:(id)a0 addObject:(BOOL)a1;
- (BOOL)requiresConnection;
- (void)attemptReconnect;
- (void)stopServiceDiscoverySync:(id)a0;
- (BOOL)setTrafficRegistration:(id)a0 error:(id *)a1;
- (BOOL)clearTrafficRegistration:(id)a0 error:(id *)a1;

@end
