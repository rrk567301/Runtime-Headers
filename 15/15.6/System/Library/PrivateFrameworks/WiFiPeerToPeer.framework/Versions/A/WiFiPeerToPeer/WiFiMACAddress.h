@class NSData;

@interface WiFiMACAddress : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSData *data;
@property (readonly) NSData *ipv6LinkLocalAddress;

+ (id)zeroAddress;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAddress:(struct ether_addr { unsigned char x0[6]; })a0;
- (id)initWithAddress:(struct ether_addr { unsigned char x0[6]; })a0 ipv6Address:(struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; })a1;
- (id)initWithLinkLocalIPv6Address:(struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; })a0;
- (id)initWithMulticastIPv6Address:(struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; })a0;

@end
