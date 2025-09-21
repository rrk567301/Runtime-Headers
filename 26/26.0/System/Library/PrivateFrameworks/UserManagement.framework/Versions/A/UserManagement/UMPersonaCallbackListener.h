@class NSString, NSMutableSet, NSXPCListener;

@interface UMPersonaCallbackListener : NSObject <NSXPCListenerDelegate, UMXPCClient> {
    NSString *_machServiceName;
    NSMutableSet *_xpcConnections;
    NSXPCListener *_xpcListener;
    id /* block */ _personaUpdateCallbackHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)uploadContentWithCompletionHandler:(id /* block */)a0;
- (void)deviceLoginSessionStateDidUpdate;
- (id)init;
- (void)willSwitchToUser:(id)a0 completionHandler:(id /* block */)a1;
- (void)readyToSwitchToLoginSession:(id)a0 completionHandler:(id /* block */)a1;
- (void)readyToSwitchToUser:(id)a0 completionHandler:(id /* block */)a1;
- (void)userSwitchTaskListDidUpdate;
- (void)bubbleDidPop;
- (void)personaUpdateCallbackForMachServiceCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)personaListDidUpdateCompletionHandler:(id /* block */)a0;

@end
