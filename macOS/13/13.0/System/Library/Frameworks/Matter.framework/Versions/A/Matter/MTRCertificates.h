@interface MTRCertificates : NSObject

+ (id)generateRootCertificate:(id)a0 issuerId:(id)a1 fabricId:(id)a2 error:(id *)a3;
+ (id)generateIntermediateCertificate:(id)a0 rootCertificate:(id)a1 intermediatePublicKey:(struct __SecKey { } *)a2 issuerId:(id)a3 fabricId:(id)a4 error:(id *)a5;
+ (id)generateOperationalCertificate:(id)a0 signingCertificate:(id)a1 operationalPublicKey:(struct __SecKey { } *)a2 fabricId:(id)a3 nodeId:(id)a4 caseAuthenticatedTags:(id)a5 error:(id *)a6;
+ (BOOL)keypair:(id)a0 matchesCertificate:(id)a1;
+ (BOOL)isCertificate:(id)a0 equalTo:(id)a1;
+ (id)generateCertificateSigningRequest:(id)a0 error:(id *)a1;
+ (id)convertX509Certificate:(id)a0;

@end
