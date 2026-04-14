@interface PallasResponseVerifier : NSObject

@property (readonly) struct __SecKey { } *leafPublicKey;
@property (readonly) double issuanceDate;
@property (readonly) const struct __CFString { } *keyAlg;

- (id)init;
- (BOOL)verifyResponse:(id)a0 signature:(id)a1 error:(id *)a2;
- (BOOL)determineAlg:(id)a0;
- (BOOL)verifyCerts:(id)a0 error:(id *)a1;

@end
