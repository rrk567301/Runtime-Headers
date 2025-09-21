@interface AWDMETRICSKCellularPowerLogNRCdrxConfigNrCdrxConfigPerCellGroup : PBCodable <NSCopying> {
    struct { unsigned char drxSlotOffset : 1; unsigned char harqRttTimerDl : 1; unsigned char harqRttTimerUl : 1; unsigned char inactivityTimerMs : 1; unsigned char longCycle : 1; unsigned char longCycleOffset : 1; unsigned char onDurationTimerFraction : 1; unsigned char onDurationTimerMs : 1; unsigned char retransmissionTimerDl : 1; unsigned char retransmissionTimerUl : 1; unsigned char shortCycle : 1; unsigned char shortCycleTimer : 1; unsigned char cdrxEnable : 1; unsigned char shortCycleEnable : 1; } _has;
}

@property (nonatomic) char hasCdrxEnable;
@property (nonatomic) char cdrxEnable;
@property (nonatomic) char hasHarqRttTimerDl;
@property (nonatomic) unsigned int harqRttTimerDl;
@property (nonatomic) char hasHarqRttTimerUl;
@property (nonatomic) unsigned int harqRttTimerUl;
@property (nonatomic) char hasDrxSlotOffset;
@property (nonatomic) unsigned int drxSlotOffset;
@property (nonatomic) char hasRetransmissionTimerDl;
@property (nonatomic) unsigned int retransmissionTimerDl;
@property (nonatomic) char hasRetransmissionTimerUl;
@property (nonatomic) unsigned int retransmissionTimerUl;
@property (nonatomic) char hasOnDurationTimerFraction;
@property (nonatomic) unsigned int onDurationTimerFraction;
@property (nonatomic) char hasOnDurationTimerMs;
@property (nonatomic) unsigned int onDurationTimerMs;
@property (nonatomic) char hasInactivityTimerMs;
@property (nonatomic) unsigned int inactivityTimerMs;
@property (nonatomic) char hasLongCycle;
@property (nonatomic) unsigned int longCycle;
@property (nonatomic) char hasLongCycleOffset;
@property (nonatomic) unsigned int longCycleOffset;
@property (nonatomic) char hasShortCycleEnable;
@property (nonatomic) char shortCycleEnable;
@property (nonatomic) char hasShortCycle;
@property (nonatomic) unsigned int shortCycle;
@property (nonatomic) char hasShortCycleTimer;
@property (nonatomic) unsigned int shortCycleTimer;

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
