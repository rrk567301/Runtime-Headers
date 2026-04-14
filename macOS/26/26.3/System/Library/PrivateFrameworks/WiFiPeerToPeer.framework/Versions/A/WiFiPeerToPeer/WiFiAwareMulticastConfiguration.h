@class WiFiMACAddress;

@interface WiFiAwareMulticastConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) WiFiMACAddress *multicastAddress;
@property (nonatomic) BOOL dynamicLinkRate;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)multicastAddressConfigurationEqual:(id)a0;

@end
