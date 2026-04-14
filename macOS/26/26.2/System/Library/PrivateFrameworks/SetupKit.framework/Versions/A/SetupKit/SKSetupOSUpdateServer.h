@class CBServer, CBAdvertiser;

@interface SKSetupOSUpdateServer : SKSetupBase {
    CBAdvertiser *_bleAdvertiser;
    CBServer *_bleServer;
    BOOL _completed;
}

- (id)descriptionWithLevel:(int)a0;
- (void)_run;
- (void).cxx_destruct;
- (void)_activate;
- (id)init;
- (void)_invalidate;
- (void)_bleAdvertiserEnsureStarted;
- (void)_bleAdvertiserEnsureStopped;
- (BOOL)_bleAdvertiserShouldRun;
- (void)_bleServerAcceptConnecton:(id)a0;
- (void)_bleServerEnsureStarted;
- (void)_bleServerEnsureStopped;
- (void)_oobEnsureStarted;
- (void)_prepareSteps;

@end
