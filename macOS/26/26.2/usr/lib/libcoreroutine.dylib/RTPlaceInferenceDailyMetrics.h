@class RTDefaultsManager, NSMutableDictionary;

@interface RTPlaceInferenceDailyMetrics : NSObject

@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) NSMutableDictionary *metrics;

- (void)reset;
- (id)getClientKeyForDailyMetrics:(int)a0;
- (void).cxx_destruct;
- (void)submit;
- (id)description;
- (void)increaseCountForClientMappingIndex:(int)a0;
- (id)initWithDefaultsManager:(id)a0;
- (id)getClientKeyForDefaultManager:(int)a0;
- (void)create;
- (id)init;
- (BOOL)shouldSubmit;

@end
