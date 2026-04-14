@class NSString, NSData, NSArray;

@interface CWFWiFiNetworkSharingConnectedAP : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *networkName;
@property (copy) NSData *SSID;
@property (copy) NSArray *links;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToWiFiNetworkSharingConnectedAP:(id)a0;

@end
