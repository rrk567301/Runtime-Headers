@interface CoreRepairHelper : NSObject <CRAttestationProtocol>

@property BOOL factoryServiceOn;

+ (id)sharedInstance;

- (id)init;
- (void)decompressPearlFramesWithReply:(id /* block */)a0;
- (void)seal:(id)a0 withReply:(id /* block */)a1;
- (BOOL)_mount:(const char *)a0 withFlag:(int)a1;
- (void)challengeComponentsWith:(id)a0 withReply:(id /* block */)a1;
- (void)daemonControl:(id)a0 withReply:(id /* block */)a1;
- (void)getStrongComponentsWithReply:(id /* block */)a0;
- (void)setupModuleChallengeCallBack:(struct __AMFDR { } *)a0;
- (void)updateBrunorDATFirmwareWithReply:(id /* block */)a0;
- (void)updateSavageDATFirmwareWithReply:(id /* block */)a0;
- (void)verifyPSD3WithReply:(id /* block */)a0;

@end
