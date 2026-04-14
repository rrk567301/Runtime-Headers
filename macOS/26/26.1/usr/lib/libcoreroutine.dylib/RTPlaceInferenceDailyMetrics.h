@class RTDefaultsManager, NSMutableDictionary;

@interface RTPlaceInferenceDailyMetrics : NSObject

@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) NSMutableDictionary *metrics;

- (id)getClientKeyForDailyMetrics:(int)a0;
- (void)increaseCountForClientMappingIndex:(int)a0;
- (id)initWithDefaultsManager:(id)a0;
- (void)create;
- (void)submit;
- (id)getClientKeyForDefaultManager:(int)a0;
- (BOOL)shouldSubmit;
- (id)description;
- (void)reset;
- (void).cxx_destruct;
- (id)init;

@end
