@class CUNANPublisher, NSString, CWFInterface, CWFActivity, CBAdvertiser, NSObject, CBServer;
@protocol OS_dispatch_queue;

@interface SKSetupServer : SKSetupBase <CUActivatable, CUAuthenticatableServer> {
    unsigned short _bleAdvertisePSM;
    CBAdvertiser *_bleAdvertiser;
    CBServer *_bleServer;
    BOOL _completed;
    NSString *_nanEndpointID;
    CUNANPublisher *_nanPublisher;
    CWFActivity *_wifiKeepAliveActivity;
    CWFInterface *_wifiKeepAliveInterface;
}

@property (copy, nonatomic) id /* block */ overallCompletionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ authCompletionHandler;
@property (copy, nonatomic) id /* block */ authHidePasswordHandler;
@property (copy, nonatomic) id /* block */ authShowPasswordHandler;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) int passwordType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_invalidate;
- (void)reset;
- (void)_update;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)_bleAdvertiserEnsureStopped;
- (void)_bleServerEnsureStopped;
- (void)_bleServerEnsureStarted;
- (BOOL)_bleAdvertiserShouldRun;
- (void)_bleAdvertiserEnsureStarted;
- (void)_prepareSteps;
- (void)_prepareStepsOSRecovery;
- (void)_nanPublisherEnsureStopped;
- (void)_wifiKeepAliveEnsureStopped;
- (void)_nanPublisherEnsureStarted;
- (void)_wifiKeepAliveEnsureStarted;
- (void)_handleAcceptBLEConnection:(id)a0;
- (void)_handleAcceptNANData:(id)a0 endpoint:(id)a1;
- (void)_handleAcceptCommon:(id)a0;

@end
