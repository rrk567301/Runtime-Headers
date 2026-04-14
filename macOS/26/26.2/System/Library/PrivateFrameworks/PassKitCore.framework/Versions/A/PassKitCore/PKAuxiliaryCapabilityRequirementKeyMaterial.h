@class NSArray, NSString;

@interface PKAuxiliaryCapabilityRequirementKeyMaterial : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *contents;
@property (retain, nonatomic) NSArray *encryptedContents;
@property (retain, nonatomic) NSArray *rootAttestation;
@property (retain, nonatomic) NSString *version;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithKeyMaterialContents:(id)a0;
- (BOOL)isEqualToAuxiliaryCapabilityRequirementKey:(id)a0;

@end
