@class NSMutableArray;

@interface AWDMETRICSKCellularPowerlogRFSSVoltageLevels : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char durationMs : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *rfssStates;
@property (nonatomic) BOOL hasDurationMs;
@property (nonatomic) unsigned int durationMs;

+ (Class)rfssStateType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)clearRfssStates;
- (unsigned long long)rfssStatesCount;
- (void)addRfssState:(id)a0;
- (id)rfssStateAtIndex:(unsigned long long)a0;

@end
