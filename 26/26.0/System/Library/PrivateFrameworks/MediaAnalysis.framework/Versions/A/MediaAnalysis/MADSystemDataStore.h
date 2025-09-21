@class NSManagedObjectContext, NSURL, NSPersistentStoreCoordinator;

@interface MADSystemDataStore : NSObject {
    NSManagedObjectContext *_managedObjectContext;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSURL *_storeURL;
}

+ (id)defaultDatabasePath;
+ (id)systemDataStore;
+ (id)modelDefinitionPath;
+ (id)systemDataStoreAtPath:(id)a0;

- (id)managedObjectContext;
- (id)_persistentStoreCoordinator;
- (id)initWithManagedObjectModel:(id)a0;
- (id)newManagedObjectContext;
- (void).cxx_destruct;
- (id)_storeURL;
- (BOOL)commitChangesOrRollback:(id *)a0;
- (BOOL)commitChangesOrRollbackAndResetContext:(id *)a0;
- (id)initWithManagedObjectModel:(id)a0 path:(id)a1;
- (void)rollbackAndResetContext;

@end
