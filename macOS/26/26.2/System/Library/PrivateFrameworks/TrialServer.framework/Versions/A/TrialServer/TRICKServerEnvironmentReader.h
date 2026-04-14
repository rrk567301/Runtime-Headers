@interface TRICKServerEnvironmentReader : NSObject

+ (long long)currentEnvironment;
+ (int)currentPopulation;
+ (long long)validatedEnvironmentFromNumber:(id)a0;
+ (int)validatedPopulationFromNumber:(long long)a0;

@end
