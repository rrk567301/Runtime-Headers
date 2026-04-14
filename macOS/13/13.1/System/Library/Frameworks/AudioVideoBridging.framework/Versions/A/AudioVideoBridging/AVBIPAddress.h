@class NSData;

@interface AVBIPAddress : NSObject <NSCopying> {
    unsigned char _ipAddress[16];
}

@property (readonly) BOOL representsIPv4Address;
@property (copy) NSData *ipv6Address;
@property unsigned int ipv4Address;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSockAddr:(struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0;
- (id)initWithIPv4Address:(unsigned int)a0;
- (id)initWithIPv6Address:(char *)a0;
- (id)initWithIPv6AddressData:(id)a0;

@end
