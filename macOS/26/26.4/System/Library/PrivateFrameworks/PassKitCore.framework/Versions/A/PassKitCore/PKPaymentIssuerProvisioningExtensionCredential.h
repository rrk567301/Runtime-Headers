@class NSExtension, PKIssuerProvisioningExtensionPaymentPassEntry;

@interface PKPaymentIssuerProvisioningExtensionCredential : PKPaymentCredential

@property (readonly, nonatomic) NSExtension *extension;
@property (readonly, nonatomic) PKIssuerProvisioningExtensionPaymentPassEntry *entry;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)metadata;
- (BOOL)_isEqualToCredential:(id)a0;
- (id)detailDescriptionWithEnvironment:(unsigned long long)a0;
- (id)initWithExtension:(id)a0 entry:(id)a1;

@end
