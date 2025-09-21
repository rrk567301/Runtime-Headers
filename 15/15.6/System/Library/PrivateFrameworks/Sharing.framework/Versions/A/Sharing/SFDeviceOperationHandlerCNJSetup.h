@class CUReachabilityMonitor, SFSession, SKSetupCaptiveNetworkJoinServer, NSObject;
@protocol OS_dispatch_queue;

@interface SFDeviceOperationHandlerCNJSetup : NSObject {
    SKSetupCaptiveNetworkJoinServer *_cnjServer;
    char _invalidateCalled;
    CUReachabilityMonitor *_reachabilityMonitor;
    int _cnsNotifyToken;
    char _reachabilityDone;
    id /* block */ _responseHandler;
}

@property (retain, nonatomic) SFSession *sfSession;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)_handleCaptiveJoinRequestWithResponseHandler:(id /* block */)a0 reachabilityError:(id)a1;
- (void)_handleCaptiveJoinRequestWithResponseHandler:(id /* block */)a0;
- (void)_runReachability:(id)a0 responseHandler:(id /* block */)a1;

@end
