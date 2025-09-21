@class RTDefaultsManager, NSMutableDictionary;

@interface RTPlaceInferenceDailyMetrics : NSObject

@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) NSMutableDictionary *metrics;

- (void)reset;
- (id)getClientKeyForDailyMetrics:(int)a0;
- (id)getClientKeyForDefaultManager:(int)a0;
- (id)init;
- (id)description;
- (BOOL)shouldSubmit;
- (void)submit;
- (void)increaseCountForClientMappingIndex:(int)a0;
- (void).cxx_destruct;
- (void)create;
- (id)initWithDefaultsManager:(id)a0;

@end
