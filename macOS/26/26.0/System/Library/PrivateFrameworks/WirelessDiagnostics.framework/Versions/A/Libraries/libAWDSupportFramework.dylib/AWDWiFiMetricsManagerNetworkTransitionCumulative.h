@interface AWDWiFiMetricsManagerNetworkTransitionCumulative : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _channelScanCounts;
    struct { unsigned char timestamp : 1; unsigned char colocatedNetworksFoundCount : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasColocatedNetworksFoundCount;
@property (nonatomic) unsigned int colocatedNetworksFoundCount;
@property (readonly, nonatomic) unsigned long long channelScanCountsCount;
@property (readonly, nonatomic) unsigned int *channelScanCounts;

- (void)copyTo:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)addChannelScanCount:(unsigned int)a0;
- (unsigned int)channelScanCountAtIndex:(unsigned long long)a0;
- (void)clearChannelScanCounts;
- (void)setChannelScanCounts:(unsigned int *)a0 count:(unsigned long long)a1;

@end
