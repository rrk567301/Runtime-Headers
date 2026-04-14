@class CRKASMCredentialStore;

@interface CRKASMCertificateVendor : NSObject

@property (readonly, nonatomic) CRKASMCredentialStore *credentialStore;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)manifest;
- (id)initWithCredentialStore:(id)a0;
- (id)certificatesForUserIdentifier:(id)a0;
- (id)certificatesForUserIdentifiers:(id)a0;
- (void)forgetPersistentIDs:(id)a0;

@end
