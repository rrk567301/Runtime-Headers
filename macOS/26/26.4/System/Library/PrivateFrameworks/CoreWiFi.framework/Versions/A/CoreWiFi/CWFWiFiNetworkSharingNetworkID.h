@class NSData, NSString;

@interface CWFWiFiNetworkSharingNetworkID : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSData *SSID;
@property (readonly) NSString *descriptor;
@property (copy) NSData *SSID;

- (id)initWithDescriptor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithSSID:(id)a0;
- (BOOL)isEqualToWiFiNetworkSharingNetworkID:(id)a0;

@end
