@class NSData, CBAdvertiser, CBServer;

@interface SKSetupSIMTransferServer : SKSetupBase {
    CBAdvertiser *_bleAdvertiser;
    CBServer *_bleServer;
}

@property (copy, nonatomic) NSData *nearbyActionExtraData;
@property (nonatomic) unsigned char nearbyActionType;
@property (nonatomic) BOOL useSecondTrigger;

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

@end
