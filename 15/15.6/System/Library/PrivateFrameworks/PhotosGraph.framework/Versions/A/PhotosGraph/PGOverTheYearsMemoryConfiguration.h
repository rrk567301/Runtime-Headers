@interface PGOverTheYearsMemoryConfiguration : PGOverTimeMemoryConfiguration

@property (nonatomic) unsigned long long minimumNumberOfYears;
@property (nonatomic) char allowTwoConsecutiveYears;
@property (nonatomic) unsigned long long minimumNumberOfMomentsForTwoConsecutiveYears;

+ (id)defaultFallbackOverTheYearsMemoryConfiguration;
+ (id)defaultOverTheYearsMemoryConfiguration;
+ (id)strictDefaultOverTheYearsMemoryConfiguration;

@end
