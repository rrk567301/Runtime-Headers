@class SGMIMetricsTrialMetadata, SGMIMetricsAggregatedAccuracyLog;

@interface SGMIMetricsAggregatedAccuracyLogs : PBCodable <NSCopying> {
    struct { unsigned char hoursSinceReference : 1; } _has;
}

@property (nonatomic) char hasHoursSinceReference;
@property (nonatomic) unsigned int hoursSinceReference;
@property (readonly, nonatomic) char hasActiveTrialMetadata;
@property (retain, nonatomic) SGMIMetricsTrialMetadata *activeTrialMetadata;
@property (readonly, nonatomic) char hasActiveAggregatedAccuracyLogForThePastFourWeeks;
@property (retain, nonatomic) SGMIMetricsAggregatedAccuracyLog *activeAggregatedAccuracyLogForThePastFourWeeks;
@property (readonly, nonatomic) char hasActiveAggregatedAccuracyLogSinceModelInitialization;
@property (retain, nonatomic) SGMIMetricsAggregatedAccuracyLog *activeAggregatedAccuracyLogSinceModelInitialization;
@property (readonly, nonatomic) char hasBackgroundTrialMetadata;
@property (retain, nonatomic) SGMIMetricsTrialMetadata *backgroundTrialMetadata;
@property (readonly, nonatomic) char hasBackgroundAggregatedAccuracyLogForThePastFourWeeks;
@property (retain, nonatomic) SGMIMetricsAggregatedAccuracyLog *backgroundAggregatedAccuracyLogForThePastFourWeeks;
@property (readonly, nonatomic) char hasBackgroundAggregatedAccuracyLogSinceModelInitialization;
@property (retain, nonatomic) SGMIMetricsAggregatedAccuracyLog *backgroundAggregatedAccuracyLogSinceModelInitialization;

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

@end
