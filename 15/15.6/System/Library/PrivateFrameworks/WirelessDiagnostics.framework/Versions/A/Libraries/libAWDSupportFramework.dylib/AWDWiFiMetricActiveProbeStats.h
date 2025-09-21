@interface AWDWiFiMetricActiveProbeStats : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char avgRTTLargePktSize : 1; unsigned char avgRTTMediumPktSize : 1; unsigned char avgRTTSmallPktSize : 1; unsigned char maxRTTLargePktSize : 1; unsigned char maxRTTMediumPktSize : 1; unsigned char maxRTTSmallPktSize : 1; unsigned char minRTTLargePktSize : 1; unsigned char minRTTMediumPktSize : 1; unsigned char minRTTSmallPktSize : 1; unsigned char perLargePktSize : 1; unsigned char perMediumPktSize : 1; unsigned char perSmallPktSize : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasMinRTTSmallPktSize;
@property (nonatomic) unsigned int minRTTSmallPktSize;
@property (nonatomic) char hasMaxRTTSmallPktSize;
@property (nonatomic) unsigned int maxRTTSmallPktSize;
@property (nonatomic) char hasAvgRTTSmallPktSize;
@property (nonatomic) unsigned int avgRTTSmallPktSize;
@property (nonatomic) char hasPerSmallPktSize;
@property (nonatomic) unsigned int perSmallPktSize;
@property (nonatomic) char hasMinRTTMediumPktSize;
@property (nonatomic) unsigned int minRTTMediumPktSize;
@property (nonatomic) char hasMaxRTTMediumPktSize;
@property (nonatomic) unsigned int maxRTTMediumPktSize;
@property (nonatomic) char hasAvgRTTMediumPktSize;
@property (nonatomic) unsigned int avgRTTMediumPktSize;
@property (nonatomic) char hasPerMediumPktSize;
@property (nonatomic) unsigned int perMediumPktSize;
@property (nonatomic) char hasMinRTTLargePktSize;
@property (nonatomic) unsigned int minRTTLargePktSize;
@property (nonatomic) char hasMaxRTTLargePktSize;
@property (nonatomic) unsigned int maxRTTLargePktSize;
@property (nonatomic) char hasAvgRTTLargePktSize;
@property (nonatomic) unsigned int avgRTTLargePktSize;
@property (nonatomic) char hasPerLargePktSize;
@property (nonatomic) unsigned int perLargePktSize;

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
