@class STXPCStoreServerEndpointFactory;

@interface STAdminPersistenceController : STPersistenceController

@property (class, readonly, nonatomic) STAdminPersistenceController *sharedController;

@property (retain) STXPCStoreServerEndpointFactory *storeServerEndpointFactory;

+ (BOOL)isUnitTestRunning;

- (id)viewContext;
- (id)newBackgroundContext;
- (void).cxx_destruct;
- (id)init;
- (void)performBackgroundTask:(id /* block */)a0;
- (void)performBackgroundTaskAndWait:(id /* block */)a0;
- (BOOL)saveContext:(id)a0 error:(id *)a1;

@end
