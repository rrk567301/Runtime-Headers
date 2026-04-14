@protocol HKSPUserDefaults;

@interface HKSPAnalyticsStore : NSObject

@property (readonly, nonatomic) id<HKSPUserDefaults> userDefaults;
@property (copy, nonatomic) id /* block */ diagnosticsOptInStatusProvider;

- (id)uncollectedWindDownActions;
- (void)markAllActionsAsCollected;
- (id)windDownActionsForMorningIndex:(long long)a0;
- (id)windDownActionsAfterMorningIndex:(long long)a0;
- (void).cxx_destruct;
- (void)setBaselineForWindDownActions:(id)a0 onMorningIndex:(long long)a1;
- (void)removeAllWindDownActionsBeforeMorningIndex:(long long)a0;
- (void)_setWindDownActions:(id)a0 forMorningIndex:(long long)a1 overwriteExisting:(BOOL)a2;
- (id)initWithUserDefaults:(id)a0 diagnosticsOptInStatusProvider:(id /* block */)a1;
- (void)updateWindDownActions:(id)a0 onMorningIndex:(long long)a1;
- (id)initWithUserDefaults:(id)a0;
- (id)readAllWindDownActions;
- (void)writeWindDownActions:(id)a0;

@end
