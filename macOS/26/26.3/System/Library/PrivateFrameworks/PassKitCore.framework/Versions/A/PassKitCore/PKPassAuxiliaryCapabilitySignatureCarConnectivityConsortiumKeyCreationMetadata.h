@class PKSubcredentialEncryptedContainer;

@interface PKPassAuxiliaryCapabilitySignatureCarConnectivityConsortiumKeyCreationMetadata : PKPassAuxiliaryCapabilityKeyCreationMetadata

@property (readonly, nonatomic) PKSubcredentialEncryptedContainer *container;

+ (BOOL)supportsSecureCoding;

- (id)dictionaryRepresentation;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
