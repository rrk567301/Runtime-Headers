@class CRKASMCredentialStore;

@interface CRKASMCertificateVendor : NSObject

@property (readonly, nonatomic) CRKASMCredentialStore *credentialStore;

- (id)manifest;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)certificatesForUserIdentifiers:(id)a0;
- (id)certificatesForUserIdentifier:(id)a0;
- (void)forgetPersistentIDs:(id)a0;
- (id)initWithCredentialStore:(id)a0;

@end
