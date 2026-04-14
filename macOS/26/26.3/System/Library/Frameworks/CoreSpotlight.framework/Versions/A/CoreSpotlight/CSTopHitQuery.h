@class NSMutableArray;

@interface CSTopHitQuery : CSUserQuery {
    NSMutableArray *_batches;
    unsigned long long _tokenCount;
}

+ (void)sortSearchableItems:(id)a0;

- (BOOL)isTopHitQuery;
- (void)handleCompletion:(id)a0;
- (id)initWithUserString:(id)a0 queryContext:(id)a1;
- (void)handleFoundInstantAnswers:(id)a0;
- (id)initWithQueryString:(id)a0 queryContext:(id)a1;
- (unsigned long long)dispatchApplyWidth;
- (id)initWithQueryString:(id)a0 context:(id)a1;
- (id)initWithUserQueryString:(id)a0 queryContext:(id)a1;
- (void)handleFoundItems:(id)a0;
- (void)filterRankedItems:(id)a0 hitCount:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)handleBatches:(id)a0;

@end
