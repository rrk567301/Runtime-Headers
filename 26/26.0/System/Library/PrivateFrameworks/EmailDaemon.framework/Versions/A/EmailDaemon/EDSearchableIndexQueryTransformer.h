@class EDSearchableIndexManager;

@interface EDSearchableIndexQueryTransformer : NSObject

@property (readonly) EDSearchableIndexManager *searchableIndexManager;

+ (id)transformSearchableIndexPredicate:(id)a0 suggestion:(id)a1 searchableIndexManager:(id)a2;

- (void).cxx_destruct;
- (id)initWithSearchableIndexManager:(id)a0;
- (id)persistenceQueryForSearchableIndexQuery:(id)a0;

@end
