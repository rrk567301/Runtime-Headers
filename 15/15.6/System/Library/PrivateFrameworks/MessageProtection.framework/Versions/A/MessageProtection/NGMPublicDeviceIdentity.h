@class SigningPublicKey, NGMECDHPublicPreKey, _TtC17MessageProtection17TetraRegistration;

@interface NGMPublicDeviceIdentity : NSObject

@property (retain, nonatomic) SigningPublicKey *signingKey;
@property (retain, nonatomic) NGMECDHPublicPreKey *echnidaRegistration;
@property (retain, nonatomic) _TtC17MessageProtection17TetraRegistration *tetraRegistration;

+ (id)identityWithIdentityData:(id)a0 prekeyData:(id)a1 error:(id *)a2;
+ (char)shouldMarkForStateReset:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)identityData;
- (id)sealMessage:(id)a0 withEncryptedAttributes:(id)a1 signedByFullIdentity:(id)a2 error:(id *)a3;
- (char)isIdenticalIdentityTo:(id)a0;
- (char)isValidSignature:(id)a0 forMessage:(id)a1 forType:(long long)a2 error:(id *)a3;
- (char)markForStateResetWithOurURI:(id)a0 ourPushToken:(id)a1 ourSigningIdentity:(id)a2 theirURI:(id)a3 theirPushToken:(id)a4;
- (id)prekeyData;
- (id)sealMessage:(id)a0 authenticatedData:(id)a1 messageType:(long long)a2 guid:(id)a3 sendingURI:(id)a4 sendingPushToken:(id)a5 receivingURI:(id)a6 receivingPushToken:(id)a7 forceSizeOptimizations:(char)a8 resetState:(char)a9 encryptedAttributes:(id)a10 signedByFullIdentity:(id)a11 errors:(id *)a12;
- (id)sealMessage:(id)a0 forceSizeOptimizations:(char)a1 resetState:(char)a2 encryptedAttributes:(id)a3 signedByFullIdentity:(id)a4 errors:(id *)a5;
- (id)sealMessage:(id)a0 signedByFullIdentity:(id)a1 error:(id *)a2;
- (id)initWithEchnidaRegistration:(id)a0 tetraRegistration:(id)a1 signingKey:(id)a2;
- (char)isTetraCompatibleWithFullKey:(id)a0;
- (char)isValidSigningDestination;
- (id)sealMessage:(id)a0 guid:(id)a1 sendingURI:(id)a2 sendingPushToken:(id)a3 receivingURI:(id)a4 receivingPushToken:(id)a5 forceSizeOptimizations:(char)a6 resetState:(char)a7 encryptedAttributes:(id)a8 signedByFullIdentity:(id)a9 errors:(id *)a10;
- (char)validateTetraBindingsAuthenticatedData:(id)a0 GUID:(id)a1 sendingURI:(id)a2 sendingPushToken:(id)a3 receivingURI:(id)a4 receivingPushToken:(id)a5;
- (char)verifySignature:(id)a0 formatter:(id)a1;

@end
