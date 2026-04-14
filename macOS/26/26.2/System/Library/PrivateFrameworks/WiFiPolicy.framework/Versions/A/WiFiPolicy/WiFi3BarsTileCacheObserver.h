@class TBDataSourceMediator;

@interface WiFi3BarsTileCacheObserver : NSObject

@property (retain, nonatomic) TBDataSourceMediator *dataSourceMediator;

- (void)_scheduleXPCActivity;
- (void).cxx_destruct;
- (id)initWithDataSourceMediator:(id)a0;
- (void)_submitCacheAvailabilityMetric;

@end
