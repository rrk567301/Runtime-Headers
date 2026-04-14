@class RTDefaultsManager, NSMutableDictionary;

@interface RTPointOfInterestMonitorDailyMetrics : NSObject

@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) NSMutableDictionary *metrics;

- (id)initWithDefaultsManager:(id)a0;
- (void)create;
- (void)submit;
- (BOOL)shouldSubmit;
- (id)description;
- (void)reset;
- (void).cxx_destruct;
- (id)init;
- (void)increaseCountForKey:(id)a0;

@end
