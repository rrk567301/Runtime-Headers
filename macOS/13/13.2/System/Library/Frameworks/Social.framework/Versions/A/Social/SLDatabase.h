@class NSString, NSPersistentStoreCoordinator, NSManagedObjectModel, NSManagedObjectContext;

@interface SLDatabase : NSObject {
    NSString *_modelPath;
    NSString *_storePath;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSManagedObjectContext *_managedObjectContext;
    NSManagedObjectModel *_managedObjectModel;
}

- (void).cxx_destruct;
- (id)_persistentStoreCoordinator;
- (id)_managedObjectModel;
- (BOOL)save:(id *)a0;
- (id)initWithStoreName:(id)a0 modelPath:(id)a1;
- (id)fetchObjectsForEntityNamed:(id)a0 withPredicate:(id)a1;
- (id)newObjectForEntityNamed:(id)a0;
- (void)_setUpManagedObjectContext;
- (void)_removeFilesAtURL:(id)a0 forStoreCoordinator:(id)a1;

@end
