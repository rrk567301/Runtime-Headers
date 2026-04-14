@interface ISS_AYIPV4Address : ISS_AYAddress {
    struct sockaddr_in { unsigned char sin_len; unsigned char sin_family; unsigned short sin_port; struct in_addr { unsigned int s_addr; } sin_addr; char sin_zero[8]; } _saddr;
}

- (id)type;
- (int)port;
- (id)addressAsString;
- (id)initWithSockaddrBuffer:(struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0;
- (unsigned int)_s_addr;
- (id)addressAsData;
- (void)getAddressAsSockAddr:(struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0 length:(int *)a1;
- (id)URLToAddressWithScheme:(id)a0 andPort:(int)a1 URI:(id)a2;
- (void)dumpInternal;

@end
