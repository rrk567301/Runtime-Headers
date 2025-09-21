@class RTDefaultsManager, NSMutableDictionary;

@interface RTPointOfInterestMonitorDailyMetrics : NSObject

@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) NSMutableDictionary *metrics;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)create;
- (void)submit;
- (void)increaseCountForKey:(id)a0;
- (id)initWithDefaultsManager:(id)a0;
- (char)shouldSubmit;

@end
