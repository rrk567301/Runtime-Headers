@class NSMutableArray;

@interface AWDMETRICSKCellularPowerLogPowerEstimator : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char durationMs : 1; unsigned char lastSdmState : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDurationMs;
@property (nonatomic) unsigned int durationMs;
@property (retain, nonatomic) NSMutableArray *powerStats;
@property (nonatomic) BOOL hasLastSdmState;
@property (nonatomic) int lastSdmState;

+ (Class)powerStatsType;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (int)StringAsLastSdmState:(id)a0;
- (void)clearPowerStats;
- (unsigned long long)powerStatsCount;
- (void)addPowerStats:(id)a0;
- (id)lastSdmStateAsString:(int)a0;
- (id)powerStatsAtIndex:(unsigned long long)a0;

@end
