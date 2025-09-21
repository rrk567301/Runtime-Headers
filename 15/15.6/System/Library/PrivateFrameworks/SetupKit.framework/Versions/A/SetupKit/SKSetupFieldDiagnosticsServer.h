@class CBServer, CBAdvertiser;

@interface SKSetupFieldDiagnosticsServer : SKSetupBase {
    CBAdvertiser *_bleAdvertiser;
    CBServer *_bleServer;
    char _completed;
}

- (id)init;
- (void)_activate;
- (void).cxx_destruct;
- (void)_invalidate;
- (void)_run;
- (id)descriptionWithLevel:(int)a0;
- (void)_bleAdvertiserEnsureStarted;
- (void)_bleAdvertiserEnsureStopped;
- (char)_bleAdvertiserShouldRun;
- (void)_bleServerAcceptConnecton:(id)a0;
- (void)_bleServerEnsureStarted;
- (void)_bleServerEnsureStopped;
- (void)_oobEnsureStarted;
- (void)_prepareSteps;

@end
