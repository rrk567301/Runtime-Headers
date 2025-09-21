@interface IDSNGMPublicDeviceIdentity : NSObject

+ (id)identityWithDataRepresentation:(id)a0 error:(id *)a1;
+ (id)identityWithIdentityData:(id)a0 prekeyData:(id)a1 error:(id *)a2;
+ (char)shouldMarkForStateReset:(id)a0;

- (id)dataRepresentationWithError:(id *)a0;
- (id)identityData;
- (id)sealMessage:(id)a0 withEncryptedAttributes:(id)a1 signedByFullIdentity:(id)a2 error:(id *)a3;
- (char)isIdenticalIdentityTo:(id)a0;
- (char)isValidSignature:(id)a0 forMessage:(id)a1 forType:(long long)a2 error:(id *)a3;
- (char)markForStateResetWithOurURI:(id)a0 ourPushToken:(id)a1 ourSigningIdentity:(id)a2 theirURI:(id)a3 theirPushToken:(id)a4;
- (id)prekeyData;
- (id)sealMessage:(id)a0 authenticatedData:(id)a1 messageType:(long long)a2 guid:(id)a3 sendingURI:(id)a4 sendingPushToken:(id)a5 receivingURI:(id)a6 receivingPushToken:(id)a7 forceSizeOptimizations:(char)a8 resetState:(char)a9 encryptedAttributes:(id)a10 signedByFullIdentity:(id)a11 errors:(id *)a12;
- (id)sealMessage:(id)a0 forceSizeOptimizations:(char)a1 resetState:(char)a2 encryptedAttributes:(id)a3 signedByFullIdentity:(id)a4 errors:(id *)a5;
- (id)sealMessage:(id)a0 signedByFullIdentity:(id)a1 error:(id *)a2;
- (id)sealPaddyMessage:(id)a0 sendingURI:(id)a1 sendingPushToken:(id)a2 receivingURI:(id)a3 receivingPushToken:(id)a4 signedByFullIdentity:(id)a5 error:(id *)a6;

@end
