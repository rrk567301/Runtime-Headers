@class NSArray;

@interface PKAuxiliaryCapabilityRequirementKeyMaterial : NSObject

@property (retain, nonatomic) NSArray *contents;
@property (retain, nonatomic) NSArray *rootAttestation;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithKeyMaterialContents:(id)a0;
- (BOOL)isEqualToAuxiliaryCapabilityRequirementKey:(id)a0;

@end
