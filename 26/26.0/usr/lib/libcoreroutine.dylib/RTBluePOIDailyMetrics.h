@class RTDefaultsManager, NSMutableDictionary;

@interface RTBluePOIDailyMetrics : NSObject

@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) NSMutableDictionary *metrics;

- (void)reset;
- (id)init;
- (id)description;
- (BOOL)shouldSubmit;
- (void)submit;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)create;
- (id)initWithDefaultsManager:(id)a0;
- (void)increaseCountForKey:(id)a0;

@end
