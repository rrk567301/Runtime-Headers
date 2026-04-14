@class RTDefaultsManager, NSMutableDictionary;

@interface RTPointOfInterestMonitorDailyMetrics : NSObject

@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) NSMutableDictionary *metrics;

- (void)reset;
- (void).cxx_destruct;
- (void)submit;
- (id)description;
- (id)initWithDefaultsManager:(id)a0;
- (void)create;
- (id)init;
- (BOOL)shouldSubmit;
- (void)increaseCountForKey:(id)a0;

@end
