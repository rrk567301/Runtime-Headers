@interface PGOverTheYearsMemoryConfigurationBuilder : PGOverTimeMemoryConfigurationBuilder

@property (readonly, nonatomic) unsigned long long minimumNumberOfYears;
@property (readonly, nonatomic) char allowTwoConsecutiveYears;
@property (readonly, nonatomic) unsigned long long minimumNumberOfMomentsForTwoConsecutiveYears;

- (id)overTheYearsMemoryConfiguration;

@end
