@class SFSafariCredential, SFPasswordCredentialIdentity, NSExtension;

@interface WBSCredentialIdentityMatch : WBSFormAutoFillItem

@property (readonly, nonatomic) SFPasswordCredentialIdentity *credentialIdentity;
@property (readonly, nonatomic) NSExtension *extension;
@property (readonly, nonatomic) SFSafariCredential *resolvedCredential;

- (void).cxx_destruct;
- (id)completion;
- (id)initWithCredentialIdentity:(id)a0 extension:(id)a1;
- (id)resolvedMatchWithCredential:(id)a0;

@end
