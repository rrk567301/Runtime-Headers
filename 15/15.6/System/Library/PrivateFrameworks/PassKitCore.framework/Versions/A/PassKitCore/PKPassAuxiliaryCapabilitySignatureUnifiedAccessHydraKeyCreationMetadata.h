@class NSData, NSDictionary;

@interface PKPassAuxiliaryCapabilitySignatureUnifiedAccessHydraKeyCreationMetadata : PKPassAuxiliaryCapabilityKeyCreationMetadata

@property (readonly, nonatomic) NSData *readerGroupIdentifier;
@property (readonly, nonatomic) NSDictionary *serverParameters;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;

@end
