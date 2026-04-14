@class MatterControllerFactory, NSObject;
@protocol OS_dispatch_queue, CHIPKeypair;

@interface CHIPDeviceController : NSObject

@property (readonly) NSObject<OS_dispatch_queue> *chipWorkQueue;
@property (readonly) void *cppCommissioner;
@property (readonly) struct CHIPDevicePairingDelegateBridge { void /* function */ **x0; id x1; id x2; } *pairingDelegateBridge;
@property (readonly) void *operationalCredentialsDelegate;
@property (readonly) struct CHIPP256KeypairBridge { void /* function */ **_vptr$ECPKeypair; id<CHIPKeypair> mKeypair; struct P256PublicKey { void /* function */ **_vptr$ECPKey; unsigned char bytes[65]; } mPubkey; } keypairBridge;
@property (readonly) void *deviceAttestationDelegateBridge;
@property (readonly) unsigned long long localDeviceId;
@property (readonly) MatterControllerFactory *factory;
@property (readonly, nonatomic) BOOL isRunning;

+ (id)decodeXPCResponseValues:(id)a0;
+ (id)sharedControllerWithId:(id)a0 xpcConnectBlock:(id /* block */)a1;
+ (id)encodeXPCReadParams:(id)a0;
+ (id)encodeXPCResponseValues:(id)a0;
+ (id)decodeXPCReadParams:(id)a0;
+ (id)encodeXPCSubscribeParams:(id)a0;
+ (id)decodeXPCSubscribeParams:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cleanup;
- (id).cxx_construct;
- (void)shutdown;
- (BOOL)startup:(id)a0;
- (unsigned char)fabricIndex;
- (BOOL)checkForInitError:(BOOL)a0 logMsg:(id)a1;
- (struct ChipError { unsigned int x0; char *x1; unsigned int x2; })isRunningOnFabric:(void *)a0 isRunning:(BOOL *)a1;
- (id)initWithFactory:(id)a0 queue:(id)a1;
- (void)cleanupAfterStartup;
- (void)clearDeviceAttestationDelegateBridge;
- (BOOL)checkForStartError:(BOOL)a0 logMsg:(id)a1;
- (id)_getControllerNodeId;
- (BOOL)checkForError:(struct ChipError { unsigned int x0; char *x1; unsigned int x2; })a0 logMsg:(id)a1 error:(id *)a2;
- (id)getControllerNodeId;
- (BOOL)pairDevice:(unsigned long long)a0 discriminator:(unsigned short)a1 setupPINCode:(unsigned int)a2 error:(id *)a3;
- (BOOL)pairDevice:(unsigned long long)a0 address:(id)a1 port:(unsigned short)a2 discriminator:(unsigned short)a3 setupPINCode:(unsigned int)a4 error:(id *)a5;
- (BOOL)pairDevice:(unsigned long long)a0 onboardingPayload:(id)a1 error:(id *)a2;
- (BOOL)commissionDevice:(unsigned long long)a0 commissioningParams:(id)a1 error:(id *)a2;
- (BOOL)continueCommissioningDevice:(void *)a0 ignoreAttestationFailure:(BOOL)a1 error:(id *)a2;
- (BOOL)stopDevicePairing:(unsigned long long)a0 error:(id *)a1;
- (id)getDeviceBeingCommissioned:(unsigned long long)a0 error:(id *)a1;
- (BOOL)getConnectedDevice:(unsigned long long)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)openPairingWindow:(unsigned long long)a0 duration:(unsigned long long)a1 error:(id *)a2;
- (id)openPairingWindowWithPIN:(unsigned long long)a0 duration:(unsigned long long)a1 discriminator:(unsigned long long)a2 setupPIN:(unsigned long long)a3 error:(id *)a4;
- (void)updateDevice:(unsigned long long)a0 fabricId:(unsigned long long)a1;
- (void)setPairingDelegate:(id)a0 queue:(id)a1;
- (BOOL)deviceBeingCommissionedOverBLE:(unsigned long long)a0;

@end
