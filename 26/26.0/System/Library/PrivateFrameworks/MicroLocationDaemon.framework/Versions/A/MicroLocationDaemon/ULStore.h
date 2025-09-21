@class NSManagedObjectContext;

@interface ULStore : NSObject

@property (nonatomic) struct ULDatabaseStoreInterface { void /* function */ **x0; } *dbStore;
@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;

+ (Class)MOClass;
+ (id)defaultSortProperty;
+ (unsigned int)maxEntriesInTable;

- (unsigned int)count;
- (void).cxx_destruct;
- (BOOL)deleteAllRecords;
- (BOOL)batchDeleteObjectsWithEntityName:(id)a0 byAndPredicates:(id)a1 sortDescriptors:(id)a2 andLimit:(unsigned long long)a3;
- (BOOL)batchUpdateObjectsWithEntityName:(id)a0 predicate:(id)a1 propertiesToUpdate:(id)a2;
- (BOOL)commitChangesToStore;
- (id)fetchManagedObjectsWithEntityName:(id)a0 byAndPredicates:(id)a1 sortDescriptors:(id)a2 andLimit:(unsigned long long)a3;
- (BOOL)deleteOldestRecordsForEntityName:(id)a0 sortProperty:(id)a1 maxRecordsToKeep:(unsigned int)a2;
- (id)_batchFetchManagedObjectsWithEntityName:(id)a0 byAndPredicates:(id)a1 sortDescriptors:(id)a2 batchSize:(unsigned long long)a3 limit:(unsigned long long)a4 error:(id *)a5;
- (void)_efficientlyEnumerateManagedObjectsInFetchRequest:(id)a0 usingManagedObjectContext:(id)a1 andApplyBlock:(id /* block */)a2;
- (void)_handleDatabaseError:(id)a0;
- (BOOL)_insertFetchedBatchedObjects:(id)a0 usingBatchSize:(unsigned long long)a1;
- (BOOL)batchTransferManagedObjectsWithEntityName:(id)a0 byAndPredicates:(id)a1 sortDescriptors:(id)a2 batchSize:(unsigned long long)a3 limit:(unsigned long long)a4 intoTargetStore:(id)a5;
- (id)countAllRecordsForEntityName:(id)a0;
- (id)countManagedObjectsWithEntityName:(id)a0 byAndPredicates:(id)a1 sortDescriptors:(id)a2 andLimit:(unsigned long long)a3;
- (BOOL)deleteAllRecordsForEntityName:(id)a0;
- (BOOL)deleteOldestRecordsIfFull;
- (BOOL)deleteRecordsForEntityName:(id)a0 sortProperty:(id)a1 olderThan:(double)a2 orNewerThan:(double)a3;
- (BOOL)deleteRecordsOlderThan:(double)a0 orNewerThan:(double)a1;
- (void)efficientlyFetchManagedObjectsWithEntityName:(id)a0 byAndPredicates:(id)a1 sortDescriptors:(id)a2 andLimit:(unsigned long long)a3 fetchBatchSize:(unsigned long long)a4 andApplyBlock:(id /* block */)a5;
- (id)fetchManagedObjectsForEntityName:(id)a0 propertiesToFetch:(id)a1 propertiesToGroupBy:(id)a2 byAndPredicates:(id)a3 sortDescriptors:(id)a4 andLimit:(unsigned long long)a5;
- (id)fetchManagedObjectsWithEntityName:(id)a0 byAndPredicates:(id)a1 sortDescriptors:(id)a2 andLimit:(unsigned long long)a3 returnObjectsAsFaults:(BOOL)a4 withManagedObjectContext:(id)a5;
- (id)fetchManagedObjectsWithEntityName:(id)a0 byAndPredicates:(id)a1 sortDescriptors:(id)a2 andLimit:(unsigned long long)a3 withManagedObjectContext:(id)a4;
- (id)fetchPropertiesForEntityName:(id)a0 propertiesToFetch:(id)a1 propertiesToGroupBy:(id)a2 distinctResults:(BOOL)a3 byAndPredicates:(id)a4 sortDescriptors:(id)a5 andLimit:(unsigned long long)a6 resetContext:(BOOL)a7;
- (id)fetchPropertyForEntityName:(id)a0 propertyToFetch:(id)a1 distinctResults:(BOOL)a2 byAndPredicates:(id)a3 sortDescriptors:(id)a4 andLimit:(unsigned long long)a5;
- (id)initWithDbStore:(struct ULDatabaseStoreInterface { void /* function */ **x0; } *)a0;
- (void)resetMOC;

@end
