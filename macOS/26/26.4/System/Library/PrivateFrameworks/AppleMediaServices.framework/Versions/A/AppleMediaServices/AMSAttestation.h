@interface AMSAttestation : NSObject

+ (id)attestationWithAccount:(id)a0 options:(id)a1;
+ (id)_generateCertificateChainStringsForAccount:(id)a0 options:(id)a1;
+ (id)attestationWithAccount:(id)a0 options:(id)a1 error:(id *)a2;
+ (id)attestationWithOptions:(id)a0;
+ (id)attestationWithOptions:(id)a0 error:(id *)a1;

@end
