@class RTAuthorizedLocationCurationMetrics, RTAuthorizedLocationZDRLocationLiveMetrics, RTAuthorizedLocationDatabaseInitializationMetrics, NSDate, RTAuthorizedLocationQueryMetrics, RTAuthorizedLocationZDRLocationCurationMetrics;

@interface RTAuthorizedLocationMetrics : NSObject

@property (retain, nonatomic) RTAuthorizedLocationCurationMetrics *curationMetrics;
@property (retain, nonatomic) RTAuthorizedLocationDatabaseInitializationMetrics *initializationMetrics;
@property (retain, nonatomic) RTAuthorizedLocationQueryMetrics *queryMetrics;
@property (retain, nonatomic) RTAuthorizedLocationZDRLocationCurationMetrics *zdrLocationsCurationMetrics;
@property (retain, nonatomic) RTAuthorizedLocationZDRLocationLiveMetrics *zdrLocationsLiveMetrics;
@property (readonly, nonatomic) NSDate *daemonStartDate;
@property BOOL locationServicesEnabled;
@property BOOL routineEnabled;
@property (retain, nonatomic) NSDate *lastQueryMetricSubmissionDate;

- (void).cxx_destruct;
- (id)convertToDictionary;
- (id)initWithDaemonStartDate:(id)a0;
- (void)printMetricDictionary:(id)a0;
- (void)submitToCoreAnalytics;
- (double)timeSinceDaemonStart;
- (double)timeSinceLastQueryMetricsSubmission;

@end
