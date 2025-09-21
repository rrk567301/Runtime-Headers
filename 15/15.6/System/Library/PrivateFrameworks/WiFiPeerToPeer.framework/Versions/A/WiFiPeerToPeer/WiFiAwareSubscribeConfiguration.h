@class NSString, WiFiMACAddress, NSData, WiFiAwareFastDiscoveryConfiguration, WiFiAwareMulticastConfiguration, WiFiChannel;

@interface WiFiAwareSubscribeConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSData *serviceSpecificInfo;
@property (copy, nonatomic) WiFiMACAddress *multicastAddress;
@property (copy, nonatomic) WiFiChannel *channelInfo;
@property (copy, nonatomic) NSString *countryCode;
@property (nonatomic) long long timeoutAfter;
@property (nonatomic) long long authenticationType;
@property (copy, nonatomic) WiFiAwareFastDiscoveryConfiguration *fastDiscoveryConfiguration;
@property (copy, nonatomic) WiFiAwareMulticastConfiguration *multicastConfiguration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithServiceName:(id)a0;
- (char)channelConfigurationEqual:(id)a0;
- (char)countryCodeEqual:(id)a0;
- (char)fastDiscoveryConfigEqual:(id)a0;
- (id)initWithServiceName:(id)a0 serviceSpecificInfo:(id)a1;
- (char)multicastAddressConfigurationEqual:(id)a0;
- (char)multicastConfigurationEqual:(id)a0;
- (char)serviceSpecificInfoEqual:(id)a0;

@end
