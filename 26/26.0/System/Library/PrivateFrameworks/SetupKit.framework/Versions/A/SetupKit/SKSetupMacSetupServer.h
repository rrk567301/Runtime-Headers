@class NSData, CBAdvertiser, CBServer;

@interface SKSetupMacSetupServer : SKSetupBase {
    CBAdvertiser *_bleAdvertiser;
    CBServer *_bleServer;
    BOOL _completed;
}

@property (copy, nonatomic) NSData *nearbyActionExtraData;

- (void)_run;
- (void)_invalidate;
- (id)init;
- (id)descriptionWithLevel:(int)a0;
- (void)_activate;
- (void).cxx_destruct;
- (void)_bleAdvertiserEnsureStarted;
- (void)_bleAdvertiserEnsureStopped;
- (BOOL)_bleAdvertiserShouldRun;
- (void)_bleServerAcceptConnecton:(id)a0;
- (void)_bleServerEnsureStarted;
- (void)_bleServerEnsureStopped;
- (void)_oobEnsureStarted;
- (void)_prepareSteps;

@end
