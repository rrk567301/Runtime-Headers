@class NSString, PKPassShareTimeConfiguration, NSNumber;

@interface PKPassSharedEntitlement : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *entitlementIdentifier;
@property (retain, nonatomic) PKPassShareTimeConfiguration *timeConfiguration;
@property (nonatomic) unsigned long long recipientShareability;
@property (nonatomic) unsigned long long recipientManageability;
@property (nonatomic) unsigned long long recipientVisibility;
@property (retain, nonatomic) NSNumber *recipientCapabilityRole;
@property (readonly, nonatomic) unsigned long long carKeyEntitlementValue;
@property (nonatomic) char intraAccountSharingEnabled;
@property (nonatomic) long long creationVersion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithCarKeyEntitlementValue:(unsigned long long)a0;
- (char)hasCanonicallyEquivalentRightsToPassEntitlement:(id)a0;
- (char)hasCanonicallyEquivalentRoleToPassEntitlement:(id)a0;
- (char)hasCanonicallyEquivalentRoleToPassSharedEntitlement:(id)a0;
- (char)hasCanonicallyEquivalentSharingCapabilityToPassEntitlement:(id)a0;
- (id)initWithCarKeyEntitlementValue:(unsigned long long)a0 role:(id)a1;
- (id)initWithEntitlement:(id)a0;
- (id)initWithSubcredentialDictionary:(id)a0;

@end
