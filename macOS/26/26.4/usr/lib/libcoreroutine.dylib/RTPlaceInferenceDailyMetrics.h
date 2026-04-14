@class RTDefaultsManager, NSMutableDictionary;

@interface RTPlaceInferenceDailyMetrics : NSObject

@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) NSMutableDictionary *metrics;

- (id)getClientKeyForDefaultManager:(int)a0;
- (id)initWithDefaultsManager:(id)a0;
- (id)getClientKeyForDailyMetrics:(int)a0;
- (void)create;
- (void).cxx_destruct;
- (BOOL)shouldSubmit;
- (void)increaseCountForClientMappingIndex:(int)a0;
- (void)reset;
- (id)init;
- (void)submit;
- (id)description;

@end
