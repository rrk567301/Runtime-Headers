@interface AWDWiFiMetricsManagerP2pLegacyUsageReport : PBCodable <NSCopying> {
    struct { unsigned char longestActiveDurationSinceLastReport : 1; unsigned char shortestActiveDurationSinceLastReport : 1; unsigned char timestamp : 1; unsigned char totalActiveDurationSinceLastReport : 1; unsigned char activationsSinceLastReport : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasActivationsSinceLastReport;
@property (nonatomic) unsigned int activationsSinceLastReport;
@property (nonatomic) char hasTotalActiveDurationSinceLastReport;
@property (nonatomic) unsigned long long totalActiveDurationSinceLastReport;
@property (nonatomic) char hasLongestActiveDurationSinceLastReport;
@property (nonatomic) unsigned long long longestActiveDurationSinceLastReport;
@property (nonatomic) char hasShortestActiveDurationSinceLastReport;
@property (nonatomic) unsigned long long shortestActiveDurationSinceLastReport;

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
