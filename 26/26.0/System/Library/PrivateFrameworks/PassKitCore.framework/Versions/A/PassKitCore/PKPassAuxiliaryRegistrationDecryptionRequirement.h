@class NSString;

@interface PKPassAuxiliaryRegistrationDecryptionRequirement : PKPassAuxiliaryRegistrationRequirement

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long usage;
@property (readonly, nonatomic) unsigned long long decryptionSchemeVersion;
@property (readonly, nonatomic) NSString *groupIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)initWithDictionary:(id)a0;
- (unsigned long long)role;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)_decorateDescription:(id)a0;
- (id)_mutableDictionaryRepresentation;
- (BOOL)isEqualToPassAuxiliaryRegistrationDecryptionRequirement:(id)a0;

@end
