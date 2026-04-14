@class MCMManagedPathRegistry;
@protocol MCMFileManager, MCMContainerClassIterator;

@interface MCMLibraryRepair : NSObject

@property (readonly, nonatomic) MCMManagedPathRegistry *registry;
@property (nonatomic) BOOL pathsCreated;
@property (readonly, nonatomic) id<MCMFileManager> fileManager;
@property (readonly, nonatomic) id<MCMContainerClassIterator> classIterator;

- (BOOL)managedPathsHaveChanged;
- (BOOL)performGenericRepairWithError:(id *)a0;
- (BOOL)_canRepairLocally;
- (BOOL)fixPermissionsWithManagedPath:(id)a0 uid:(unsigned int)a1 gid:(unsigned int)a2 error:(id *)a3;
- (void).cxx_destruct;
- (BOOL)fixAndRetryIfPermissionsErrorWithURL:(id)a0 error:(id *)a1 duringBlock:(id /* block */)a2;
- (id)initWithManagedPathRegistry:(id)a0 fileManager:(id)a1 classIterator:(id)a2;
- (BOOL)createPathsIfNecessaryWithError:(id *)a0;
- (id)_managedPathsForGenericRepair;

@end
