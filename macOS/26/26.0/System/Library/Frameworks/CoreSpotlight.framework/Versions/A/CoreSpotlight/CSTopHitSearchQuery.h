@class NSMutableArray;

@interface CSTopHitSearchQuery : CSUserQuery {
    NSMutableArray *_batches;
}

- (void)handleFoundItems:(id)a0;
- (void)handleFoundCompletions:(id)a0;
- (void)userEngagedWithResult:(id)a0 interactionType:(int)a1;
- (void)handleCompletion:(id)a0;
- (unsigned long long)dispatchApplyWidth;
- (id)initWithQueryString:(id)a0 context:(id)a1;
- (BOOL)isTopHitQuery;
- (void)_handleBatches:(id)a0;
- (id)initWithSearchString:(id)a0 keyboardLanguage:(id)a1 attributes:(id)a2 hitCount:(unsigned long long)a3;
- (void).cxx_destruct;
- (id)initWithUserString:(id)a0 queryContext:(id)a1;

@end
