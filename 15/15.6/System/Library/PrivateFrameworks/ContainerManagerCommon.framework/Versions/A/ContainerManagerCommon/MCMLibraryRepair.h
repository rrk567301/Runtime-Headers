@class MCMManagedPathRegistry;
@protocol MCMFileManager, MCMContainerClassIterator;

@interface MCMLibraryRepair : NSObject

@property (readonly, nonatomic) MCMManagedPathRegistry *registry;
@property (nonatomic) char pathsCreated;
@property (readonly, nonatomic) id<MCMFileManager> fileManager;
@property (readonly, nonatomic) id<MCMContainerClassIterator> classIterator;

- (void).cxx_destruct;
- (char)_canRepairLocally;
- (id)_managedPathsForGenericRepair;
- (char)createPathsIfNecessaryWithError:(id *)a0;
- (char)fixAndRetryIfPermissionsErrorWithURL:(id)a0 error:(id *)a1 duringBlock:(id /* block */)a2;
- (char)fixPermissionsWithManagedPath:(id)a0 uid:(unsigned int)a1 gid:(unsigned int)a2 error:(id *)a3;
- (id)initWithManagedPathRegistry:(id)a0 fileManager:(id)a1 classIterator:(id)a2;
- (char)managedPathsHaveChanged;
- (char)performGenericRepairWithError:(id *)a0;

@end
