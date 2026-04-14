@class RTLearnedRouteClusterStatisticsMetrics, NSDate, RTLearnedRouteCloudKitSyncStatisticsMetrics, RTLearnedRouteSPIStatisticsMetrics, NSMutableArray, RTLearnedRouteCompoundRouteMetrics, RTLearnedRouteMultiModalStatisticsMetrics, RTDefaultsManager;

@interface RTClusterLearnedRouteMetrics : NSObject

@property (retain, nonatomic) RTLearnedRouteClusterStatisticsMetrics *clusterMetrics;
@property (retain, nonatomic) RTLearnedRouteSPIStatisticsMetrics *spiStatMetrics;
@property (retain, nonatomic) RTLearnedRouteCloudKitSyncStatisticsMetrics *cloudKitSyncMetrics;
@property (retain, nonatomic) RTLearnedRouteMultiModalStatisticsMetrics *multiModalStatMetrics;
@property (retain, nonatomic) RTLearnedRouteCompoundRouteMetrics *compoundRouteMetric;
@property (retain, nonatomic) NSMutableArray *compoundRoutesArray;
@property (retain, nonatomic) NSMutableArray *clusterStatisticsArray;
@property (retain, nonatomic) NSDate *timeOfLastSPIQuery;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;

+ (id)sharedInstance:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_initData;
- (void)_processClusterStatistics;
- (void)_processCompoundRouteMetric;
- (id)prepareCloudSyncMetrics;
- (id)prepareMetrics;
- (void)printMetricDictionary:(id)a0;
- (void)submitToCoreAnalytics:(long long)a0;

@end
