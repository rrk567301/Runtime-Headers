@interface CKPATKeyBlinding : NSObject

+ (id)privateScalarFromSecKey:(struct __SecKey { } *)a0;
+ (struct __SecKey { } *)secKeyFromCompressedRepresentation:(id)a0;
+ (id)compressedRepresentationFromSecKey:(struct __SecKey { } *)a0;
+ (BOOL)isValidSignature:(id)a0 forMessage:(id)a1 signedBy:(struct __SecKey { } *)a2;
+ (id)blindSignMessage:(id)a0 blindedBy:(struct __SecKey { } *)a1 withKey:(struct __SecKey { } *)a2 error:(id *)a3;
+ (struct __SecKey { } *)blindPublicKey:(struct __SecKey { } *)a0 withPrivateKey:(struct __SecKey { } *)a1 error:(id *)a2;
+ (struct __SecKey { } *)unblindPublicKey:(struct __SecKey { } *)a0 withPrivateKey:(struct __SecKey { } *)a1 error:(id *)a2;

@end
