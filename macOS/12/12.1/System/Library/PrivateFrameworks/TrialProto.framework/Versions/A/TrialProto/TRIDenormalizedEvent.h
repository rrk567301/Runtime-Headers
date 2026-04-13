@class TRITrialSystemTelemetry, TRISubject, NSMutableArray, TRISystemDimensions;

@interface TRIDenormalizedEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSubject;
@property (retain, nonatomic) TRISubject *subject;
@property (retain, nonatomic) NSMutableArray *treatments;
@property (readonly, nonatomic) BOOL hasSystemDimensions;
@property (retain, nonatomic) TRISystemDimensions *systemDimensions;
@property (retain, nonatomic) NSMutableArray *userDimensions;
@property (retain, nonatomic) NSMutableArray *metrics;
@property (readonly, nonatomic) BOOL hasTrialSystemTelemetry;
@property (retain, nonatomic) TRITrialSystemTelemetry *trialSystemTelemetry;

+ (Class)metricType;
+ (Class)treatmentType;
+ (Class)userDimensionType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)addMetric:(id)a0;
- (unsigned long long)metricsCount;
- (void)clearMetrics;
- (id)metricAtIndex:(unsigned long long)a0;
- (void)addTreatment:(id)a0;
- (void)addUserDimension:(id)a0;
- (unsigned long long)treatmentsCount;
- (void)clearTreatments;
- (id)treatmentAtIndex:(unsigned long long)a0;
- (unsigned long long)userDimensionsCount;
- (void)clearUserDimensions;
- (id)userDimensionAtIndex:(unsigned long long)a0;

@end
