@interface AWDMETRICSKCellularPowerLogPowerEstimatorComponentPowerStats : PBCodable <NSCopying> {
    struct { unsigned char activeDurationMs : 1; unsigned char avgActivePowerMw : 1; unsigned char avgPowerMw : 1; unsigned char component : 1; unsigned char cumulatedEnergyMj : 1; unsigned char peakPowerMw : 1; } _has;
}

@property (nonatomic) char hasComponent;
@property (nonatomic) int component;
@property (nonatomic) char hasAvgPowerMw;
@property (nonatomic) unsigned int avgPowerMw;
@property (nonatomic) char hasAvgActivePowerMw;
@property (nonatomic) unsigned int avgActivePowerMw;
@property (nonatomic) char hasPeakPowerMw;
@property (nonatomic) unsigned int peakPowerMw;
@property (nonatomic) char hasCumulatedEnergyMj;
@property (nonatomic) unsigned int cumulatedEnergyMj;
@property (nonatomic) char hasActiveDurationMs;
@property (nonatomic) unsigned int activeDurationMs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsComponent:(id)a0;
- (id)componentAsString:(int)a0;

@end
