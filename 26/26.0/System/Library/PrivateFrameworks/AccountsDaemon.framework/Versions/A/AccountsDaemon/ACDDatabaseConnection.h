@class NSCache, NSObject, NSPersistentStoreCoordinator, NSNumber, NSManagedObjectContext;
@protocol NSObject, OS_dispatch_source, ACDDatabaseConnectionDelegate;

@interface ACDDatabaseConnection : NSObject {
    id<NSObject> _managedObjectContextDidSaveObserver;
    NSCache *_cache;
    NSObject<OS_dispatch_source> *_memoryNotificationSource;
}

@property (readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (weak, nonatomic) id<ACDDatabaseConnectionDelegate> delegate;
@property (retain, nonatomic) NSNumber *version;
@property (retain, nonatomic) NSNumber *keychainVersion;

+ (id)new;

- (void)deleteObject:(id)a0;
- (void)rollback;
- (id)objectForObjectURI:(id)a0;
- (void)_beginObservingManagedObjectContextDidSaveNotifications;
- (void)dealloc;
- (id)_managedObjectModificationDescription:(id)a0;
- (void)_handleManagedObjectContextError:(id)a0;
- (id)fetchObjectsForEntityNamed:(id)a0 withPredicate:(id)a1 sortDescriptor:(id)a2 prefetchKeypaths:(id)a3;
- (id)existingObjectWithURI:(id)a0;
- (id)insertNewObjectForEntityForName:(id)a0;
- (void)_managedObjectContextDidSave:(id)a0;
- (id)fetchObjectsForEntityNamed:(id)a0 withPredicate:(id)a1;
- (id)_managedObjectModel;
- (BOOL)saveWithError:(id *)a0;
- (id)init;
- (id)fetchObjectsForEntityNamed:(id)a0;
- (unsigned long long)countOfEntityNamed:(id)a0 withPredicate:(id)a1;
- (void)_endObservingManagedObjectContextDidSaveNotifications;
- (BOOL)saveWithError:(id *)a0 rollbackOnFailure:(BOOL)a1;
- (void)_traceDatabaseEvents;
- (void)_setupManagedObjectContextWithPersistentStoreCoodinator:(id)a0;
- (id)managedObjectIDForURI:(id)a0;
- (id)_managedObjectContextModificationDescription;
- (void)_delegate_databaseConnectionEncounteredUnrecoverableError:(id)a0;
- (void)_teardownMemoryNotifications;
- (void)deleteAccountPropertyWithKey:(id)a0 owner:(id)a1;
- (void)_setupMemoryNotifications;
- (id)fetchObjectsForEntityNamed:(id)a0 withPredicate:(id)a1 sortDescriptor:(id)a2;
- (id)initWithPersistentStoreCoordinator:(id)a0;
- (id)_accountPropertyWithKey:(id)a0 owner:(id)a1;
- (id)_persistentStore;
- (void)setAccountPropertyWithKey:(id)a0 value:(id)a1 owner:(id)a2;
- (void).cxx_destruct;

@end
