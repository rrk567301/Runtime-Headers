@class NSMutableArray;

@interface AWDMETRICSKCellularPowerLogXOShutdown : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char duration : 1; unsigned char durationMs : 1; unsigned char lastSdmState : 1; unsigned char shutdownCount : 1; unsigned char totalNon0States : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *bins;
@property (nonatomic) char hasDurationMs;
@property (nonatomic) unsigned int durationMs;
@property (nonatomic) char hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) char hasShutdownCount;
@property (nonatomic) unsigned int shutdownCount;
@property (nonatomic) char hasTotalNon0States;
@property (nonatomic) unsigned int totalNon0States;
@property (nonatomic) char hasLastSdmState;
@property (nonatomic) int lastSdmState;

+ (Class)binType;

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
- (void)addBin:(id)a0;
- (int)StringAsLastSdmState:(id)a0;
- (id)binAtIndex:(unsigned long long)a0;
- (unsigned long long)binsCount;
- (void)clearBins;
- (id)lastSdmStateAsString:(int)a0;

@end
