@class NSNumber;

@interface NEPathRule : NEAppRule <NEConfigurationValidating, NEPrettyDescription>

@property (retain) NSNumber *aggregatePersonalCellular;
@property (retain) NSNumber *aggregateEnterpriseCellular;
@property long long internalCellularBehavior;
@property (retain) NSNumber *aggregatePersonalWiFi;
@property (retain) NSNumber *aggregateEnterpriseWiFi;
@property long long internalWiFiBehavior;
@property (readonly, getter=isDefaultPathRule) BOOL defaultPathRule;
@property long long cellularBehavior;
@property long long wifiBehavior;
@property BOOL denyCellularFallback;
@property BOOL denyMulticast;
@property BOOL multicastPreferenceSet;
@property BOOL isIdentifierExternal;

+ (BOOL)supportsSecureCoding;
+ (long long)aggregateNetworkBehavior:(long long)a0 other:(long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (BOOL)signingIdentifierAllowed:(id)a0 domainsOrAccountsRequired:(out BOOL *)a1;
- (BOOL)isAggregateRule;
- (BOOL)supportsCellularBehavior:(long long)a0;
- (id)initDefaultPathRule;
- (void)addCellularBehavior:(long long)a0 grade:(long long)a1;
- (void)addWiFiBehavior:(long long)a0 grade:(long long)a1;
- (BOOL)supportsWiFiBehavior:(long long)a0;

@end
