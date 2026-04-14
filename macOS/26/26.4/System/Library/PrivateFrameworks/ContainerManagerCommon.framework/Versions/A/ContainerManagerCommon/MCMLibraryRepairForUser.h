@class MCMManagedUserPathRegistry;

@interface MCMLibraryRepairForUser : MCMLibraryRepair

@property (readonly, nonatomic) MCMManagedUserPathRegistry *userRegistry;

- (id)_managedPathsForGenericRepair;
- (BOOL)_canRepairLocally;
- (BOOL)fixAndRetryIfPermissionsErrorWithURL:(id)a0 containerRootURL:(id)a1 error:(id *)a2 duringBlock:(id /* block */)a3;
- (BOOL)fixAndRetryIfPermissionsErrorWithURL:(id)a0 containerPath:(id)a1 containerIdentifier:(id)a2 error:(id *)a3 duringBlock:(id /* block */)a4;
- (id)_managedPathFromContainerClassPath:(id)a0 registry:(id)a1;
- (void).cxx_destruct;
- (id)_setByAddingContainerClassPathsToSet:(id)a0 registry:(id)a1;
- (id)initWithManagedUserPathRegistry:(id)a0 fileManager:(id)a1 classIterator:(id)a2;
- (BOOL)performRepairForContainerPath:(id)a0 containerIdentifier:(id)a1 error:(id *)a2;

@end
