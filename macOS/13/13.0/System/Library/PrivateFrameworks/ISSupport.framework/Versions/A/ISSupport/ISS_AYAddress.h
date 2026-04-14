@interface ISS_AYAddress : NSObject <NSCopying>

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_createAddressFromSockaddrBuffer:(struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0;
+ (id)addressWithData:(id)a0;
+ (id)addressWithString:(id)a0;
+ (id)addressOfPeerFromSocket:(int)a0;
+ (id)addressOfLocalFromSocket:(int)a0;
+ (id)addressesFromDataAddresses:(id)a0;
+ (id)IPV4AddressesFromDataAddresses:(id)a0;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)type;
- (int)port;
- (id)addressAsString;
- (id)addressAsData;
- (void)getAddressAsSockAddr:(struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0 length:(int *)a1;
- (id)URLToAddressWithScheme:(id)a0 andPort:(int)a1 URI:(id)a2;
- (void)dumpInternal;
- (id)initAddressWithData:(id)a0;
- (id)initAddressWithString:(id)a0;
- (id)initAddressWithPeerFromSocket:(int)a0;
- (id)initAddressWithLocalFromSocket:(int)a0;
- (id)URLToAddressWithScheme:(id)a0;
- (id)URLToAddressWithScheme:(id)a0 andPort:(int)a1;

@end
