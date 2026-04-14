@interface WindowManager.AdminXPCConnection : NSObject <WindowManager.AgentXPCProxyServerInterface, WindowManager.AgentXPCProxyClientInterface> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ xpcConnection;
}

- (id)init;
- (void).cxx_destruct;
- (void)xpcRequestLayoutStateWithCompletion:(id /* block */)a0;
- (void)xpcActivateWindowWithWindow:(unsigned int)a0 completion:(id /* block */)a1;
- (void)xpcRequestLayoutControlWithCompletion:(id /* block */)a0;
- (void)xpcReleaseLayoutControlWithCompletion:(id /* block */)a0;
- (void)xpcRequestRemoteTransitionCoordinationWithCompletion:(id /* block */)a0;
- (void)xpcReleaseRemoteTransitionCoordinationWithCompletion:(id /* block */)a0;
- (void)xpcInitializeRemoteTransitionInWithFinalLayoutState:(id)a0 windowAnimations:(id)a1 displayAnimations:(id)a2 options:(unsigned char)a3 startingAt:(double)a4 completion:(id /* block */)a5;
- (void)xpcUpdateRemoteTransitionInTo:(double)a0 completion:(id /* block */)a1;
- (void)xpcFinalizeRemoteTransitionInCompletion:(id /* block */)a0;
- (void)xpcCancelRemoteTransitionInCompletion:(id /* block */)a0;
- (void)xpcInitializeRemoteTransitionCoordinationOutWithInitialLayoutState:(id)a0 windowAnimations:(id)a1 displayAnimations:(id)a2 options:(unsigned char)a3 startingAt:(double)a4 completion:(id /* block */)a5;
- (void)xpcUpdateRemoteTransitionOutTo:(double)a0 completion:(id /* block */)a1;
- (void)xpcFinalizeRemoteTransitionOutWithCompletion:(id /* block */)a0;
- (void)xpcCancelRemoteTransitionOutWithCompletion:(id /* block */)a0;
- (void)xpcSetStageManagerEnabled:(BOOL)a0 completion:(id /* block */)a1;
- (void)xpcAddWindowsToSpaceWithWindowIDs:(id)a0 spaceID:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)xpcCommitPendingUpdatesWithCompletion:(id /* block */)a0;
- (void)xpcBeginWindowPickingModeWithSelectedWindow:(unsigned int)a0 completion:(id /* block */)a1;
- (void)xpcEndWindowPickingModeWithCompletion:(id /* block */)a0;
- (void)xpcHighlightWindowForPicking:(unsigned int)a0 completion:(id /* block */)a1;
- (void)didEndWindowPickingModeWithSelectedWindow:(unsigned int)a0;
- (void)didCancelWindowPickingMode;
- (void)xpcDiagnose:(id /* block */)a0;

@end
