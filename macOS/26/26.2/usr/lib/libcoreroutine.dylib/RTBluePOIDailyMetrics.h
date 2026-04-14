@class RTDefaultsManager, NSMutableDictionary;

@interface RTBluePOIDailyMetrics : NSObject

@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) NSMutableDictionary *metrics;

- (void)setValue:(id)a0 forKey:(id)a1;
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
