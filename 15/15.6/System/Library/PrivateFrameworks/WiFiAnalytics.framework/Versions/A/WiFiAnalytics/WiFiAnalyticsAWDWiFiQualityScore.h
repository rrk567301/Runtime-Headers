@interface WiFiAnalyticsAWDWiFiQualityScore : PBCodable <NSCopying> {
    struct { unsigned char channelQuality : 1; unsigned char rxLatency : 1; unsigned char rxLoss : 1; unsigned char txLatency : 1; unsigned char txLoss : 1; } _has;
}

@property (nonatomic) char hasChannelQuality;
@property (nonatomic) unsigned int channelQuality;
@property (nonatomic) char hasTxLoss;
@property (nonatomic) unsigned int txLoss;
@property (nonatomic) char hasRxLoss;
@property (nonatomic) unsigned int rxLoss;
@property (nonatomic) char hasTxLatency;
@property (nonatomic) unsigned int txLatency;
@property (nonatomic) char hasRxLatency;
@property (nonatomic) unsigned int rxLatency;

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
