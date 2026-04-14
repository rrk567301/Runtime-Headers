@class NSString;

@interface WADeviceAnalytics_DHCPServerInfo : NSObject <NSCopying>

@property (retain, nonatomic) NSString *ipv4networkSignature;
@property (retain, nonatomic) NSString *ipv6networkSignature;

+ (id)dhcpServerInfoWithv4Signature:(id)a0 v6Signature:(id)a1;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
