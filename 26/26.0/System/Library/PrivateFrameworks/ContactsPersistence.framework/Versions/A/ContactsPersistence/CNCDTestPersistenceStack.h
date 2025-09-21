@class NSManagedObjectModel, NSPersistentStoreCoordinator;

@interface CNCDTestPersistenceStack : NSObject

@property (readonly) NSManagedObjectModel *model;
@property (readonly) NSPersistentStoreCoordinator *coordinator;

- (id)init;
- (id)description;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id)addInMemoryStore;
- (id)addSQLiteStoreWithURL:(id)a0;
- (id)makeContext;
- (id)makeDeprecatedLockableContext;
- (void)performWithSession:(id /* block */)a0;
- (id)resultWithSession:(id /* block */)a0;

@end
