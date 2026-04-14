@interface IDSNGMPublicDeviceIdentity : NSObject

+ (id)identityWithDataRepresentation:(id)a0 error:(id *)a1;
+ (id)identityWithIdentityData:(id)a0 prekeyData:(id)a1 error:(id *)a2;

- (id)dataRepresentationWithError:(id *)a0;
- (id)identityData;
- (id)sealMessage:(id)a0 withEncryptedAttributes:(id)a1 signedByFullIdentity:(id)a2 error:(id *)a3;
- (BOOL)isValidSignature:(id)a0 forMessage:(id)a1 forType:(long long)a2 error:(id *)a3;
- (id)prekeyData;
- (id)sealMessage:(id)a0 forceSizeOptimizations:(BOOL)a1 resetState:(BOOL)a2 encryptedAttributes:(id)a3 signedByFullIdentity:(id)a4 errors:(id *)a5;
- (id)sealMessage:(id)a0 guid:(id)a1 sendingURI:(id)a2 sendingPushToken:(id)a3 receivingURI:(id)a4 receivingPushToken:(id)a5 forceSizeOptimizations:(BOOL)a6 resetState:(BOOL)a7 encryptedAttributes:(id)a8 signedByFullIdentity:(id)a9 errors:(id *)a10;
- (id)sealMessage:(id)a0 signedByFullIdentity:(id)a1 error:(id *)a2;

@end
