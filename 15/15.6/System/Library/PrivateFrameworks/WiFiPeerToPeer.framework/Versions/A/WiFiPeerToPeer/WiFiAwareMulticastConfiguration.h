@class WiFiMACAddress;

@interface WiFiAwareMulticastConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) WiFiMACAddress *multicastAddress;
@property (nonatomic) char dynamicLinkRate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)multicastAddressConfigurationEqual:(id)a0;

@end
