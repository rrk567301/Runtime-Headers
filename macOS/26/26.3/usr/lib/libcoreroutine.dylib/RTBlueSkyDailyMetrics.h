@class RTDefaultsManager, NSMutableDictionary;

@interface RTBlueSkyDailyMetrics : NSObject

@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) NSMutableDictionary *metrics;

- (id)initWithDefaultsManager:(id)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)create;
- (BOOL)shouldSubmit;
- (void)submit;
- (void)increaseCountForKey:(id)a0;

@end
