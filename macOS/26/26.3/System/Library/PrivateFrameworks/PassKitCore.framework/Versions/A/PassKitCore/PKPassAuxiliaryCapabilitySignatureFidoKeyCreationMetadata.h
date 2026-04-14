@class NSData, PKFidoProfile;

@interface PKPassAuxiliaryCapabilitySignatureFidoKeyCreationMetadata : PKPassAuxiliaryCapabilityKeyCreationMetadata

@property (readonly, nonatomic) PKFidoProfile *fidoProfile;
@property (readonly, nonatomic) NSData *fidoChallenge;
@property (retain, nonatomic) NSData *externalizedAuth;

+ (BOOL)supportsSecureCoding;

- (id)dictionaryRepresentation;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
