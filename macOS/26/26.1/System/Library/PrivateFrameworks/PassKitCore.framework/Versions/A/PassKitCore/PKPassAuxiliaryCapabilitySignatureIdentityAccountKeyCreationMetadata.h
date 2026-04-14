@class NSString;

@interface PKPassAuxiliaryCapabilitySignatureIdentityAccountKeyCreationMetadata : PKPassAuxiliaryCapabilityKeyCreationMetadata

@property (readonly, nonatomic) NSString *subcredentialIdentifier;
@property (retain, nonatomic) NSString *existingAccountKeyIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSubcredentialIdentifier:(id)a0;

@end
