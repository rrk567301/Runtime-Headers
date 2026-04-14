@class NSString;

@interface PKPassAuxiliaryCapabilitySignatureIdentityAccountKeyCreationMetadata : PKPassAuxiliaryCapabilityKeyCreationMetadata

@property (readonly, nonatomic) NSString *subcredentialIdentifier;
@property (retain, nonatomic) NSString *existingAccountKeyIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithSubcredentialIdentifier:(id)a0;

@end
