@class NSString, NSMutableArray;

@interface HMAccessoryInfoProtoNetworkServiceEvent : PBCodable <NSCopying> {
    struct { unsigned char isPrimary : 1; } _has;
}

@property (readonly, nonatomic) char hasIfaceName;
@property (retain, nonatomic) NSString *ifaceName;
@property (readonly, nonatomic) char hasMacAddress;
@property (retain, nonatomic) NSString *macAddress;
@property (nonatomic) char hasIsPrimary;
@property (nonatomic) char isPrimary;
@property (readonly, nonatomic) char hasConfirmedIfaceName;
@property (retain, nonatomic) NSString *confirmedIfaceName;
@property (retain, nonatomic) NSMutableArray *ipv4Addresses;
@property (readonly, nonatomic) char hasNetworkSignatureV4;
@property (retain, nonatomic) NSString *networkSignatureV4;
@property (readonly, nonatomic) char hasRouterIPv4;
@property (retain, nonatomic) NSString *routerIPv4;
@property (retain, nonatomic) NSMutableArray *ipv6Addresses;
@property (readonly, nonatomic) char hasNetworkSignatureV6;
@property (retain, nonatomic) NSString *networkSignatureV6;
@property (readonly, nonatomic) char hasRouterIPv6;
@property (retain, nonatomic) NSString *routerIPv6;

+ (Class)ipv4AddressesType;
+ (Class)ipv6AddressesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addIpv4Addresses:(id)a0;
- (void)addIpv6Addresses:(id)a0;
- (void)clearIpv4Addresses;
- (void)clearIpv6Addresses;
- (id)ipv4AddressesAtIndex:(unsigned long long)a0;
- (unsigned long long)ipv4AddressesCount;
- (id)ipv6AddressesAtIndex:(unsigned long long)a0;
- (unsigned long long)ipv6AddressesCount;

@end
