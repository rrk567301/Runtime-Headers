@class HKSleepDaySummaryQuery;

@interface HKSleepDaySummaryCollectionQuery : NSObject

@property (nonatomic, readonly) HKSleepDaySummaryQuery *query;

- (void).cxx_destruct;
- (id)init;
- (id)initWithMorningIndexRange:(struct { long long x0; long long x1; })a0 resultsHandler:(id /* block */)a1;

@end
