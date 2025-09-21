@class _HKFilter, HDProfile, HDDatabaseTransactionContext;

@interface HDActivitySummaryBuilder : NSObject {
    HDProfile *_profile;
    _HKFilter *_filter;
}

@property (nonatomic) char shouldIncludePrivateProperties;
@property (nonatomic) char shouldIncludeStatistics;
@property (nonatomic) char orderByDateAscending;
@property (nonatomic) unsigned long long limit;
@property (copy, nonatomic) HDDatabaseTransactionContext *databaseTransactionContext;
@property (readonly, nonatomic) long long enumeratedSummaryCount;

- (id)init;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0;
- (void)activitySummariesWithPredicate:(id)a0 handler:(id /* block */)a1;
- (void)batchedActivitySummariesWithPredicate:(id)a0 maxBatchSize:(unsigned long long)a1 handler:(id /* block */)a2;
- (char)enumerateActivitySummariesWithPredicate:(id)a0 error:(id *)a1 handler:(id /* block */)a2;
- (id)initWithProfile:(id)a0 filter:(id)a1;

@end
