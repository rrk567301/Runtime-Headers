@class TBDataSourceMediator;

@interface WiFi3BarsTileCacheObserver : NSObject

@property (retain, nonatomic) TBDataSourceMediator *dataSourceMediator;

- (void)_submitCacheAvailabilityMetric;
- (void).cxx_destruct;
- (void)_scheduleXPCActivity;
- (id)initWithDataSourceMediator:(id)a0;

@end
