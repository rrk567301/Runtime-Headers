@interface AWDMETRICSKCellularLteCdrxConfig : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char cdrxConfigStatus : 1; unsigned char cellStatus : 1; unsigned char drxInactivityMs : 1; unsigned char drxRetxTimerMs : 1; unsigned char drxShortCycleNum : 1; unsigned char longDrxCycleMs : 1; unsigned char longDrxCycleStartOffsetMs : 1; unsigned char onDurationMs : 1; unsigned char rrcState : 1; unsigned char shortDrxCycleMs : 1; unsigned char subsId : 1; unsigned char transmissionMode : 1; unsigned char shortDrxCycleEnable : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasCellStatus;
@property (nonatomic) unsigned int cellStatus;
@property (nonatomic) char hasOnDurationMs;
@property (nonatomic) unsigned int onDurationMs;
@property (nonatomic) char hasDrxInactivityMs;
@property (nonatomic) unsigned int drxInactivityMs;
@property (nonatomic) char hasDrxRetxTimerMs;
@property (nonatomic) unsigned int drxRetxTimerMs;
@property (nonatomic) char hasLongDrxCycleMs;
@property (nonatomic) unsigned int longDrxCycleMs;
@property (nonatomic) char hasLongDrxCycleStartOffsetMs;
@property (nonatomic) unsigned int longDrxCycleStartOffsetMs;
@property (nonatomic) char hasShortDrxCycleEnable;
@property (nonatomic) char shortDrxCycleEnable;
@property (nonatomic) char hasShortDrxCycleMs;
@property (nonatomic) unsigned int shortDrxCycleMs;
@property (nonatomic) char hasDrxShortCycleNum;
@property (nonatomic) unsigned int drxShortCycleNum;
@property (nonatomic) char hasRrcState;
@property (nonatomic) int rrcState;
@property (nonatomic) char hasCdrxConfigStatus;
@property (nonatomic) unsigned int cdrxConfigStatus;
@property (nonatomic) char hasTransmissionMode;
@property (nonatomic) unsigned int transmissionMode;
@property (nonatomic) char hasSubsId;
@property (nonatomic) unsigned int subsId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsRrcState:(id)a0;
- (id)rrcStateAsString:(int)a0;

@end
