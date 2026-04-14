@interface ISS_AYIPV6Address : ISS_AYAddress {
    struct sockaddr_in6 { unsigned char sin6_len; unsigned char sin6_family; unsigned short sin6_port; unsigned int sin6_flowinfo; struct in6_addr { union { unsigned char __u6_addr8[16]; unsigned short __u6_addr16[8]; unsigned int __u6_addr32[4]; } __u6_addr; } sin6_addr; unsigned int sin6_scope_id; } _saddr;
}

- (id)type;
- (int)port;
- (id)addressAsString;
- (id)initWithSockaddrBuffer:(struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0;
- (id)addressAsData;
- (void)getAddressAsSockAddr:(struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0 length:(int *)a1;
- (id)URLToAddressWithScheme:(id)a0 andPort:(int)a1 URI:(id)a2;
- (void)dumpInternal;

@end
