@class NSArray, MCMXPCMessageOperationDelete;

@interface MCMCommandOperationDelete : MCMCommand <MCMParametersWithConcreteContainersArray, MCMParametersOperationDelete>

@property (readonly, nonatomic) NSArray *containerIdentities;
@property (readonly, nonatomic) BOOL removeAllCodeSignInfo;
@property (readonly, nonatomic) MCMXPCMessageOperationDelete *message;
@property (copy, nonatomic) id /* block */ onError;
@property (readonly, nonatomic) NSArray *concreteContainerIdentities;
@property (readonly, nonatomic) BOOL traverseLinks;
@property (readonly, nonatomic) BOOL waitForDiskSpaceReclaim;

+ (unsigned long long)command;
+ (id)commandForOperationDeleteWithContainerIdentities:(id)a0 removeAllCodeSignInfo:(BOOL)a1 context:(id)a2 resultPromise:(id)a3 onError:(id /* block */)a4;
+ (BOOL)deleteContainerRootURL:(id)a0 userIdentity:(id)a1 containerClass:(unsigned long long)a2 containerPathIdentifier:(id)a3 preferDirectDelete:(BOOL)a4 error:(id *)a5;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (void)execute;
- (id)_containerIdentitiesToDeleteTransitivelyFromMetadata:(id)a0;
- (id)_containersToDeleteRecursivelyStartingWithContainerIdentities:(id)a0 error:(id *)a1;
- (id)_deleteItems:(id)a0 directDelete:(BOOL)a1 error:(id *)a2;
- (void)_removeLinksTargetingItems:(id)a0;
- (id)_replyFromRelayToDaemonWithContainerIdentities:(id)a0;
- (id)initWithContainerIdentities:(id)a0 traverseLinks:(BOOL)a1 waitForDiskSpaceReclaim:(BOOL)a2 removeAllCodeSignInfo:(BOOL)a3 context:(id)a4 resultPromise:(id)a5 onError:(id /* block */)a6;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (BOOL)preflightClientAllowed;

@end
