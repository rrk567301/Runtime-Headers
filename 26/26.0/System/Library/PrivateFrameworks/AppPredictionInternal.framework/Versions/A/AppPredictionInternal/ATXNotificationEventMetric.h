@class ATXNotificationTelemetryQueryResult;

@interface ATXNotificationEventMetric : _ATXCoreAnalyticsMetric

@property (retain, nonatomic) ATXNotificationTelemetryQueryResult *queryResult;

+ (id)atxComputedModeStringForTimestamp:(id)a0;

- (id)metricName;
- (void).cxx_destruct;
- (id)coreAnalyticsDictionary;
- (id)coreAnalyticsDictionaryFromQueryResult:(id)a0;
- (id)initWithQueryResult:(id)a0;

@end
