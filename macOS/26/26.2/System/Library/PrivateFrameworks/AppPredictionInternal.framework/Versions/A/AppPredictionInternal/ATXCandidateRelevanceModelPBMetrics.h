@class NSMutableArray, ATXCandidateRelevanceModelPBEvaluationMetrics, ATXCandidateRelevanceModelPBModelMetrics;

@interface ATXCandidateRelevanceModelPBMetrics : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasModelMetrics;
@property (retain, nonatomic) ATXCandidateRelevanceModelPBModelMetrics *modelMetrics;
@property (readonly, nonatomic) BOOL hasEvaluationMetricsOneWeekAgo;
@property (retain, nonatomic) ATXCandidateRelevanceModelPBEvaluationMetrics *evaluationMetricsOneWeekAgo;
@property (readonly, nonatomic) BOOL hasEvaluationMetricsTwoWeeksAgo;
@property (retain, nonatomic) ATXCandidateRelevanceModelPBEvaluationMetrics *evaluationMetricsTwoWeeksAgo;
@property (readonly, nonatomic) BOOL hasEvaluationMetricsThreeWeeksAgo;
@property (retain, nonatomic) ATXCandidateRelevanceModelPBEvaluationMetrics *evaluationMetricsThreeWeeksAgo;
@property (readonly, nonatomic) BOOL hasEvaluationMetricsFourWeeksAgo;
@property (retain, nonatomic) ATXCandidateRelevanceModelPBEvaluationMetrics *evaluationMetricsFourWeeksAgo;
@property (readonly, nonatomic) BOOL hasEvaluationMetricsLastFourWeeks;
@property (retain, nonatomic) ATXCandidateRelevanceModelPBEvaluationMetrics *evaluationMetricsLastFourWeeks;
@property (retain, nonatomic) NSMutableArray *candidateMetrics;

+ (Class)candidateMetricsType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)addCandidateMetrics:(id)a0;
- (id)candidateMetricsAtIndex:(unsigned long long)a0;
- (unsigned long long)candidateMetricsCount;
- (void)clearCandidateMetrics;

@end
