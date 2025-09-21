@class NSFetchedResultsController, NSString, NSMutableDictionary, NSDictionary;

@interface MTBaseQueryObserver : NSObject <NSFetchedResultsControllerDelegate, MTQueryObserver> {
    NSFetchedResultsController *_frc;
}

@property (retain, nonatomic) NSMutableDictionary *handlers;
@property (nonatomic) char isObserving;
@property (nonatomic) char stopCalled;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)fetchedResultsControllerClass;

- (void)dealloc;
- (void).cxx_destruct;
- (id)predicate;
- (void)setPredicate:(id)a0;
- (void)startObserving;
- (id)sortDescriptors;
- (void)setSortDescriptors:(id)a0;
- (void)stop;
- (id)managedObjectContext;
- (id)initWithFetchRequest:(id)a0;
- (id)uuids;
- (void)removeAllResultsChangedHandlers;
- (id)_frc;
- (id)addResultsChangedHandler:(id)a0;
- (id)initWithEntityName:(id)a0 predicate:(id)a1;
- (id)initWithEntityName:(id)a0 predicate:(id)a1 background:(char)a2;
- (id)initWithEntityName:(id)a0 predicate:(id)a1 managedObjectContext:(id)a2;
- (id)initWithEntityName:(id)a0 predicate:(id)a1 sortDescriptors:(id)a2;
- (id)initWithEntityName:(id)a0 predicate:(id)a1 sortDescriptors:(id)a2 limit:(long long)a3;
- (id)initWithEntityName:(id)a0 predicate:(id)a1 sortDescriptors:(id)a2 limit:(long long)a3 batchSize:(long long)a4 propertiesToFetch:(id)a5;
- (id)initWithEntityName:(id)a0 predicate:(id)a1 sortDescriptors:(id)a2 limit:(long long)a3 batchSize:(long long)a4 propertiesToFetch:(id)a5 managedObjectContext:(id)a6;
- (id)initWithEntityName:(id)a0 predicate:(id)a1 sortDescriptors:(id)a2 limit:(long long)a3 returnObjectsAsFaults:(char)a4;
- (id)initWithFetchRequest:(id)a0 managedObjectContext:(id)a1;
- (void)refetch:(id /* block */)a0;
- (void)removeResultsChangedHandler:(id)a0;
- (void)results:(id /* block */)a0;

@end
