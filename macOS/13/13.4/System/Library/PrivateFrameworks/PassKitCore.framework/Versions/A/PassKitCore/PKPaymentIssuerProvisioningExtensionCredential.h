@class NSArray, NSExtension, PKIssuerProvisioningExtensionPaymentPassEntry;

@interface PKPaymentIssuerProvisioningExtensionCredential : PKPaymentCredential

@property (readonly, nonatomic) NSExtension *extension;
@property (readonly, nonatomic) PKIssuerProvisioningExtensionPaymentPassEntry *entry;
@property (readonly, copy, nonatomic) NSArray *metadata;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isEqualToCredential:(id)a0;
- (id)detailDescription;
- (id)initWithExtension:(id)a0 entry:(id)a1;

@end
