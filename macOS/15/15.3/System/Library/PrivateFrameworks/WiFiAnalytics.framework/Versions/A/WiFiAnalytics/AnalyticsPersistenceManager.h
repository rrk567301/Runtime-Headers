@class NSManagedObjectModel, NSXPCStoreServer, NSPersistentStoreCoordinator;

@interface AnalyticsPersistenceManager : NSObject

@property (retain, nonatomic) NSXPCStoreServer *xpcStoreServer;
@property (readonly, nonatomic) NSPersistentStoreCoordinator *persistenceCoordinator;
@property (readonly, nonatomic) NSManagedObjectModel *managedObjectModel;

+ (BOOL)isStoreCompatibleAtURL:(id)a0 withModel:(id)a1;
+ (id)sharedWAPersistenceCoordinatorWithMOM:(id)a0;

- (void).cxx_destruct;
- (id)initWithManagedObjectModel:(id)a0 storeDescriptor:(id)a1;

@end
