@class NSString, PKSharedAppletSubcredentialMetadata, PKAppletSubcredentialEntitlement;

@interface PKSharedAppletSubcredential : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long state;
@property (retain, nonatomic) PKAppletSubcredentialEntitlement *entitlement;
@property (retain, nonatomic) PKSharedAppletSubcredentialMetadata *metadata;
@property (nonatomic, getter=isDataSourceCredentialManifest) BOOL dataSourceCredentialManifest;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithSharedCredentialManifestItem:(id)a0 credential:(id)a1;
- (id)initWithIdentifier:(id)a0 sharingInvitationReceipt:(id)a1;
- (id)updateWithSharedCredentialManifestItem:(id)a0 credential:(id)a1;

@end
