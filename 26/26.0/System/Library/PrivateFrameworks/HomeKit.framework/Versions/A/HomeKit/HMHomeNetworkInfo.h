@class NSArray, NSString, NSData, HMHomeWiFiInfo;

@interface HMHomeNetworkInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSArray *ipv4Addresses;
@property (readonly, copy) NSArray *ipv6Addresses;
@property (readonly, copy) NSString *ipv4NetworkSignature;
@property (readonly, copy) NSString *ipv6NetworkSignature;
@property (readonly, copy) NSData *binaryIPv4NetworkSignature;
@property (readonly, copy) NSData *binaryIPv6NetworkSignature;
@property (readonly, copy) NSString *routerIPV4;
@property (readonly, copy) NSString *routerIPV6;
@property (readonly, copy) HMHomeWiFiInfo *wiFiInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIpv4Addresses:(id)a0 ipv6Addresses:(id)a1 ipv4NetworkSignature:(id)a2 ipv6NetworkSignature:(id)a3 binaryIPv4NetworkSignature:(id)a4 binaryIPv6NetworkSignature:(id)a5 routerIPV4:(id)a6 routerIPV6:(id)a7 wiFiInfo:(id)a8;

@end
