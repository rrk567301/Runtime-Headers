@class NEGuardProxy;

@interface NEGuardProxyManager : NSObject <NEAppProxyProviderContainerDelegate> {
    NEGuardProxy *_guardProxy;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (void)stopWithCompletionHandler:(id /* block */)a0;
- (void)start;
- (void)container:(id)a0 didFailWithError:(id)a1;
- (void)container:(id)a0 didRequestFlowDivertControlSocketWithCompletionHandler:(id /* block */)a1;
- (void)container:(id)a0 didSetTunnelConfiguration:(id)a1 completionHandler:(id /* block */)a2;
- (void)container:(id)a0 didStartWithError:(id)a1;

@end
