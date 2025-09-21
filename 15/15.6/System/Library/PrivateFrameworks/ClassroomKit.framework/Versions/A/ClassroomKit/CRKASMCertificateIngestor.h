@class CRKASMRosterProviderConfiguration;

@interface CRKASMCertificateIngestor : NSObject

@property (readonly, nonatomic) CRKASMRosterProviderConfiguration *configuration;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (char)areCertificatesValid:(id)a0 forUserIdentifier:(id)a1 error:(id *)a2;
- (char)ingestCertificates:(id)a0 forTrustedUserIdentifier:(id)a1 error:(id *)a2;
- (char)isCertificateValid:(id)a0 forUserIdentifier:(id)a1 error:(id *)a2;
- (char)storeCertificates:(id)a0 userIdentifier:(id)a1 error:(id *)a2;

@end
