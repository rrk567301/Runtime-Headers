@interface AWDMETRICSCellularPowerLogLTECDRXConfig : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char cycleStartOffset : 1; unsigned char drxInactivity : 1; unsigned char drxRetxTimer : 1; unsigned char drxShortCycleNum : 1; unsigned char longDrxCycle : 1; unsigned char onDuration : 1; unsigned char shortDrxCycle : 1; unsigned char subsId : 1; unsigned char cdrxEnable : 1; unsigned char shortDrxCycleEnable : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasOnDuration;
@property (nonatomic) unsigned int onDuration;
@property (nonatomic) char hasDrxInactivity;
@property (nonatomic) unsigned int drxInactivity;
@property (nonatomic) char hasDrxRetxTimer;
@property (nonatomic) unsigned int drxRetxTimer;
@property (nonatomic) char hasLongDrxCycle;
@property (nonatomic) unsigned int longDrxCycle;
@property (nonatomic) char hasCycleStartOffset;
@property (nonatomic) unsigned int cycleStartOffset;
@property (nonatomic) char hasShortDrxCycleEnable;
@property (nonatomic) char shortDrxCycleEnable;
@property (nonatomic) char hasShortDrxCycle;
@property (nonatomic) unsigned int shortDrxCycle;
@property (nonatomic) char hasDrxShortCycleNum;
@property (nonatomic) unsigned int drxShortCycleNum;
@property (nonatomic) char hasCdrxEnable;
@property (nonatomic) char cdrxEnable;
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

@end
