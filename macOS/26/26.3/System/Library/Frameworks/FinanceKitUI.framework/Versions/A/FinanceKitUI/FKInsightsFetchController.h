@interface FKInsightsFetchController : NSObject

- (void)fetchRowViewModelsForTransactionWithIdentifier:(id)a0 primaryAccountIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)pruneRowViewModelsForTransactionWithIdentifier:(id)a0 primaryAccountIdentifier:(id)a1 completionHandler:(id /* block */)a2;

@end
