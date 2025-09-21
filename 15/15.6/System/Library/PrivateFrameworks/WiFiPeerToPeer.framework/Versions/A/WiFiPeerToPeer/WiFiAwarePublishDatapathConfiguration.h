@class WiFiAwarePublishDatapathSecurityConfiguration, WiFiAwarePublishDatapathServiceSpecificInfo;

@interface WiFiAwarePublishDatapathConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long serviceType;
@property (readonly, nonatomic) WiFiAwarePublishDatapathSecurityConfiguration *securityConfiguration;
@property (copy, nonatomic) WiFiAwarePublishDatapathServiceSpecificInfo *serviceSpecificInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithServiceType:(long long)a0 securityConfiguration:(id)a1;
- (char)securityConfigurationEqual:(id)a0;
- (char)serviceSpecificInfoEqual:(id)a0;

@end
