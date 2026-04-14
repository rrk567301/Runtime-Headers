@interface PKPassAuxiliaryCapabilityDecryptionISO18013KeyCreationMetadata : PKPassAuxiliaryCapabilityKeyCreationMetadata

@property (readonly, nonatomic) long long cardType;
@property (readonly, nonatomic) long long attestationType;

+ (BOOL)supportsSecureCoding;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
