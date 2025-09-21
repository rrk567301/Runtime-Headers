@class NIDiscoveryToken, NSDictionary, NSArray;

@interface _NIWiFiRangingTestConfiguration : NIConfiguration

@property (readonly, copy, nonatomic) NIDiscoveryToken *peerDiscoveryToken;
@property (readonly, nonatomic) NSDictionary *parameters;
@property (copy) NSArray *monitoredRegions;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)descriptionInternal;
- (id)initWithCoder:(id)a0;
- (id)initWithDiscoveryToken:(id)a0 wifiRangingParameters:(id)a1 regions:(id)a2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
