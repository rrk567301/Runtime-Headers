@class NSMutableArray;

@interface AWDMETRICSKCellularPlatformApBbSleepStats : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char durationMs : 1; unsigned char lastSdmState : 1; unsigned char isMsim : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasDurationMs;
@property (nonatomic) unsigned int durationMs;
@property (nonatomic) char hasIsMsim;
@property (nonatomic) char isMsim;
@property (retain, nonatomic) NSMutableArray *states;
@property (nonatomic) char hasLastSdmState;
@property (nonatomic) int lastSdmState;

+ (Class)stateType;

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
- (void)addState:(id)a0;
- (id)stateAtIndex:(unsigned long long)a0;
- (void)clearStates;
- (unsigned long long)statesCount;
- (int)StringAsLastSdmState:(id)a0;
- (id)lastSdmStateAsString:(int)a0;

@end
