@interface CertificateUtilities : NSObject

+ (id)extendedValidationOrganizationNameForServerTrust:(struct __SecTrust { } *)a0;
+ (char)hasClientCertificateIdentityForProtectionSpace:(id)a0;
+ (id)identitiesWithProtectionSpace:(id)a0;
+ (char)isCertificateChain:(id)a0 trustedForHost:(id)a1;
+ (char)isRevocationServerMetaError:(int)a0;
+ (id)issuerOrganizationNameForCertificate:(struct __SecCertificate { } *)a0;
+ (id)labelForCertificates:(id)a0;
+ (struct RetainPtr<__SecPolicy *> { void *x0; })ocspPolicyWithOptions:(unsigned int)a0;
+ (struct RetainPtr<__SecPolicy *> { void *x0; })sslPolicyForHost:(id)a0 client:(char)a1;
+ (id)subjectFullLocationForCertificate:(struct __SecCertificate { } *)a0;
+ (id)subjectNameForCertificate:(struct __SecCertificate { } *)a0;
+ (BOOL)trustIncludesRevokedCertificate:(struct __SecTrust { } *)a0;
+ (struct RetainPtr<__SecTrust *> { void *x0; })trustReferenceWithCertificates:(id)a0 forPolicy:(struct __SecPolicy { } *)a1;

@end
