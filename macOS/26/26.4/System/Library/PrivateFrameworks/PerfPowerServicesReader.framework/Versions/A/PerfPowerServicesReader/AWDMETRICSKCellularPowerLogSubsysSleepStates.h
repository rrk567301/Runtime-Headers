@class NSMutableArray;

@interface AWDMETRICSKCellularPowerLogSubsysSleepStates : PBCodable <NSCopying> {
    struct { unsigned char durationMs : 1; unsigned char timestamp : 1; unsigned char lastSdmState : 1; unsigned char subsId : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *bins;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) unsigned int subsId;
@property (nonatomic) BOOL hasDurationMs;
@property (nonatomic) unsigned long long durationMs;
@property (nonatomic) BOOL hasLastSdmState;
@property (nonatomic) int lastSdmState;

+ (Class)binType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (int)StringAsLastSdmState:(id)a0;
- (void)addBin:(id)a0;
- (id)binAtIndex:(unsigned long long)a0;
- (unsigned long long)binsCount;
- (void)clearBins;
- (id)lastSdmStateAsString:(int)a0;

@end
