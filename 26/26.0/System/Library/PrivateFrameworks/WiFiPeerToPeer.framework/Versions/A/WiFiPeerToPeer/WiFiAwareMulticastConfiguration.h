@class WiFiMACAddress;

@interface WiFiAwareMulticastConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) WiFiMACAddress *multicastAddress;
@property (nonatomic) BOOL dynamicLinkRate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)multicastAddressConfigurationEqual:(id)a0;

@end
