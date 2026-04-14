@class NSArray, NSString;

@interface PKAuxiliaryCapabilityRequirementKeyMaterial : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *contents;
@property (retain, nonatomic) NSArray *encryptedContents;
@property (retain, nonatomic) NSArray *rootAttestation;
@property (retain, nonatomic) NSString *version;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithKeyMaterialContents:(id)a0;
- (BOOL)isEqualToAuxiliaryCapabilityRequirementKey:(id)a0;

@end
