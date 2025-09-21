@class NSPersistentStoreCoordinator;

@interface CNPersistentStoreCoordinatorResult : NSObject

@property (readonly) NSPersistentStoreCoordinator *coordinator;
@property (readonly, getter=isPristineDatabase) char pristineDatabase;
@property (readonly, getter=isReadOnly) char readOnly;
@property (readonly) char didMigrate;

+ (id)resultsWithCoordinator:(id)a0 pristineDatabase:(char)a1;

- (void).cxx_destruct;
- (id)initWithCoordinator:(id)a0 pristineDatabase:(char)a1 readOnly:(char)a2 didMigrate:(char)a3;

@end
