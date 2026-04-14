@class RTDefaultsManager, NSMutableDictionary;

@interface RTPlaceInferenceDailyMetrics : NSObject

@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) NSMutableDictionary *metrics;

- (id)initWithDefaultsManager:(id)a0;
- (void)increaseCountForClientMappingIndex:(int)a0;
- (id)description;
- (id)getClientKeyForDefaultManager:(int)a0;
- (id)init;
- (id)getClientKeyForDailyMetrics:(int)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)create;
- (BOOL)shouldSubmit;
- (void)submit;

@end
