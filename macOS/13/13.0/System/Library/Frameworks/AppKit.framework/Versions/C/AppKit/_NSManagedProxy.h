@class NSString, NSArray, NSPredicate, NSManagedObjectContext;

@interface _NSManagedProxy : NSObject {
    id _callbackHandler;
    NSManagedObjectContext *_managedObjectContext;
    NSString *_entityName;
    NSPredicate *_fetchPredicate;
    NSArray *_sortDescriptors;
    id _lazyFetchingArray;
}

- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)sortDescriptors;
- (void)setSortDescriptors:(id)a0;
- (id)entityName;
- (void)setManagedObjectContext:(id)a0;
- (id)managedObjectContext;
- (void)setEntityName:(id)a0;
- (void)setFetchPredicate:(id)a0;
- (id)fetchPredicate;
- (id)_relationshipKeyPathsForPrefetching;
- (id)_lazyFetchResultProxyForObjects:(id)a0;
- (void)_managedObjectsChangedInContext:(id)a0;
- (void)_managedObjectContextDidSave:(id)a0;
- (void)_refetchForContext:(id)a0;
- (void)_storesDidChange:(id)a0;
- (void)_setCallbackHandler:(id)a0;
- (id)_callbackHandler;
- (id)_managedObjectContext;
- (id)_persistentStoreCoordinator;
- (id)_entity;
- (BOOL)isEntityUsable:(id)a0;
- (id)usableSortDescriptorsFromArray:(id)a0;
- (id)fetchRequestWithSortDescriptors:(id)a0 limit:(unsigned long long)a1;
- (id)fetchObjectsWithFetchRequest:(id)a0 error:(id *)a1;
- (void)_executeFetchForObjects:(id)a0;
- (id)newInsertedObjectForEntity:(id)a0;
- (id)newInsertedObject;
- (void)deleteObject:(id)a0;
- (BOOL)_objectMatchesEntity:(id)a0;
- (BOOL)_objectMatchesFetchPredicate:(id)a0;
- (void)updateBatchSizeForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
