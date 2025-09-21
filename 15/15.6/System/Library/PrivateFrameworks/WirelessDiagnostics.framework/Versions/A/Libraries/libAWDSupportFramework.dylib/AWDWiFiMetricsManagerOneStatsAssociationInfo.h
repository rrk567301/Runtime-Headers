@class AWDWiFiMetricsManagerBTCoexModeChange, AWDWiFiMetricsManagerBTCoexStats, AWDWiFiMetricsManagerChipCounters, NSMutableArray;

@interface AWDWiFiMetricsManagerOneStatsAssociationInfo : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasChipCounters;
@property (retain, nonatomic) AWDWiFiMetricsManagerChipCounters *chipCounters;
@property (readonly, nonatomic) char hasBtCoexStats;
@property (retain, nonatomic) AWDWiFiMetricsManagerBTCoexStats *btCoexStats;
@property (readonly, nonatomic) char hasBtCoexModeChange;
@property (retain, nonatomic) AWDWiFiMetricsManagerBTCoexModeChange *btCoexModeChange;
@property (retain, nonatomic) NSMutableArray *chipCountersPerSlices;

+ (Class)chipCountersPerSliceType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addChipCountersPerSlice:(id)a0;
- (id)chipCountersPerSliceAtIndex:(unsigned long long)a0;
- (unsigned long long)chipCountersPerSlicesCount;
- (void)clearChipCountersPerSlices;

@end
