@class CBServer, CBAdvertiser;

@interface SKSetupSIMTransferServer : SKSetupBase {
    CBAdvertiser *_bleAdvertiser;
    CBServer *_bleServer;
}

- (id)init;
- (void)_activate;
- (void).cxx_destruct;
- (void)_invalidate;
- (void)_run;
- (id)descriptionWithLevel:(int)a0;
- (void)_bleAdvertiserEnsureStopped;
- (void)_bleServerEnsureStopped;
- (void)_oobEnsureStarted;
- (void)_bleServerEnsureStarted;
- (BOOL)_bleAdvertiserShouldRun;
- (void)_bleAdvertiserEnsureStarted;
- (void)_bleServerAcceptConnecton:(id)a0;

@end
