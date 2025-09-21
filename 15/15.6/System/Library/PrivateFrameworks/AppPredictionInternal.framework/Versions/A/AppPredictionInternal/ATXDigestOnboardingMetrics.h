@class NSString;

@interface ATXDigestOnboardingMetrics : _ATXCoreAnalyticsMetric

@property (retain, nonatomic) NSString *sessionUUID;
@property (retain, nonatomic) NSString *entrySource;
@property (retain, nonatomic) NSString *digestOnboardingOutcome;
@property (retain, nonatomic) NSString *finalUIShown;
@property (nonatomic) char didSelectShowMore;
@property (nonatomic) double timeTaken;
@property (nonatomic) long long deliveryTime1;
@property (nonatomic) long long deliveryTime2;
@property (nonatomic) long long deliveryTime3;
@property (nonatomic) unsigned long long numScheduledDeliveries;

- (void).cxx_destruct;
- (id)metricName;
- (id)coreAnalyticsDictionary;

@end
