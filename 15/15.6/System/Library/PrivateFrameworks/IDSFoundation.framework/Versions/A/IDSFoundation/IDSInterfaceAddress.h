@class IDSSockAddrWrapper, NSString, NSData;

@interface IDSInterfaceAddress : NSObject

@property (readonly) unsigned long long IPVersion;
@property (readonly) IDSSockAddrWrapper *address;
@property (copy) IDSSockAddrWrapper *external;
@property (readonly) IDSSockAddrWrapper *netmask;
@property (readonly) IDSSockAddrWrapper *destination;
@property (readonly) NSString *name;
@property (readonly) unsigned int index;
@property (readonly) NSString *delegatedName;
@property (readonly) unsigned int delegatedIndex;
@property (readonly) NSData *bssid;
@property (readonly, getter=isAWDL) char AWDL;
@property (readonly, getter=isCellular) char Cellular;
@property (readonly, getter=isTemporaryIPv6) char temporary;
@property (readonly, getter=isCompanionLink) char companionLink;
@property (readonly, getter=isWired) char wired;
@property (readonly, nonatomic) char expensive;
@property (nonatomic) char constrained;
@property (readonly, nonatomic) char clat46;

+ (id)addressesFromInterfaceAddresses:(id)a0;
+ (id)interfaceAddress:(struct ifaddrs { struct ifaddrs *x0; char *x1; unsigned int x2; struct sockaddr *x3; struct sockaddr *x4; struct sockaddr *x5; void *x6; } *)a0 eflags:(unsigned long long)a1 v6flags:(int)a2 iftype:(int)a3;
+ (id)interfaceAddressWithTransmittedBytes:(char *)a0 length:(long long)a1 withLocalInterfaceName:(id)a2;

- (id)description;
- (void).cxx_destruct;
- (long long)getTransmittableBytes:(char *)a0 withPrefixByte:(unsigned char)a1;
- (id)initWithInterfaceAddress:(struct ifaddrs { struct ifaddrs *x0; char *x1; unsigned int x2; struct sockaddr *x3; struct sockaddr *x4; struct sockaddr *x5; void *x6; } *)a0 bflags:(unsigned char)a1;

@end
