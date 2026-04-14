@class RTDefaultsManager, NSMutableDictionary;

@interface RTBluePOIDailyMetrics : NSObject

@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) NSMutableDictionary *metrics;

- (id)initWithDefaultsManager:(id)a0;
- (id)description;
- (id)init;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)reset;
- (void)create;
- (BOOL)shouldSubmit;
- (void)submit;
- (void)increaseCountForKey:(id)a0;

@end
