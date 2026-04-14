@class RTDefaultsManager, NSMutableDictionary;

@interface RTPlaceInferenceDailyMetrics : NSObject

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
- (void)increaseCountForClientMappingIndex:(int)a0;
- (id)getClientKeyForDefaultManager:(int)a0;
- (id)getClientKeyForDailyMetrics:(int)a0;

@end
