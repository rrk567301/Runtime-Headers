@class NSData, NSDictionary;

@interface PKPassAuxiliaryCapabilitySignatureAliroHydraKeyCreationMetadata : PKPassAuxiliaryCapabilityKeyCreationMetadata

@property (readonly, nonatomic) NSData *readerGroupIdentifier;
@property (readonly, nonatomic) NSData *readerGroupPublicKey;
@property (readonly, nonatomic) NSDictionary *serverParameters;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
