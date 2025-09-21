@class NSMutableArray;

@interface AWDMETRICSKCellularPowerlogRFSSVoltageLevels : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char durationMs : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *rfssStates;
@property (nonatomic) char hasDurationMs;
@property (nonatomic) unsigned int durationMs;

+ (Class)rfssStateType;

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
- (void)clearRfssStates;
- (unsigned long long)rfssStatesCount;
- (void)addRfssState:(id)a0;
- (id)rfssStateAtIndex:(unsigned long long)a0;

@end
