@class CBServer, CBAdvertiser;

@interface SKSetupFieldDiagnosticsServer : SKSetupBase {
    CBAdvertiser *_bleAdvertiser;
    CBServer *_bleServer;
    BOOL _completed;
}

- (void)_invalidate;
- (id)descriptionWithLevel:(int)a0;
- (void)_run;
- (void).cxx_destruct;
- (id)init;
- (void)_activate;
- (void)_bleAdvertiserEnsureStarted;
- (void)_bleAdvertiserEnsureStopped;
- (BOOL)_bleAdvertiserShouldRun;
- (void)_bleServerAcceptConnecton:(id)a0;
- (void)_bleServerEnsureStarted;
- (void)_bleServerEnsureStopped;
- (void)_oobEnsureStarted;
- (void)_prepareSteps;

@end
