@class NSArray, MCMXPCMessageOperationDelete, NSMutableDictionary;

@interface MCMCommandOperationDelete : MCMCommand <MCMParametersWithConcreteContainersArray, MCMParametersOperationDelete>

@property (readonly, nonatomic) NSArray *containerIdentities;
@property (readonly, nonatomic) BOOL removeAllCodeSignInfo;
@property (readonly, nonatomic) MCMXPCMessageOperationDelete *message;
@property (readonly, nonatomic) NSMutableDictionary *referenceCounts;
@property (copy, nonatomic) id /* block */ onError;
@property (readonly, nonatomic) NSArray *concreteContainerIdentities;
@property (readonly, nonatomic) BOOL traverseLinks;
@property (readonly, nonatomic) BOOL waitForDiskSpaceReclaim;

+ (unsigned long long)command;
+ (id)commandForOperationDeleteWithContainerIdentities:(id)a0 removeAllCodeSignInfo:(BOOL)a1 context:(id)a2 resultPromise:(id)a3 onError:(id /* block */)a4;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (void)execute;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (id)initWithContainerIdentities:(id)a0 traverseLinks:(BOOL)a1 waitForDiskSpaceReclaim:(BOOL)a2 removeAllCodeSignInfo:(BOOL)a3 context:(id)a4 resultPromise:(id)a5 onError:(id /* block */)a6;
- (BOOL)preflightClientAllowed;
- (id)_containersToDeleteRecursivelyStartingWithContainerIdentities:(id)a0 error:(id *)a1;
- (id)_containerIdentitiesToDeleteTransitivelyFromMetadata:(id)a0;
- (id)_deleteItems:(id)a0 directDelete:(BOOL)a1 error:(id *)a2;
- (void)_removeLinksTargetingItems:(id)a0;
- (id)_replyFromRelayToDaemonWithContainerIdentities:(id)a0;

@end
