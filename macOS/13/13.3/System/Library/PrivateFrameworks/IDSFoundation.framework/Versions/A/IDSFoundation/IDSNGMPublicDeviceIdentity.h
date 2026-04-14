@interface IDSNGMPublicDeviceIdentity : NSObject

+ (id)identityWithDataRepresentation:(id)a0 error:(id *)a1;
+ (id)identityWithIdentityData:(id)a0 prekeyData:(id)a1 error:(id *)a2;

- (id)dataRepresentationWithError:(id *)a0;
- (id)identityData;
- (id)sealMessage:(id)a0 withEncryptedAttributes:(id)a1 signedByFullIdentity:(id)a2 error:(id *)a3;
- (BOOL)isValidSignature:(id)a0 forMessage:(id)a1 forType:(long long)a2 error:(id *)a3;
- (id)prekeyData;
- (id)sealMessage:(id)a0 signedByFullIdentity:(id)a1 error:(id *)a2;

@end
