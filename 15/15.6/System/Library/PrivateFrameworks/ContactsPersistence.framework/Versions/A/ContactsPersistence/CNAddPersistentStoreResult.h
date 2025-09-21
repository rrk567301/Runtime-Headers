@class NSPersistentStore, NSString, NSPersistentStoreCoordinator;

@interface CNAddPersistentStoreResult : NSObject <CNAddPersistentStoreResult>

@property (readonly) NSPersistentStoreCoordinator *coordinator;
@property (readonly) NSPersistentStore *store;
@property (readonly) char shouldCache;
@property (readonly, getter=isPristineDatabase) char pristineDatabase;
@property (readonly, getter=isReadOnly) char readOnly;
@property (readonly) char didMigrate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCoordinator:(id)a0 store:(id)a1 pristineDatabase:(char)a2 shouldCache:(char)a3 readOnly:(char)a4 didMigrate:(char)a5;

@end
