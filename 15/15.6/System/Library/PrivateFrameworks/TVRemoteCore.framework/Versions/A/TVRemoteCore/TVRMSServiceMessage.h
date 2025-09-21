@class NSString;

@interface TVRMSServiceMessage : PBCodable <NSCopying> {
    struct { unsigned char port : 1; unsigned char serviceDiscoverySource : 1; unsigned char serviceLegacyFlags : 1; unsigned char serviceType : 1; } _has;
}

@property (readonly, nonatomic) char hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (readonly, nonatomic) char hasNetworkName;
@property (retain, nonatomic) NSString *networkName;
@property (readonly, nonatomic) char hasHostName;
@property (retain, nonatomic) NSString *hostName;
@property (nonatomic) char hasPort;
@property (nonatomic) int port;
@property (nonatomic) char hasServiceType;
@property (nonatomic) int serviceType;
@property (nonatomic) char hasServiceDiscoverySource;
@property (nonatomic) int serviceDiscoverySource;
@property (nonatomic) char hasServiceLegacyFlags;
@property (nonatomic) int serviceLegacyFlags;
@property (readonly, nonatomic) char hasHomeSharingGroupKey;
@property (retain, nonatomic) NSString *homeSharingGroupKey;

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
