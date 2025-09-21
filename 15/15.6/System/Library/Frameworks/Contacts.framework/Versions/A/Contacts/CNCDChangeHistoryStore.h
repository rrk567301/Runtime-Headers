@class CNCDPersistenceStack;

@interface CNCDChangeHistoryStore : NSObject

@property (readonly, nonatomic) CNCDPersistenceStack *persistenceStack;

+ (char)contextHasPersistentStores:(id)a0;

- (void).cxx_destruct;
- (id)resultWithManagedObjectContext:(id /* block */)a0;
- (id)changeHistoryWithFetchRequest:(id)a0 error:(id *)a1;
- (id)currentHistoryAnchor;
- (char)executeChangeHistoryClearRequest:(id)a0 error:(id *)a1;
- (id)initWithPersistenceStack:(id)a0;
- (char)registerChangeHistoryClientIdentifier:(id)a0 forContainerIdentifier:(id)a1 error:(id *)a2;
- (char)unregisterChangeHistoryClientIdentifier:(id)a0 forContainerIdentifier:(id)a1 error:(id *)a2;

@end
