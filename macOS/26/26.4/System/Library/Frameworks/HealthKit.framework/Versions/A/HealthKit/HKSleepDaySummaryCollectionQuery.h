@class HKSleepDaySummaryQuery;

@interface HKSleepDaySummaryCollectionQuery : NSObject

@property (nonatomic, readonly) HKSleepDaySummaryQuery *query;

- (void).cxx_destruct;
- (id)init;
- (id)initWithMorningIndexRange:(struct { long long x0; long long x1; })a0 aggregationPeriod:(long long)a1 resultsHandler:(id /* block */)a2;

@end
