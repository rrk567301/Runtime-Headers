@class NSString;

@interface WADeviceAnalytics_DHCPServerInfo : NSObject <NSCopying>

@property (retain, nonatomic) NSString *ipv4networkSignature;
@property (retain, nonatomic) NSString *ipv6networkSignature;

+ (id)dhcpServerInfoWithv4Signature:(id)a0 v6Signature:(id)a1;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;

@end
