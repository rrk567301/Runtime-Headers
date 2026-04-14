@class STXPCStoreServerEndpointFactory;

@interface STAdminPersistenceController : STPersistenceController

@property (class, readonly, nonatomic) STAdminPersistenceController *sharedController;

@property (retain) STXPCStoreServerEndpointFactory *storeServerEndpointFactory;

+ (BOOL)isUnitTestRunning;

- (id)viewContext;
- (void).cxx_destruct;
- (void)performBackgroundTask:(id /* block */)a0;
- (id)newBackgroundContext;
- (id)init;
- (void)performBackgroundTaskAndWait:(id /* block */)a0;
- (BOOL)saveContext:(id)a0 error:(id *)a1;

@end
