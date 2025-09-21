@class NSNumber;

@interface SMPhasedRollout : NSObject

@property (retain, nonatomic) NSNumber *cachedEnablement;

+ (id)sharedManager;

- (BOOL)isRunningUnitTests;
- (void).cxx_destruct;
- (BOOL)cacheAndReturn:(BOOL)a0;
- (long long)getBootArgValue;
- (BOOL)isNewRulesEngineEnabled;
- (BOOL)isNewRulesEngineFFEnabled;
- (BOOL)isRulesEngineForcedDisabled;
- (BOOL)isRulesEngineForcedEnabled;
- (void)resetCachedEnablement;
- (BOOL)rollDice;

@end
