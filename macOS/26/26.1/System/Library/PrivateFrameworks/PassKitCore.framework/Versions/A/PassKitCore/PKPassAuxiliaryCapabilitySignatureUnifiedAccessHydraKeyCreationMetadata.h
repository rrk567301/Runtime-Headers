@class NSData, NSDictionary;

@interface PKPassAuxiliaryCapabilitySignatureUnifiedAccessHydraKeyCreationMetadata : PKPassAuxiliaryCapabilityKeyCreationMetadata

@property (readonly, nonatomic) NSData *readerGroupIdentifier;
@property (readonly, nonatomic) NSDictionary *serverParameters;

+ (BOOL)supportsSecureCoding;

- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
