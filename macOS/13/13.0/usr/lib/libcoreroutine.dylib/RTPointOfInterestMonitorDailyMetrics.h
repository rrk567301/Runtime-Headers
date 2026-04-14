@class RTDefaultsManager, NSMutableDictionary;

@interface RTPointOfInterestMonitorDailyMetrics : NSObject

@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) NSMutableDictionary *metrics;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)submit;
- (id)initWithDefaultsManager:(id)a0;
- (void)create;
- (BOOL)shouldSubmit;
- (void)increaseCountForKey:(id)a0;

@end
