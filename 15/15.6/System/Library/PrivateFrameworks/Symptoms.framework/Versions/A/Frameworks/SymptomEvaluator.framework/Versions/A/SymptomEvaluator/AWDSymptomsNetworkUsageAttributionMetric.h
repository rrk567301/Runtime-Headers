@interface AWDSymptomsNetworkUsageAttributionMetric : PBCodable <NSCopying> {
    struct { unsigned char flowsImpactedCount : 1; unsigned char timestamp : 1; unsigned char usageBytes : 1; unsigned char networkType : 1; unsigned char usageAttributedTo : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasNetworkType;
@property (nonatomic) int networkType;
@property (nonatomic) char hasUsageAttributedTo;
@property (nonatomic) int usageAttributedTo;
@property (nonatomic) char hasUsageBytes;
@property (nonatomic) unsigned long long usageBytes;
@property (nonatomic) char hasFlowsImpactedCount;
@property (nonatomic) unsigned long long flowsImpactedCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsNetworkType:(id)a0;
- (id)networkTypeAsString:(int)a0;
- (int)StringAsUsageAttributedTo:(id)a0;
- (id)usageAttributedToAsString:(int)a0;

@end
