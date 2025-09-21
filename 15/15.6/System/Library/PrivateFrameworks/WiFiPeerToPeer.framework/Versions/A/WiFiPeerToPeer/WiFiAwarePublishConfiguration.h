@class WiFiAwareInternetSharingConfiguration, NSString, WiFiMACAddress, WiFiChannel, WiFiAwarePublishDatapathConfiguration, WiFiAwareFastDiscoveryConfiguration, WiFiAwarePublishServiceSpecificInfo, WiFiAwareMulticastConfiguration;

@interface WiFiAwarePublishConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *serviceName;
@property (copy, nonatomic) WiFiAwarePublishServiceSpecificInfo *serviceSpecificInfo;
@property (nonatomic) char furtherServiceDiscoveryRequired;
@property (nonatomic) char jumboServiceDiscoveryMessages;
@property (copy, nonatomic) WiFiMACAddress *multicastAddress;
@property (copy, nonatomic) WiFiChannel *channelInfo;
@property (copy, nonatomic) NSString *countryCode;
@property (nonatomic) long long authenticationType;
@property (copy, nonatomic) WiFiAwarePublishDatapathConfiguration *datapathConfiguration;
@property (copy, nonatomic) WiFiAwareFastDiscoveryConfiguration *fastDiscoveryConfiguration;
@property (copy, nonatomic) WiFiAwareInternetSharingConfiguration *internetSharingConfiguration;
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
- (char)datapathConfigurationEqual:(id)a0;
- (char)fastDiscoveryConfigurationEqual:(id)a0;
- (char)internetSharingConfigurationEqual:(id)a0;
- (char)multicastAddressConfigurationEqual:(id)a0;
- (char)multicastConfigurationEqual:(id)a0;
- (char)serviceSpecificInfoEqual:(id)a0;

@end
