@class NSManagedObjectContext;

@interface MADSystemDataStore : NSObject {
    NSManagedObjectContext *_managedObjectContext;
}

+ (id)defaultDatabasePath;
+ (id)systemDataStore;

- (void).cxx_destruct;
- (id)initWithManagedObjectModel:(id)a0;
- (id)managedObjectContext;
- (char)commitChangesOrRollback:(id *)a0;
- (char)commitChangesOrRollbackAndResetContext:(id *)a0;
- (void)rollbackAndResetContext;

@end
