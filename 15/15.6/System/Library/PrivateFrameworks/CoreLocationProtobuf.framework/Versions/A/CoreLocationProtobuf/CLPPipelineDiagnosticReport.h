@interface CLPPipelineDiagnosticReport : PBCodable <NSCopying> {
    struct { double *list; unsigned long long count; unsigned long long size; } _prbOnFloorEstimates;
    struct { unsigned char prbCoarseIndoorSaysIndoor : 1; unsigned char prbGpsSaysIndoor : 1; unsigned char prbInjectionGainRetryLimitOk : 1; unsigned char prbInjectionOccupancyRetryLimitOk : 1; unsigned char prbInlierEstimate : 1; unsigned char prbLocalizerIoWrapperSaysWifiOk : 1; unsigned char prbOnFloorsEstimate : 1; unsigned char prbParticleFilterSaysYield : 1; unsigned char prbPipelinedSaysYield : 1; unsigned char prbWifiSaysIndoor : 1; unsigned char pfYieldStatusBeforeCalculatePose : 1; unsigned char yieldStatusBeforeCalculatePose : 1; unsigned char yieldType : 1; } _has;
}

@property (nonatomic) char hasYieldType;
@property (nonatomic) int yieldType;
@property (nonatomic) char hasPrbPipelinedSaysYield;
@property (nonatomic) double prbPipelinedSaysYield;
@property (nonatomic) char hasPrbCoarseIndoorSaysIndoor;
@property (nonatomic) double prbCoarseIndoorSaysIndoor;
@property (nonatomic) char hasPrbWifiSaysIndoor;
@property (nonatomic) double prbWifiSaysIndoor;
@property (nonatomic) char hasPrbGpsSaysIndoor;
@property (nonatomic) double prbGpsSaysIndoor;
@property (nonatomic) char hasPrbParticleFilterSaysYield;
@property (nonatomic) double prbParticleFilterSaysYield;
@property (nonatomic) char hasPrbOnFloorsEstimate;
@property (nonatomic) double prbOnFloorsEstimate;
@property (readonly, nonatomic) unsigned long long prbOnFloorEstimatesCount;
@property (readonly, nonatomic) double *prbOnFloorEstimates;
@property (nonatomic) char hasPrbInlierEstimate;
@property (nonatomic) double prbInlierEstimate;
@property (nonatomic) char hasPrbLocalizerIoWrapperSaysWifiOk;
@property (nonatomic) double prbLocalizerIoWrapperSaysWifiOk;
@property (nonatomic) char hasPrbInjectionOccupancyRetryLimitOk;
@property (nonatomic) double prbInjectionOccupancyRetryLimitOk;
@property (nonatomic) char hasPrbInjectionGainRetryLimitOk;
@property (nonatomic) double prbInjectionGainRetryLimitOk;
@property (nonatomic) char hasPfYieldStatusBeforeCalculatePose;
@property (nonatomic) int pfYieldStatusBeforeCalculatePose;
@property (nonatomic) char hasYieldStatusBeforeCalculatePose;
@property (nonatomic) int yieldStatusBeforeCalculatePose;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsPfYieldStatusBeforeCalculatePose:(id)a0;
- (int)StringAsYieldStatusBeforeCalculatePose:(id)a0;
- (int)StringAsYieldType:(id)a0;
- (void)addPrbOnFloorEstimate:(double)a0;
- (void)clearPrbOnFloorEstimates;
- (id)pfYieldStatusBeforeCalculatePoseAsString:(int)a0;
- (double)prbOnFloorEstimateAtIndex:(unsigned long long)a0;
- (void)setPrbOnFloorEstimates:(double *)a0 count:(unsigned long long)a1;
- (id)yieldStatusBeforeCalculatePoseAsString:(int)a0;
- (id)yieldTypeAsString:(int)a0;

@end
