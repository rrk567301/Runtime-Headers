@class RTDefaultsManager, NSMutableArray;

@interface RTDailyTrainingSessionCounter : NSObject

@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) NSMutableArray *metrics;

- (void)reset;
- (void).cxx_destruct;
- (void)submitMetrics;
- (id)description;
- (id)initWithDefaultsManager:(id)a0;
- (id)init;
- (id)compoundKeyForMode:(unsigned long long)a0 reason:(unsigned long long)a1;
- (void)createMetrics;
- (void)increaseCountForMode:(unsigned long long)a0 reason:(unsigned long long)a1;
- (id)modeAndReasonFromCompoundKey:(id)a0;
- (BOOL)shouldSubmitMetrics;

@end
