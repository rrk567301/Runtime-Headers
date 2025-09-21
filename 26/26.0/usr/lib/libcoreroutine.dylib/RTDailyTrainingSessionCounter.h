@class RTDefaultsManager, NSMutableArray;

@interface RTDailyTrainingSessionCounter : NSObject

@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) NSMutableArray *metrics;

- (void)reset;
- (id)init;
- (id)description;
- (void)submitMetrics;
- (void).cxx_destruct;
- (id)initWithDefaultsManager:(id)a0;
- (id)compoundKeyForMode:(unsigned long long)a0 reason:(unsigned long long)a1;
- (void)createMetrics;
- (void)increaseCountForMode:(unsigned long long)a0 reason:(unsigned long long)a1;
- (id)modeAndReasonFromCompoundKey:(id)a0;
- (BOOL)shouldSubmitMetrics;

@end
