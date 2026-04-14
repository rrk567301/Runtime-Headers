@class NIDiscoveryToken, NSDictionary, NSArray;

@interface _NIWiFiRangingTestConfiguration : NIConfiguration

@property (readonly, copy, nonatomic) NIDiscoveryToken *peerDiscoveryToken;
@property (readonly, nonatomic) NSDictionary *parameters;
@property (copy) NSArray *monitoredRegions;

+ (BOOL)supportsSecureCoding;

- (id)descriptionInternal;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDiscoveryToken:(id)a0 wifiRangingParameters:(id)a1 regions:(id)a2;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
