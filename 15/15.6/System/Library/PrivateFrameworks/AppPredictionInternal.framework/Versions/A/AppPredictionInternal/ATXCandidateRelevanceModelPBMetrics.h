@class NSMutableArray, ATXCandidateRelevanceModelPBEvaluationMetrics, ATXCandidateRelevanceModelPBModelMetrics;

@interface ATXCandidateRelevanceModelPBMetrics : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasModelMetrics;
@property (retain, nonatomic) ATXCandidateRelevanceModelPBModelMetrics *modelMetrics;
@property (readonly, nonatomic) char hasEvaluationMetricsOneWeekAgo;
@property (retain, nonatomic) ATXCandidateRelevanceModelPBEvaluationMetrics *evaluationMetricsOneWeekAgo;
@property (readonly, nonatomic) char hasEvaluationMetricsTwoWeeksAgo;
@property (retain, nonatomic) ATXCandidateRelevanceModelPBEvaluationMetrics *evaluationMetricsTwoWeeksAgo;
@property (readonly, nonatomic) char hasEvaluationMetricsThreeWeeksAgo;
@property (retain, nonatomic) ATXCandidateRelevanceModelPBEvaluationMetrics *evaluationMetricsThreeWeeksAgo;
@property (readonly, nonatomic) char hasEvaluationMetricsFourWeeksAgo;
@property (retain, nonatomic) ATXCandidateRelevanceModelPBEvaluationMetrics *evaluationMetricsFourWeeksAgo;
@property (readonly, nonatomic) char hasEvaluationMetricsLastFourWeeks;
@property (retain, nonatomic) ATXCandidateRelevanceModelPBEvaluationMetrics *evaluationMetricsLastFourWeeks;
@property (retain, nonatomic) NSMutableArray *candidateMetrics;

+ (Class)candidateMetricsType;

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
- (void)addCandidateMetrics:(id)a0;
- (id)candidateMetricsAtIndex:(unsigned long long)a0;
- (unsigned long long)candidateMetricsCount;
- (void)clearCandidateMetrics;

@end
