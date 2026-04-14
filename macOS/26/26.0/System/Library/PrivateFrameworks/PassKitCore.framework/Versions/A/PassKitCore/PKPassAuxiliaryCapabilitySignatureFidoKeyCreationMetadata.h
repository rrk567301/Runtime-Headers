@class NSData, PKFidoProfile;

@interface PKPassAuxiliaryCapabilitySignatureFidoKeyCreationMetadata : PKPassAuxiliaryCapabilityKeyCreationMetadata

@property (readonly, nonatomic) PKFidoProfile *fidoProfile;
@property (readonly, nonatomic) NSData *fidoChallenge;
@property (retain, nonatomic) NSData *externalizedAuth;

+ (BOOL)supportsSecureCoding;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
