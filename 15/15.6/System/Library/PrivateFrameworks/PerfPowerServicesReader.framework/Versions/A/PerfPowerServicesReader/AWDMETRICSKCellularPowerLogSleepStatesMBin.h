@interface AWDMETRICSKCellularPowerLogSleepStatesMBin : PBCodable <NSCopying> {
    struct { unsigned char count : 1; unsigned char deployment : 1; unsigned char durationMs : 1; unsigned char rat : 1; unsigned char rrcState : 1; unsigned char socSleepState : 1; } _has;
}

@property (nonatomic) char hasRat;
@property (nonatomic) int rat;
@property (nonatomic) char hasRrcState;
@property (nonatomic) int rrcState;
@property (nonatomic) char hasDeployment;
@property (nonatomic) int deployment;
@property (nonatomic) char hasSocSleepState;
@property (nonatomic) int socSleepState;
@property (nonatomic) char hasDurationMs;
@property (nonatomic) unsigned int durationMs;
@property (nonatomic) char hasCount;
@property (nonatomic) unsigned int count;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsDeployment:(id)a0;
- (int)StringAsRat:(id)a0;
- (int)StringAsRrcState:(id)a0;
- (int)StringAsSocSleepState:(id)a0;
- (id)deploymentAsString:(int)a0;
- (id)ratAsString:(int)a0;
- (id)rrcStateAsString:(int)a0;
- (id)socSleepStateAsString:(int)a0;

@end
