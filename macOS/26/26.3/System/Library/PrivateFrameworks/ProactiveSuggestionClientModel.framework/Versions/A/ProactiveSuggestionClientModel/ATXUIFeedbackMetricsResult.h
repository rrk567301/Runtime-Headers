@class ATXUIFeedbackMetricsResultSection, ATXTrendPlot;

@interface ATXUIFeedbackMetricsResult : NSObject

@property (readonly, nonatomic) ATXTrendPlot *trendPlot;
@property (readonly, nonatomic) ATXUIFeedbackMetricsResultSection *sectionForShownSuggestions;
@property (readonly, nonatomic) ATXUIFeedbackMetricsResultSection *sectionForEngagedSuggestions;
@property (readonly, nonatomic) ATXUIFeedbackMetricsResultSection *sectionForRejectedSuggestions;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithSpecification:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (BOOL)isEqualToATXUIFeedbackMetricsResult:(id)a0;

@end
