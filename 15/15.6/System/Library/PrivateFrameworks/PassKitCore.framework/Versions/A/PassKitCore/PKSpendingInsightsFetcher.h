@interface PKSpendingInsightsFetcher : NSObject {
    char _foundInsightsDiscrepancy;
}

- (id)init;
- (char)_validateTrends:(id)a0 againstSummary:(id)a1;
- (void)fetchInsightTrendsForSummary:(id)a0 completion:(id /* block */)a1;

@end
