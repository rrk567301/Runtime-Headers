@interface WBSCyclerRandomnessUtilities : NSObject

+ (void)initialize;
+ (unsigned long long)seed;
+ (void)setSeed:(unsigned long long)a0;
+ (id)randomString;
+ (unsigned long long)randomIntegerWithUpperBound:(unsigned long long)a0;
+ (id)randomURL;
+ (id)randomElementOfArray:(id)a0;
+ (id)randomElementOfArray:(id)a0 relativeProbabilities:(id)a1;
+ (void)reseed;
+ (id)_randomStringWithCharactersFromString:(id)a0;

@end
