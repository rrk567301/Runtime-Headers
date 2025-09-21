@class NSData, CBAdvertiser, CBServer;

@interface SKSetupAppleIDSignInServer : SKSetupBase {
    CBAdvertiser *_bleAdvertiser;
    CBServer *_bleServer;
    BOOL _completed;
}

@property (copy, nonatomic) NSData *nearbyActionExtraData;
@property (nonatomic) unsigned char nearbyActionType;

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
