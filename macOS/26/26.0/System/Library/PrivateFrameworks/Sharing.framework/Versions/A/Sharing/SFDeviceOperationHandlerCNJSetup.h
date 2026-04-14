@class CUReachabilityMonitor, SFSession, SKSetupCaptiveNetworkJoinServer, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_nw_path_monitor;

@interface SFDeviceOperationHandlerCNJSetup : NSObject {
    SKSetupCaptiveNetworkJoinServer *_cnjServer;
    BOOL _invalidateCalled;
    CUReachabilityMonitor *_reachabilityMonitor;
    int _cnsNotifyToken;
    BOOL _reachabilityDone;
    id /* block */ _responseHandler;
    BOOL _captiveAuthenticated;
    NSObject<OS_dispatch_source> *_ipAssignTimeout;
    NSObject<OS_nw_path_monitor> *_pathMonitor;
    BOOL _didAssignIP;
}

@property (retain, nonatomic) SFSession *sfSession;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (void)reset;
- (void)invalidate;
- (id)init;
- (void)activate;
- (void).cxx_destruct;
- (void)_handleCaptiveJoinRequestWithResponseHandler:(id /* block */)a0 reachabilityError:(id)a1;
- (void)_handleCaptiveJoinRequestWithResponseHandler:(id /* block */)a0;
- (void)_runReachability:(id)a0 responseHandler:(id /* block */)a1;

@end
