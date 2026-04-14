@class DMTSharingDevice, CATSharingDevice, NSString, NSLocale, NSObject, SFSession;
@protocol OS_dispatch_queue;

@interface DMTCatalystSharingBackedDeviceSession : NSObject <CATSharingDeviceSession>

@property (readonly, nonatomic) DMTSharingDevice *device;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sessionQueue;
@property (readonly, nonatomic) SFSession *session;
@property (nonatomic, getter=isInvalidated) BOOL invalidated;
@property (nonatomic, getter=isPaired) BOOL paired;
@property (nonatomic, getter=isReady) BOOL ready;
@property (readonly, nonatomic) CATSharingDevice *remoteDevice;
@property (copy) id /* block */ pinPromptHandler;
@property (copy) id /* block */ deviceSessionReadyHandler;
@property (copy) id /* block */ messageReceivedHandler;
@property (copy) id /* block */ deviceSessionInvalidatedHandler;
@property (copy) id /* block */ deviceSessionErrorHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)failureTypeForPairingError:(id)a0;

- (void)invalidateWithError:(id)a0;
- (void)sendMessage:(id)a0;
- (void)deactivate;
- (void)activate;
- (void).cxx_destruct;
- (void)addPrimitiveHandlers;
- (void)beginPairWithCompletion:(id /* block */)a0;
- (void)removePrimitiveHandlers;
- (void)tryPairingPIN:(id)a0;
- (void)verifyPairing:(id /* block */)a0;
- (id)initWithDevice:(id)a0 locale:(id)a1;
- (void)performPairingWithCompletion:(id /* block */)a0;
- (void)performPairingWithPreAuthWithCompletion:(id /* block */)a0;
- (void)sendRequestID:(id)a0 unencryptedRequestData:(id)a1 withTimeout:(unsigned long long)a2 completion:(id /* block */)a3;

@end
