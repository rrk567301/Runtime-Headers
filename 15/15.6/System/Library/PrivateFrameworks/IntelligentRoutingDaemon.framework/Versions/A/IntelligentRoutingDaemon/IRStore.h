@class NSManagedObjectContext, IRPersistenceManager;

@interface IRStore : NSObject

@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, nonatomic) IRPersistenceManager *persistenceManager;

- (void).cxx_destruct;
- (id)initWithPersistenceManager:(id)a0;
- (char)batchDeleteObjectsWithEntityName:(id)a0 byAndPredicates:(id)a1 sortDescriptors:(id)a2 andLimit:(unsigned long long)a3;
- (char)batchUpdateObjectsWithEntityName:(id)a0 predicate:(id)a1 propertiesToUpdate:(id)a2;
- (char)commitChangesToStore;
- (id)countManagedObjectWithEntityName:(id)a0 byAndPredicates:(id)a1 sortDescriptors:(id)a2 andLimit:(unsigned long long)a3;
- (id)fetchManagedObjectWithEntityName:(id)a0 byAndPredicates:(id)a1 sortDescriptors:(id)a2 andLimit:(unsigned long long)a3;
- (id)fetchManagedObjectsWithEntityName:(id)a0 byAndPredicates:(id)a1 sortDescriptors:(id)a2 andLimit:(unsigned long long)a3;
- (id)fetchObjectWithEntityName:(id)a0 byAndPredicates:(id)a1 sortDescriptors:(id)a2 andLimit:(unsigned long long)a3;
- (id)fetchObjectsWithEntityName:(id)a0 byAndPredicates:(id)a1 sortDescriptors:(id)a2 andLimit:(unsigned long long)a3;

@end
