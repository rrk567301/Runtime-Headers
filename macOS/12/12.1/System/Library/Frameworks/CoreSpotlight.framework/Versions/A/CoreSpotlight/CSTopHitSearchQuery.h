@class NSMutableArray;

@interface CSTopHitSearchQuery : CSUserQuery {
    NSMutableArray *_batches;
    unsigned long long _foundItemCount;
    id /* block */ foundItemsHandler;
    id /* block */ completionHandler;
}

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (void)setCompletionHandler:(id /* block */)a0;
- (id)initWithQueryString:(id)a0 context:(id)a1;
- (void)setFoundItemsHandler:(id /* block */)a0;
- (unsigned long long)foundItemCount;
- (id /* block */)foundItemsHandler;
- (void)_handleBatches:(id)a0;
- (void)handleCompletion:(id)a0;
- (void)userEngagedWithResult:(id)a0 interactionType:(int)a1;
- (id)initWithSearchString:(id)a0 keyboardLanguage:(id)a1 attributes:(id)a2 hitCount:(unsigned long long)a3;
- (void)handleFoundItems:(id)a0;
- (BOOL)isTopHitQuery;

@end
