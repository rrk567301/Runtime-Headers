@class NSString, NSMutableArray, HMAccessoryInfoProtoAirportInfoEvent;

@interface HMAccessoryInfoProtoNetworkInfoEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasIfaceName;
@property (retain, nonatomic) NSString *ifaceName;
@property (readonly, nonatomic) BOOL hasMacAddress;
@property (retain, nonatomic) NSString *macAddress;
@property (readonly, nonatomic) BOOL hasType;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSMutableArray *ipv4Addresses;
@property (retain, nonatomic) NSMutableArray *ipv6Addresses;
@property (readonly, nonatomic) BOOL hasWifiInfo;
@property (retain, nonatomic) HMAccessoryInfoProtoAirportInfoEvent *wifiInfo;

+ (Class)ipv4AddressesType;
+ (Class)ipv6AddressesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
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
