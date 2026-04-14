@class NSData, NSString;

@interface CWFWiFiNetworkSharingNetworkID : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSData *SSID;
@property (readonly) NSString *descriptor;
@property (copy) NSData *SSID;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithDescriptor:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithSSID:(id)a0;
- (BOOL)isEqualToWiFiNetworkSharingNetworkID:(id)a0;

@end
