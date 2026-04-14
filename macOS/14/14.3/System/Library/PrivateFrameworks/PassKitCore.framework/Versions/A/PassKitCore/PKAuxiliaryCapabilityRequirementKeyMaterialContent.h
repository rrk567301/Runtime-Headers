@class NSData, NSArray;

@interface PKAuxiliaryCapabilityRequirementKeyMaterialContent : NSObject

@property (retain, nonatomic) NSData *publicKey;
@property (retain, nonatomic) NSArray *attestation;
@property (retain, nonatomic) NSArray *secondaryAttestation;
@property (retain, nonatomic) NSData *authorization;
@property (retain, nonatomic) NSData *signature;
@property (retain, nonatomic) NSArray *certificateChain;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqualToAuxiliaryCapabilityRequirementKey:(id)a0;

@end
