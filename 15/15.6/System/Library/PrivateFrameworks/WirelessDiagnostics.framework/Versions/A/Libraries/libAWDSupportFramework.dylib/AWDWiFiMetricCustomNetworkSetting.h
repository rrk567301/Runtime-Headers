@interface AWDWiFiMetricCustomNetworkSetting : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char autoProxySetCount : 1; unsigned char bootpSetCount : 1; unsigned char customNetworkCount : 1; unsigned char dhcpSetCount : 1; unsigned char manualProxySetCount : 1; unsigned char staticSetCount : 1; unsigned char totalNetworkCount : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasCustomNetworkCount;
@property (nonatomic) unsigned int customNetworkCount;
@property (nonatomic) char hasTotalNetworkCount;
@property (nonatomic) unsigned int totalNetworkCount;
@property (nonatomic) char hasDhcpSetCount;
@property (nonatomic) unsigned int dhcpSetCount;
@property (nonatomic) char hasBootpSetCount;
@property (nonatomic) unsigned int bootpSetCount;
@property (nonatomic) char hasStaticSetCount;
@property (nonatomic) unsigned int staticSetCount;
@property (nonatomic) char hasManualProxySetCount;
@property (nonatomic) unsigned int manualProxySetCount;
@property (nonatomic) char hasAutoProxySetCount;
@property (nonatomic) unsigned int autoProxySetCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
