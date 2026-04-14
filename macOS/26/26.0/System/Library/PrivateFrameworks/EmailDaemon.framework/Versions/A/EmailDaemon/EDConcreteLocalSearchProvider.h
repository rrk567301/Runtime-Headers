@class EDSearchableIndexQueryTransformer, EDMessagePersistence, EDSearchableIndexManager, EDMessageQueryTransformer;

@interface EDConcreteLocalSearchProvider : NSObject <EDLocalSearchProvider>

@property (readonly) EDSearchableIndexManager *searchableIndexManager;
@property (readonly) EDMessagePersistence *messagePersistence;
@property (readonly) EDSearchableIndexQueryTransformer *queryTransformer;
@property (readonly) EDMessageQueryTransformer *messageQueryTransformer;

+ (id)log;

- (void).cxx_destruct;
- (id)_instantAnswersFromSuggestion:(id)a0;
- (id)_snippetHintsFromQueryResultMatchingHints:(id)a0;
- (id)initWithSearchableIndexManager:(id)a0 messagePersistence:(id)a1 messageQueryTransformer:(id)a2;
- (id)liveSearchWithQuery:(id)a0 delegate:(id)a1;
- (unsigned long long)maxTopHitsInCommittedSearch;
- (id)persistenceQueryForSearchableIndexQuery:(id)a0;
- (id)topHitsSearchWithQuery:(id)a0 delegate:(id)a1 completion:(id /* block */)a2;

@end
