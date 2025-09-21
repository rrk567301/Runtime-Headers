@class NSMutableArray;

@interface AWDMETRICSKCellularPowerLogPowerEstimator : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char durationMs : 1; unsigned char lastSdmState : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasDurationMs;
@property (nonatomic) unsigned int durationMs;
@property (retain, nonatomic) NSMutableArray *powerStats;
@property (nonatomic) char hasLastSdmState;
@property (nonatomic) int lastSdmState;

+ (Class)powerStatsType;

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
- (void)clearPowerStats;
- (int)StringAsLastSdmState:(id)a0;
- (unsigned long long)powerStatsCount;
- (void)addPowerStats:(id)a0;
- (id)lastSdmStateAsString:(int)a0;
- (id)powerStatsAtIndex:(unsigned long long)a0;

@end
