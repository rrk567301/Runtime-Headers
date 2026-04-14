@class NSString;

@interface PKPassAuxiliaryCapabilitySignatureIdentityAccountKeyCreationMetadata : PKPassAuxiliaryCapabilityKeyCreationMetadata

@property (readonly, nonatomic) NSString *subcredentialIdentifier;
@property (retain, nonatomic) NSString *existingAccountKeyIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSubcredentialIdentifier:(id)a0;

@end
