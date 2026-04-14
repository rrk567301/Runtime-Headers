@class NSString, PKPassShareTimeConfiguration, NSNumber;

@interface PKPassSharedEntitlement : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *entitlementIdentifier;
@property (retain, nonatomic) PKPassShareTimeConfiguration *timeConfiguration;
@property (nonatomic) unsigned long long recipientShareability;
@property (nonatomic) unsigned long long recipientManageability;
@property (nonatomic) unsigned long long recipientVisibility;
@property (retain, nonatomic) NSNumber *recipientCapabilityRole;
@property (readonly, nonatomic) unsigned long long carKeyEntitlementValue;
@property (nonatomic) BOOL intraAccountSharingEnabled;
@property (nonatomic) long long creationVersion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithEntitlement:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithCarKeyEntitlementValue:(unsigned long long)a0;
- (BOOL)hasCanonicallyEquivalentRightsToPassEntitlement:(id)a0;
- (BOOL)hasCanonicallyEquivalentRoleToPassEntitlement:(id)a0;
- (BOOL)hasCanonicallyEquivalentRoleToPassSharedEntitlement:(id)a0;
- (BOOL)hasCanonicallyEquivalentSharingCapabilityToPassEntitlement:(id)a0;
- (id)initWithCarKeyEntitlementValue:(unsigned long long)a0 role:(id)a1;
- (id)initWithSubcredentialDictionary:(id)a0;

@end
