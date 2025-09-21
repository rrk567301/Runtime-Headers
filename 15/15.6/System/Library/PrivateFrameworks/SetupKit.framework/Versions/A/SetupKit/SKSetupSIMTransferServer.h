@class NSData, CBAdvertiser, CBServer;

@interface SKSetupSIMTransferServer : SKSetupBase {
    CBAdvertiser *_bleAdvertiser;
    CBServer *_bleServer;
}

@property (copy, nonatomic) NSData *nearbyActionExtraData;
@property (nonatomic) unsigned char nearbyActionType;
@property (nonatomic) char useSecondTrigger;

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

@end
