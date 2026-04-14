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

- (void)rollback;
- (id)managedObjectIDForURI:(id)a0;
- (id)insertNewObjectForEntityForName:(id)a0;
- (id)existingObjectWithURI:(id)a0;
- (id)_persistentStore;
- (unsigned long long)countOfEntityNamed:(id)a0 withPredicate:(id)a1;
- (id)fetchObjectsForEntityNamed:(id)a0 withPredicate:(id)a1 sortDescriptor:(id)a2 prefetchKeypaths:(id)a3;
- (id)_managedObjectContextModificationDescription;
- (id)_managedObjectModel;
- (void)_teardownMemoryNotifications;
- (void)_setupMemoryNotifications;
- (id)fetchObjectsForEntityNamed:(id)a0;
- (id)objectForObjectURI:(id)a0;
- (BOOL)saveWithError:(id *)a0 rollbackOnFailure:(BOOL)a1;
- (void)deleteObject:(id)a0;
- (id)fetchObjectsForEntityNamed:(id)a0 withPredicate:(id)a1 sortDescriptor:(id)a2;
- (void)_beginObservingManagedObjectContextDidSaveNotifications;
- (void).cxx_destruct;
- (void)_traceDatabaseEvents;
- (id)initWithPersistentStoreCoordinator:(id)a0;
- (id)init;
- (void)_managedObjectContextDidSave:(id)a0;
- (BOOL)saveWithError:(id *)a0;
- (void)_endObservingManagedObjectContextDidSaveNotifications;
- (id)_accountPropertyWithKey:(id)a0 owner:(id)a1;
- (void)_delegate_databaseConnectionEncounteredUnrecoverableError:(id)a0;
- (void)_handleManagedObjectContextError:(id)a0;
- (void)deleteAccountPropertyWithKey:(id)a0 owner:(id)a1;
- (id)fetchObjectsForEntityNamed:(id)a0 withPredicate:(id)a1;
- (void)dealloc;
- (id)_managedObjectModificationDescription:(id)a0;
- (void)_setupManagedObjectContextWithPersistentStoreCoodinator:(id)a0;
- (void)setAccountPropertyWithKey:(id)a0 value:(id)a1 owner:(id)a2;

@end
