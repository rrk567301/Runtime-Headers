@class NSObject;
@protocol OS_dispatch_queue, CHIPKeypair;

@interface CHIPDeviceController : NSObject

@property (readonly) NSObject<OS_dispatch_queue> *chipWorkQueue;
@property (readonly) void *cppCommissioner;
@property (readonly) struct CHIPDevicePairingDelegateBridge { void /* function */ **x0; void /* function */ **x1; id x2; id x3; } *pairingDelegateBridge;
@property (readonly) struct CHIPPersistentStorageDelegateBridge { void /* function */ **x0; id x1; id x2; id x3; } *persistentStorageDelegateBridge;
@property (readonly) struct FabricStorage { void /* function */ **x0; } *fabricStorage;
@property (readonly) void *operationalCredentialsDelegate;
@property (readonly) struct CHIPP256KeypairBridge { void /* function */ **_vptr$ECPKeypair; id<CHIPKeypair> mKeypair; struct P256PublicKey { void /* function */ **_vptr$ECPKey; unsigned char bytes[65]; } mPubkey; } keypairBridge;
@property (readonly) unsigned long long localDeviceId;
@property (readonly) unsigned short listenPort;
@property (readonly, nonatomic) BOOL isRunning;

+ (id)sharedController;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)shutdown;
- (BOOL)checkForInitError:(BOOL)a0 logMsg:(id)a1;
- (BOOL)checkForStartError:(BOOL)a0 logMsg:(id)a1;
- (id)_getControllerNodeId;
- (BOOL)checkForError:(struct ChipError { unsigned int x0; char *x1; unsigned int x2; })a0 logMsg:(id)a1 error:(id *)a2;
- (BOOL)startup:(id)a0 vendorId:(unsigned short)a1 nocSigner:(id)a2;
- (id)getControllerNodeId;
- (BOOL)pairDevice:(unsigned long long)a0 discriminator:(unsigned short)a1 setupPINCode:(unsigned int)a2 error:(id *)a3;
- (BOOL)pairDevice:(unsigned long long)a0 address:(id)a1 port:(unsigned short)a2 discriminator:(unsigned short)a3 setupPINCode:(unsigned int)a4 error:(id *)a5;
- (BOOL)pairDevice:(unsigned long long)a0 onboardingPayload:(id)a1 error:(id *)a2;
- (BOOL)unpairDevice:(unsigned long long)a0 error:(id *)a1;
- (BOOL)stopDevicePairing:(unsigned long long)a0 error:(id *)a1;
- (BOOL)isDevicePaired:(unsigned long long)a0 error:(id *)a1;
- (id)getDeviceBeingCommissioned:(unsigned long long)a0 error:(id *)a1;
- (BOOL)getConnectedDevice:(unsigned long long)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)openPairingWindow:(unsigned long long)a0 duration:(unsigned long long)a1 error:(id *)a2;
- (id)openPairingWindowWithPIN:(unsigned long long)a0 duration:(unsigned long long)a1 discriminator:(unsigned long long)a2 setupPIN:(unsigned long long)a3 error:(id *)a4;
- (void)setListenPort:(unsigned short)a0;
- (void)updateDevice:(unsigned long long)a0 fabricId:(unsigned long long)a1;
- (void)setPairingDelegate:(id)a0 queue:(id)a1;

@end
