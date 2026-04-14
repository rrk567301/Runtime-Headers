@class ATXScoreDistribution, ATXCategoricalAttributeBreakdown;

@interface ATXUIFeedbackMetricsResultSection : NSObject

@property (readonly, nonatomic) ATXScoreDistribution *scoreDistribution;
@property (readonly, nonatomic) ATXCategoricalAttributeBreakdown *clientModelBreakdown;
@property (readonly, nonatomic) ATXCategoricalAttributeBreakdown *consumerSubTypeBreakdown;
@property (readonly, nonatomic) ATXCategoricalAttributeBreakdown *confidenceBreakdown;
@property (readonly, nonatomic) ATXCategoricalAttributeBreakdown *predictionReasonCodeBreakdown;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isEqualToATXUIFeedbackMetricsResultSection:(id)a0;

@end
