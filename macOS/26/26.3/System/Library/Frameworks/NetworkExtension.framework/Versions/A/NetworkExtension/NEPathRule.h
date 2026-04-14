@class NSString, NSNumber;

@interface NEPathRule : NEAppRule <NEConfigurationValidating, NEPrettyDescription> {
    NSNumber *_aggregatePersonalCellular;
    NSNumber *_aggregateEnterpriseCellular;
    long long _internalCellularBehavior;
    NSNumber *_aggregatePersonalWiFi;
    NSNumber *_aggregateEnterpriseWiFi;
    long long _internalWiFiBehavior;
}

@property (readonly, getter=isDefaultPathRule) BOOL defaultPathRule;
@property long long cellularBehavior;
@property long long wifiBehavior;
@property BOOL denyCellularFallback;
@property BOOL denyMulticast;
@property (copy) NSString *temporaryAllowMulticastNetworkName;
@property BOOL multicastPreferenceSet;
@property BOOL isIdentifierExternal;
@property BOOL denyAll;

+ (BOOL)supportsSecureCoding;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (BOOL)signingIdentifierAllowed:(id)a0 domainsOrAccountsRequired:(out BOOL *)a1;
- (void)addCellularBehavior:(long long)a0 grade:(long long)a1;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)supportsWiFiBehavior:(long long)a0;
- (BOOL)supportsCellularBehavior:(long long)a0;
- (id)initDefaultPathRule;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initDefaultNonSystemPathRule;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)addWiFiBehavior:(long long)a0 grade:(long long)a1;

@end
