@class NSString, NSData, WiFiAwareFastDiscoveryConfiguration;

@interface WiFiAwareSubscribeConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSData *serviceSpecificInfo;
@property (nonatomic) long long authenticationType;
@property (copy, nonatomic) WiFiAwareFastDiscoveryConfiguration *fastDiscoveryConfiguration;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithServiceName:(id)a0;
- (BOOL)serviceSpecificInfoEqual:(id)a0;
- (id)initWithServiceName:(id)a0 serviceSpecificInfo:(id)a1;
- (BOOL)fastDiscoveryConfigEqual:(id)a0;

@end
