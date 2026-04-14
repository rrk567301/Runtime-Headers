@class NSString;

@interface PKPassAuxiliaryRegistrationDecryptionRequirement : PKPassAuxiliaryRegistrationRequirement

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long usage;
@property (readonly, nonatomic) unsigned long long decryptionSchemeVersion;
@property (readonly, nonatomic) NSString *groupIdentifier;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)role;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (void)_decorateDescription:(id)a0;
- (id)_mutableDictionaryRepresentation;
- (BOOL)isEqualToPassAuxiliaryRegistrationDecryptionRequirement:(id)a0;

@end
