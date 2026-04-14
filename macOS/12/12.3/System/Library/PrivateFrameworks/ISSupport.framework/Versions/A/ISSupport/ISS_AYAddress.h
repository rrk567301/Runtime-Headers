@interface ISS_AYAddress : NSObject <NSCopying>

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (id)_createAddressFromSockaddrBuffer:(struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0;
+ (id)addressWithData:(id)a0;
+ (id)addressWithString:(id)a0;
+ (id)addressOfPeerFromSocket:(int)a0;
+ (id)addressOfLocalFromSocket:(int)a0;
+ (id)addressesFromDataAddresses:(id)a0;
+ (id)IPV4AddressesFromDataAddresses:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)type;
- (int)port;
- (id)addressAsString;
- (id)initAddressWithString:(id)a0;
- (id)URLToAddressWithScheme:(id)a0 andPort:(int)a1 URI:(id)a2;
- (id)addressAsData;
- (void)getAddressAsSockAddr:(struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0 length:(int *)a1;
- (void)dumpInternal;
- (id)initAddressWithData:(id)a0;
- (id)initAddressWithPeerFromSocket:(int)a0;
- (id)initAddressWithLocalFromSocket:(int)a0;
- (id)URLToAddressWithScheme:(id)a0;
- (id)URLToAddressWithScheme:(id)a0 andPort:(int)a1;

@end
