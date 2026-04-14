@interface CRCCertificateCrypto : NSObject

+ (id)copyCertificateValidityDate:(id)a0 queryNotValidAfter:(BOOL)a1 error:(id *)a2;
+ (id)queryCertificateProperties:(struct __SecCertificate { } *)a0 oid:(id)a1 error:(id *)a2;

@end
