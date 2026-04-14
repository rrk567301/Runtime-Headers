@class WiFiAwarePublishDatapathSecurityConfiguration, WiFiAwarePublishDatapathServiceSpecificInfo;

@interface WiFiAwarePublishDatapathConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long serviceType;
@property (retain, nonatomic) WiFiAwarePublishDatapathSecurityConfiguration *securityConfiguration;
@property (copy, nonatomic) WiFiAwarePublishDatapathServiceSpecificInfo *serviceSpecificInfo;
@property (nonatomic) long long connectionMode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithServiceType:(long long)a0 securityConfiguration:(id)a1;
- (id)initWithServiceType:(long long)a0 securityConfiguration:(id)a1 connectionMode:(long long)a2;
- (BOOL)securityConfigurationEqual:(id)a0;
- (BOOL)serviceSpecificInfoEqual:(id)a0;

@end
