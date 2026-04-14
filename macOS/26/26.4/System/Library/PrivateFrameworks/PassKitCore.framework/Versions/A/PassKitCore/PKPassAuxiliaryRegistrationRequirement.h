@class NSString, PKPassAuxiliaryCapabilityKeyCreationMetadata, NSArray;

@interface PKPassAuxiliaryRegistrationRequirement : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long registrationBackoffCounter;
@property (retain, nonatomic) PKPassAuxiliaryCapabilityKeyCreationMetadata *keyCreationMetadata;
@property (readonly, nonatomic) unsigned long long role;
@property (readonly, nonatomic) long long numberOfKeys;
@property (readonly, nonatomic) NSArray *supportedVersions;
@property (readonly, nonatomic) BOOL canLocallyInvalidateRegistrationState;
@property (readonly, nonatomic) BOOL canLocallyValidateRegistrationState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)_copyInto:(id)a0;
- (void)_decorateDescription:(id)a0;
- (id)_initWithIdentifier:(id)a0 numberOfKeys:(id)a1 canLocallyInvalidateRegistrationState:(id)a2 canLocallyValidateRegistrationState:(id)a3;
- (id)_mutableDictionaryRepresentation;
- (BOOL)isEqualToPassAuxiliaryRegistrationRequirement:(id)a0;

@end
