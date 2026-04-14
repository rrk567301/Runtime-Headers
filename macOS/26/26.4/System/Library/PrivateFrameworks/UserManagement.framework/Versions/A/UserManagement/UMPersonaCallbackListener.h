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

- (void)willSwitchToUser:(id)a0 completionHandler:(id /* block */)a1;
- (void)readyToSwitchToUser:(id)a0 completionHandler:(id /* block */)a1;
- (void)personaUpdateCallbackForMachServiceCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)deviceLoginSessionStateDidUpdate;
- (void)bubbleDidPop;
- (void)userSwitchTaskListDidUpdate;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)readyToSwitchToLoginSession:(id)a0 completionHandler:(id /* block */)a1;
- (void)personaListDidUpdateCompletionHandler:(id /* block */)a0;
- (void)uploadContentWithCompletionHandler:(id /* block */)a0;

@end
