@class NSString, NSNumber;

@interface NEPathRule : NEAppRule <NEConfigurationValidating, NEPrettyDescription> {
    NSNumber *_aggregatePersonalCellular;
    NSNumber *_aggregateEnterpriseCellular;
    long long _internalCellularBehavior;
    NSNumber *_aggregatePersonalWiFi;
    NSNumber *_aggregateEnterpriseWiFi;
    long long _internalWiFiBehavior;
}

@property (readonly, getter=isDefaultPathRule) char defaultPathRule;
@property long long cellularBehavior;
@property long long wifiBehavior;
@property char denyCellularFallback;
@property char denyMulticast;
@property (copy) NSString *temporaryAllowMulticastNetworkName;
@property char multicastPreferenceSet;
@property char isIdentifierExternal;
@property char denyAll;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addCellularBehavior:(long long)a0 grade:(long long)a1;
- (void)addWiFiBehavior:(long long)a0 grade:(long long)a1;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)initDefaultNonSystemPathRule;
- (id)initDefaultPathRule;
- (char)signingIdentifierAllowed:(id)a0 domainsOrAccountsRequired:(out char *)a1;
- (char)supportsCellularBehavior:(long long)a0;
- (char)supportsWiFiBehavior:(long long)a0;

@end
