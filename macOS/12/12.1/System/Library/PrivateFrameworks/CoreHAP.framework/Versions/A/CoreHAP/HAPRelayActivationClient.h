@protocol HAPRelayActivationClientDelegate;

@interface HAPRelayActivationClient : HMFObject

@property (weak) id<HAPRelayActivationClientDelegate> delegate;

- (void)open;
- (void)close;
- (void).cxx_destruct;
- (void)requestChallenge;
- (void)requestCertificateWithPublicKey:(id)a0 challengeCertificate:(id)a1 challengeResponse:(id)a2;

@end
