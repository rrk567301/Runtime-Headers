@class TRITrialSystemTelemetry, TRIMLRuntimeDimensions, TRISubject, NSMutableArray, TRISystemDimensions;

@interface TRIDenormalizedEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasSubject;
@property (retain, nonatomic) TRISubject *subject;
@property (retain, nonatomic) NSMutableArray *treatments;
@property (readonly, nonatomic) char hasSystemDimensions;
@property (retain, nonatomic) TRISystemDimensions *systemDimensions;
@property (retain, nonatomic) NSMutableArray *userDimensions;
@property (retain, nonatomic) NSMutableArray *metrics;
@property (readonly, nonatomic) char hasTrialSystemTelemetry;
@property (retain, nonatomic) TRITrialSystemTelemetry *trialSystemTelemetry;
@property (readonly, nonatomic) char hasMlruntimeDimensions;
@property (retain, nonatomic) TRIMLRuntimeDimensions *mlruntimeDimensions;

+ (Class)metricType;
+ (Class)treatmentType;
+ (Class)userDimensionType;

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
- (void)addMetric:(id)a0;
- (void)clearMetrics;
- (id)metricAtIndex:(unsigned long long)a0;
- (unsigned long long)metricsCount;
- (unsigned long long)treatmentsCount;
- (void)clearTreatments;
- (void)addTreatment:(id)a0;
- (void)addUserDimension:(id)a0;
- (void)clearUserDimensions;
- (id)treatmentAtIndex:(unsigned long long)a0;
- (id)userDimensionAtIndex:(unsigned long long)a0;
- (unsigned long long)userDimensionsCount;

@end
