@class CRKASMCredentialStore;

@interface CRKASMCertificateVendor : NSObject

@property (readonly, nonatomic) CRKASMCredentialStore *credentialStore;

- (id)manifest;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)certificatesForUserIdentifiers:(id)a0;
- (id)certificatesForUserIdentifier:(id)a0;
- (void)forgetPersistentIDs:(id)a0;
- (id)initWithCredentialStore:(id)a0;

@end
