@class NSString, CBAdvertiser, FLFollowUpController, CBServer;

@interface SKSetupCaptiveNetworkJoinServer : SKSetupBase {
    CBAdvertiser *_bleAdvertiser;
    CBServer *_bleServer;
    unsigned int _captiveNetworkCookie;
    NSString *_captiveNetworkInterfaceName;
    BOOL _captiveNetworkWebSheetActive;
    BOOL _captiveNetworkWebSheetCompleted;
    BOOL _cfuCleared;
    FLFollowUpController *_cfuController;
}

@property (nonatomic) int mode;

+ (void)resetWithCompletionHandler:(id /* block */)a0;

- (id)init;
- (void)_activate;
- (void).cxx_destruct;
- (void)_invalidate;
- (void)_invalidated;
- (void)_run;
- (id)descriptionWithLevel:(int)a0;
- (void)_connectionEnded:(id)a0;
- (void)_captiveNetworkProbeRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_captiveNetworkLoginRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_bleAdvertiserEnsureStopped;
- (void)_bleServerEnsureStopped;
- (void)_captiveNetworkProbeEnsureStopped;
- (void)_cfuEnsuredStopped;
- (void)_runDefault;
- (void)_runDetected;
- (void)_runUserRequest;
- (void)_oobEnsureStarted;
- (void)_bleServerEnsureStarted;
- (BOOL)_bleAdvertiserShouldRun;
- (void)_bleAdvertiserEnsureStarted;
- (void)_cfuEnsuredStarted;
- (void)_bleServerAcceptConnecton:(id)a0;
- (void)_captiveNetworkLoginInfo:(id)a0 cookie:(unsigned int)a1 responseHandler:(id /* block */)a2;
- (void)_captiveNetworkProbeResult:(int)a0 responseHandler:(id /* block */)a1;

@end
