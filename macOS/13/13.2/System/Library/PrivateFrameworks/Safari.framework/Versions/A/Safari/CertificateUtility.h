@interface CertificateUtility : NSObject

+ (BOOL)certificateUsesInsecureSignatureAlgorithm:(struct __SecCertificate { } *)a0;
+ (BOOL)certificateChainUsesInsecureSignatureAlgorithms:(id)a0;

@end
