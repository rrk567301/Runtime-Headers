@class NSString;

@interface HMAccessoryInfoProtoWifiNetworkInfoEvent : PBCodable <NSCopying> {
    struct { unsigned char networkRSSI : 1; unsigned char requiresPassword : 1; } _has;
}

@property (readonly, nonatomic) char hasMacAddress;
@property (retain, nonatomic) NSString *macAddress;
@property (readonly, nonatomic) char hasNetworkSSID;
@property (retain, nonatomic) NSString *networkSSID;
@property (readonly, nonatomic) char hasNetworkGatewayIPAddress;
@property (retain, nonatomic) NSString *networkGatewayIPAddress;
@property (readonly, nonatomic) char hasNetworkBSSID;
@property (retain, nonatomic) NSString *networkBSSID;
@property (readonly, nonatomic) char hasNetworkGatewayMacAddress;
@property (retain, nonatomic) NSString *networkGatewayMacAddress;
@property (nonatomic) char hasNetworkRSSI;
@property (nonatomic) int networkRSSI;
@property (nonatomic) char hasRequiresPassword;
@property (nonatomic) char requiresPassword;

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

@end
