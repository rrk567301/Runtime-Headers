@interface AWDMETRICSKCellularPowerLogNRCdrxConfigNrCdrxConfigPerCellGroup : PBCodable <NSCopying> {
    struct { unsigned char drxSlotOffset : 1; unsigned char harqRttTimerDl : 1; unsigned char harqRttTimerUl : 1; unsigned char inactivityTimerMs : 1; unsigned char longCycle : 1; unsigned char longCycleOffset : 1; unsigned char onDurationTimerFraction : 1; unsigned char onDurationTimerMs : 1; unsigned char retransmissionTimerDl : 1; unsigned char retransmissionTimerUl : 1; unsigned char shortCycle : 1; unsigned char shortCycleTimer : 1; unsigned char cdrxEnable : 1; unsigned char shortCycleEnable : 1; } _has;
}

@property (nonatomic) BOOL hasCdrxEnable;
@property (nonatomic) BOOL cdrxEnable;
@property (nonatomic) BOOL hasHarqRttTimerDl;
@property (nonatomic) unsigned int harqRttTimerDl;
@property (nonatomic) BOOL hasHarqRttTimerUl;
@property (nonatomic) unsigned int harqRttTimerUl;
@property (nonatomic) BOOL hasDrxSlotOffset;
@property (nonatomic) unsigned int drxSlotOffset;
@property (nonatomic) BOOL hasRetransmissionTimerDl;
@property (nonatomic) unsigned int retransmissionTimerDl;
@property (nonatomic) BOOL hasRetransmissionTimerUl;
@property (nonatomic) unsigned int retransmissionTimerUl;
@property (nonatomic) BOOL hasOnDurationTimerFraction;
@property (nonatomic) unsigned int onDurationTimerFraction;
@property (nonatomic) BOOL hasOnDurationTimerMs;
@property (nonatomic) unsigned int onDurationTimerMs;
@property (nonatomic) BOOL hasInactivityTimerMs;
@property (nonatomic) unsigned int inactivityTimerMs;
@property (nonatomic) BOOL hasLongCycle;
@property (nonatomic) unsigned int longCycle;
@property (nonatomic) BOOL hasLongCycleOffset;
@property (nonatomic) unsigned int longCycleOffset;
@property (nonatomic) BOOL hasShortCycleEnable;
@property (nonatomic) BOOL shortCycleEnable;
@property (nonatomic) BOOL hasShortCycle;
@property (nonatomic) unsigned int shortCycle;
@property (nonatomic) BOOL hasShortCycleTimer;
@property (nonatomic) unsigned int shortCycleTimer;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
