@class HMFTimer, NSString, NSData, NSMutableData, NSObject;
@protocol OS_dispatch_queue, HAPPairSetupSessionDelegate;

@interface HAPPairSetupSession : HMFObject <HMFTimerDelegate, HAPEncryptedSession>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) HMFTimer *backoffTimer;
@property (nonatomic, getter=isHandlingInvalidSetupCode) char handlingInvalidSetupCode;
@property (nonatomic) unsigned long long pairSetupType;
@property (retain, nonatomic) NSData *sessionReadKey;
@property (retain, nonatomic) NSData *sessionWriteKey;
@property (retain, nonatomic) NSMutableData *sessionReadNonce;
@property (retain, nonatomic) NSMutableData *sessionWriteNonce;
@property (retain, nonatomic) NSData *certificate;
@property (readonly, nonatomic) struct PairingSessionPrivate { } *pairingSession;
@property (readonly, weak) id<HAPPairSetupSessionDelegate> delegate;
@property (readonly, nonatomic) long long role;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)logCategory;
+ (char)isValidSetupCode:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (id)shortDescription;
- (void)_invalidate;
- (id)logIdentifier;
- (void)_stopWithError:(id)a0;
- (id)descriptionWithPointer:(char)a0;
- (void)stopWithError:(id)a0;
- (void)timerDidFire:(id)a0;
- (char)isSecureSession;
- (void)_handleBackoffExpiration;
- (id)_handleLocalPairingIdentityRequestWithStatus:(int *)a0;
- (void)_handlePairSetupExchangeComplete;
- (void)_handleProductData:(id)a0;
- (void)_initializeServer;
- (char)_initializeSession;
- (void)_initiateClientPairSetupExchange;
- (void)_processSetupCode:(id)a0 error:(id)a1;
- (void)_processSetupExchangeData:(id)a0 error:(id)a1;
- (id)_showSetupCodeWithError:(id *)a0;
- (id)decryptData:(id)a0 additionalAuthenticatedData:(id)a1 error:(id *)a2;
- (id)encryptData:(id)a0 additionalAuthenticatedData:(id)a1 error:(id *)a2;
- (void)generateSessionKeys;
- (id)getCertificate;
- (void)handleBackoffRequestWithTimeout:(double)a0;
- (void)handleInvalidSetupCodeAndRestart:(char)a0;
- (char)handleSavePeerRequestWithPeerIdentity:(id)a0 error:(id *)a1;
- (void)handleSetupCodeRequest;
- (id)initWithRole:(long long)a0 pairSetupType:(unsigned long long)a1 delegate:(id)a2;
- (void)receivedSetupExchangeData:(id)a0 error:(id)a1;

@end
