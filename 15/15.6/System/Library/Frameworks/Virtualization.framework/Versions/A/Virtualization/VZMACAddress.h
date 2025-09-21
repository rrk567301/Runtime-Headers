@class NSString;

@interface VZMACAddress : NSObject <NSCopying> {
    struct MacAddress { struct array<unsigned char, 6UL> { unsigned char __elems_[6]; } _octets; } _macAddress;
}

@property (readonly) struct ether_addr { unsigned char x0[6]; } ethernetAddress;
@property (readonly, copy) NSString *string;
@property (readonly, getter=isBroadcastAddress) char isBroadcastAddress;
@property (readonly, getter=isMulticastAddress) char isMulticastAddress;
@property (readonly, getter=isUnicastAddress) char isUnicastAddress;
@property (readonly, getter=isLocallyAdministeredAddress) char isLocallyAdministeredAddress;
@property (readonly, getter=isUniversallyAdministeredAddress) char isUniversallyAdministeredAddress;

+ (id)randomLocallyAdministeredAddress;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithString:(id)a0;
- (id)initWithEthernetAddress:(struct ether_addr { unsigned char x0[6]; })a0;

@end
