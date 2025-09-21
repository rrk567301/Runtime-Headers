@class NIDiscoveryToken, NSDictionary, NSArray;

@interface _NIWiFiRangingTestConfiguration : NIConfiguration

@property (readonly, copy, nonatomic) NIDiscoveryToken *peerDiscoveryToken;
@property (readonly, nonatomic) NSDictionary *parameters;
@property (copy) NSArray *monitoredRegions;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionInternal;
- (id)initWithDiscoveryToken:(id)a0 wifiRangingParameters:(id)a1 regions:(id)a2;

@end
