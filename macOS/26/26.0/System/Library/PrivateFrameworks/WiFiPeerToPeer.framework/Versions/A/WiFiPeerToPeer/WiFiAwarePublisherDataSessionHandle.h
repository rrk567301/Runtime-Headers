@class WiFiMACAddress;

@interface WiFiAwarePublisherDataSessionHandle : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned char datapathID;
@property (readonly, nonatomic) WiFiMACAddress *initiatorDataAddress;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDatapathID:(unsigned char)a0 initiatorDataAddress:(id)a1;

@end
