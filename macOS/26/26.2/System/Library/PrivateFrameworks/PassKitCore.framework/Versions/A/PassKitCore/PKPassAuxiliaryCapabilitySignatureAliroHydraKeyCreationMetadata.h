@class NSData, NSDictionary;

@interface PKPassAuxiliaryCapabilitySignatureAliroHydraKeyCreationMetadata : PKPassAuxiliaryCapabilityKeyCreationMetadata

@property (readonly, nonatomic) NSData *readerGroupIdentifier;
@property (readonly, nonatomic) NSData *readerGroupPublicKey;
@property (readonly, nonatomic) NSDictionary *serverParameters;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;

@end
