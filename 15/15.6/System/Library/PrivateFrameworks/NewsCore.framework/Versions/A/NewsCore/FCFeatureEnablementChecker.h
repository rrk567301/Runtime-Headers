@interface FCFeatureEnablementChecker : NSObject

+ (unsigned long long)currentSeedTestBit;
+ (char)enabledForCurrentLevel:(unsigned long long)a0;
+ (char)enabledInConfig:(id)a0 forKey:(id)a1 withDefaultLevel:(unsigned long long)a2;

@end
