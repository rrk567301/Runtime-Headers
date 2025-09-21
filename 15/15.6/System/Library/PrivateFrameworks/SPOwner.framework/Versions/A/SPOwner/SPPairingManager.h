@class FMXPCServiceDescription, FMXPCSession, NSObject;
@protocol OS_dispatch_queue, SPPairingManagerXPCProtocol;

@interface SPPairingManager : NSObject

@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) FMXPCSession *session;
@property (retain, nonatomic) FMXPCServiceDescription *userAgentServiceDescription;
@property (retain, nonatomic) FMXPCSession *userAgentSession;
@property (retain, nonatomic) id<SPPairingManagerXPCProtocol> proxy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)remoteInterface;
- (void)allPairingErrorsWithCompletion:(id /* block */)a0;
- (void)alwaysBeaconWildStateWithCompletion:(id /* block */)a0;
- (void)currentBeaconingKeyWithCompletion:(id /* block */)a0;
- (void)finalizePairingWithSession:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;
- (void)finalizePairingWithSession:(id)a0 name:(id)a1 roleId:(long long)a2 roleEmoji:(id)a3 keyStatus:(id)a4 collaborativeKey:(id)a5 signature:(id)a6 completion:(id /* block */)a7;
- (void)getLocalPairingDataWithCompletion:(id /* block */)a0;
- (void)getOfflineFindingInfoWithCurrentData:(id)a0 completion:(id /* block */)a1;
- (void)initiatePairingSessionWithCompletion:(id /* block */)a0;
- (void)invalidatePairingSession:(id)a0 completion:(id /* block */)a1;
- (void)setAlwaysBeaconState:(char)a0 completion:(id /* block */)a1;
- (void)setAlwaysBeaconWildState:(char)a0 completion:(id /* block */)a1;
- (void)unpairUUID:(id)a0 force:(char)a1 completion:(id /* block */)a2;
- (id)userAgentProxy;
- (void)verifyPairingWithPairingSession:(id)a0 signature:(id)a1 attestation:(id)a2 systemPublicKey:(id)a3 refKeyPublicKey:(id)a4 systemVersion:(id)a5 vendorId:(long long)a6 productId:(long long)a7 ecid:(id)a8 chipId:(id)a9 serialNumber:(id)a10 collaborativeKey:(id)a11 completion:(id /* block */)a12;

@end
