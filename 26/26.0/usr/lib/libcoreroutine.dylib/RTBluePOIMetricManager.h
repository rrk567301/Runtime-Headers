@class RTBluePOIDailyMetrics, RTDefaultsManager, RTDistanceCalculator, RTBluePOITileStore, NSFileManager, NSString, NSMutableDictionary;

@interface RTBluePOIMetricManager : RTService

@property (readonly, nonatomic) RTBluePOITileStore *bluePOITileStore;
@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (readonly, nonatomic) NSFileManager *fileManager;
@property (readonly, nonatomic) NSString *bluePOIModelPath;
@property (nonatomic) BOOL collectingEventMetrics;
@property (readonly, nonatomic) NSMutableDictionary *eventMetrics;
@property (readonly, nonatomic) RTBluePOIDailyMetrics *dailyMetrics;

- (void)_setObject:(id)a0 forKey:(id)a1;
- (void)onDailyMetricsNotification:(id)a0;
- (void)_setup;
- (id)objectForKey:(id)a0;
- (void)_onDailyMetricsNotification:(id)a0;
- (id)init;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (BOOL)_requestCollectQueryEvent;
- (void)_setEventMetricsValue:(id)a0 forKey:(id)a1;
- (void)_stopCollectQueryEvent;
- (void)_submitEventMetrics;
- (id)initWithDefaultsManager:(id)a0 bluePOITileStore:(id)a1 distanceCalculator:(id)a2 fileManager:(id)a3;
- (BOOL)requestCollectQueryEvent;
- (void)setEventMetricsValue:(id)a0 forKey:(id)a1;
- (void)stopCollectQueryEvent;
- (void)submitEventMetrics;

@end
