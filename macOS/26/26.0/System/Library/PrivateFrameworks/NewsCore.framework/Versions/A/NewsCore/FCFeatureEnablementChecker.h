@interface FCFeatureEnablementChecker : NSObject

+ (BOOL)enabledForCurrentLevel:(unsigned long long)a0;
+ (BOOL)enabledInConfig:(id)a0 forKey:(id)a1 withDefaultLevel:(unsigned long long)a2;
+ (unsigned long long)currentSeedTestBit;

@end
