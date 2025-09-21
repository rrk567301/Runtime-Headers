@interface PKSpendingInsightsFetcher : NSObject {
    BOOL _foundFHInsightsDiscrepancy;
}

@property (nonatomic) BOOL useFinHealth;

- (id)init;
- (id)_deriveTrendsFromSummary:(id)a0 previousSummary:(id)a1 error:(id *)a2;
- (void)fetchInsightTrendsForSummary:(id)a0 previousSummary:(id)a1 completion:(id /* block */)a2;

@end
