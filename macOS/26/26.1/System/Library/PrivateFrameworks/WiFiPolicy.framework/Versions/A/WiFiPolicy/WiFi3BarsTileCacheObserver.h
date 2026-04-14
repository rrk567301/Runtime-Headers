@class TBDataSourceMediator;

@interface WiFi3BarsTileCacheObserver : NSObject

@property (retain, nonatomic) TBDataSourceMediator *dataSourceMediator;

- (id)initWithDataSourceMediator:(id)a0;
- (void)_scheduleXPCActivity;
- (void)_submitCacheAvailabilityMetric;
- (void).cxx_destruct;

@end
