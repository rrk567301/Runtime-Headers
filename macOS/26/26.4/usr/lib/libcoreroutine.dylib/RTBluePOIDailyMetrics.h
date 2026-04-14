@class RTDefaultsManager, NSMutableDictionary;

@interface RTBluePOIDailyMetrics : NSObject

@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) NSMutableDictionary *metrics;

- (void)setValue:(id)a0 forKey:(id)a1;
- (id)initWithDefaultsManager:(id)a0;
- (void)create;
- (void).cxx_destruct;
- (BOOL)shouldSubmit;
- (void)reset;
- (id)init;
- (void)submit;
- (id)description;
- (void)increaseCountForKey:(id)a0;

@end
