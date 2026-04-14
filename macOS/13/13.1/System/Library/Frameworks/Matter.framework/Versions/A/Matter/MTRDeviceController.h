@class NSMutableDictionary, MTRControllerFactory, NSObject, NSNumber;
@protocol OS_dispatch_queue, MTRKeypair;

@interface MTRDeviceController : NSObject

@property (readonly) NSObject<OS_dispatch_queue> *chipWorkQueue;
@property (readonly) void *cppCommissioner;
@property (readonly) void *partialDACVerifier;
@property (readonly) struct MTRDevicePairingDelegateBridge { void /* function */ **x0; id x1; id x2; } *pairingDelegateBridge;
@property (readonly) void *operationalCredentialsDelegate;
@property (readonly) struct MTRP256KeypairBridge { void /* function */ **_vptr$ECPKeypair; struct P256PublicKey { void /* function */ **_vptr$ECPKey; unsigned char bytes[65]; } mPublicKey; struct P256KeypairContext { unsigned char mBytes[512]; } mKeypair; BOOL mInitialized; id<MTRKeypair> mKeypair; struct P256PublicKey { void /* function */ **_vptr$ECPKey; unsigned char bytes[65]; } mPubkey; } signingKeypairBridge;
@property (readonly) struct MTRP256KeypairBridge { void /* function */ **_vptr$ECPKeypair; struct P256PublicKey { void /* function */ **_vptr$ECPKey; unsigned char bytes[65]; } mPublicKey; struct P256KeypairContext { unsigned char mBytes[512]; } mKeypair; BOOL mInitialized; id<MTRKeypair> mKeypair; struct P256PublicKey { void /* function */ **_vptr$ECPKey; unsigned char bytes[65]; } mPubkey; } operationalKeypairBridge;
@property (readonly) void *deviceAttestationDelegateBridge;
@property (readonly) MTRControllerFactory *factory;
@property (readonly) NSMutableDictionary *nodeIDToDeviceMap;
@property (readonly) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } deviceMapLock;
@property (readonly, nonatomic) BOOL isRunning;
@property (readonly, nonatomic) NSNumber *controllerNodeId;

+ (id)sharedControllerWithId:(id)a0 xpcConnectBlock:(id /* block */)a1;
+ (id)encodeXPCResponseValues:(id)a0;
+ (id)decodeXPCResponseValues:(id)a0;
+ (id)encodeXPCReadParams:(id)a0;
+ (id)decodeXPCReadParams:(id)a0;
+ (id)encodeXPCSubscribeParams:(id)a0;
+ (id)decodeXPCSubscribeParams:(id)a0;

- (void).cxx_destruct;
- (void)cleanup;
- (id).cxx_construct;
- (void)shutdown;
- (void)removeDevice:(id)a0;
- (BOOL)startup:(id)a0;
- (unsigned char)fabricIndex;
- (BOOL)checkForInitError:(BOOL)a0 logMsg:(id)a1;
- (id)initWithFactory:(id)a0 queue:(id)a1;
- (void)cleanupAfterStartup;
- (void)shutDownCppController;
- (void)deinitFromFactory;
- (BOOL)setupCommissioningSessionWithPayload:(id)a0 newNodeID:(id)a1 error:(id *)a2;
- (BOOL)pairDevice:(unsigned long long)a0 discriminator:(unsigned short)a1 setupPINCode:(unsigned int)a2 error:(id *)a3;
- (BOOL)pairDevice:(unsigned long long)a0 address:(id)a1 port:(unsigned short)a2 setupPINCode:(unsigned int)a3 error:(id *)a4;
- (BOOL)pairDevice:(unsigned long long)a0 onboardingPayload:(id)a1 error:(id *)a2;
- (BOOL)commissionDevice:(unsigned long long)a0 commissioningParams:(id)a1 error:(id *)a2;
- (BOOL)continueCommissioningDevice:(void *)a0 ignoreAttestationFailure:(BOOL)a1 error:(id *)a2;
- (BOOL)stopDevicePairing:(unsigned long long)a0 error:(id *)a1;
- (id)getDeviceBeingCommissioned:(unsigned long long)a0 error:(id *)a1;
- (BOOL)getBaseDevice:(unsigned long long)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
- (id)deviceForNodeID:(unsigned long long)a0;
- (BOOL)openPairingWindow:(unsigned long long)a0 duration:(unsigned long long)a1 error:(id *)a2;
- (id)openPairingWindowWithPIN:(unsigned long long)a0 duration:(unsigned long long)a1 discriminator:(unsigned long long)a2 setupPIN:(unsigned long long)a3 error:(id *)a4;
- (void)setPairingDelegate:(id)a0 queue:(id)a1;
- (void)setNocChainIssuer:(id)a0 queue:(id)a1;
- (id)computePaseVerifier:(unsigned int)a0 iterations:(unsigned int)a1 salt:(id)a2;
- (id)fetchAttestationChallengeForDeviceId:(unsigned long long)a0;
- (void)clearDeviceAttestationDelegateBridge;
- (BOOL)checkForStartError:(struct ChipError { unsigned int x0; char *x1; unsigned int x2; })a0 logMsg:(id)a1;
- (BOOL)checkForError:(struct ChipError { unsigned int x0; char *x1; unsigned int x2; })a0 logMsg:(id)a1 error:(id *)a2;
- (BOOL)checkIsRunning;
- (BOOL)checkIsRunning:(id *)a0;
- (BOOL)_deviceBeingCommissionedOverBLE:(unsigned long long)a0;
- (BOOL)getSessionForNode:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (BOOL)getSessionForCommissioneeDevice:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)asyncDispatchToMatterQueue:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (struct ChipError { unsigned int x0; char *x1; unsigned int x2; })isRunningOnFabric:(void *)a0 fabricIndex:(unsigned char)a1 isRunning:(BOOL *)a2;
- (void)invalidateCASESessionForNode:(unsigned long long)a0;

@end
