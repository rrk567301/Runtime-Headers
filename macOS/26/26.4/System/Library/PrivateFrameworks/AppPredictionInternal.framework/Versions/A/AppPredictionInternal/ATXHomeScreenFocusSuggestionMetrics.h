@class NSString;

@interface ATXHomeScreenFocusSuggestionMetrics : _ATXCoreAnalyticsMetric

@property (copy, nonatomic) NSString *modeSemanticType;
@property (nonatomic) long long outcome;

- (id)metricName;
- (void).cxx_destruct;
- (id)description;
- (id)coreAnalyticsDictionary;
- (id)outcomeToString:(long long)a0;
- (unsigned long long)cappedForPrivacyWithValue:(long long)a0;

@end
