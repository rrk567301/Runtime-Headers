@class NSString;

@interface NEEthernetTunnelNetworkSettings : NEPacketTunnelNetworkSettings

@property (copy) NSString *ethernetAddress;

+ (BOOL)supportsSecureCoding;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTunnelRemoteAddress:(id)a0 ethernetAddress:(id)a1 mtu:(long long)a2;

@end
