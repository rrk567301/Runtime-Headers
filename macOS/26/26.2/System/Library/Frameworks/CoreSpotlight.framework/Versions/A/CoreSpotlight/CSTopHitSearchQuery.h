@class NSMutableArray;

@interface CSTopHitSearchQuery : CSUserQuery {
    NSMutableArray *_batches;
}

- (void)handleCompletion:(id)a0;
- (id)initWithUserString:(id)a0 queryContext:(id)a1;
- (void)handleFoundItems:(id)a0;
- (id)initWithSearchString:(id)a0 keyboardLanguage:(id)a1 attributes:(id)a2 hitCount:(unsigned long long)a3;
- (BOOL)isTopHitQuery;
- (id)initWithQueryString:(id)a0 context:(id)a1;
- (void)handleFoundCompletions:(id)a0;
- (void)userEngagedWithResult:(id)a0 interactionType:(int)a1;
- (unsigned long long)dispatchApplyWidth;
- (void).cxx_destruct;
- (void)_handleBatches:(id)a0;

@end
