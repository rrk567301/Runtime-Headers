@class NSArray, MCMXPCMessageOperationDelete, NSMutableDictionary;

@interface MCMCommandOperationDelete : MCMCommand <MCMParametersWithConcreteContainersArray, MCMParametersOperationDelete>

@property (readonly, nonatomic) NSArray *containerIdentities;
@property (readonly, nonatomic) BOOL removeAllCodeSignInfo;
@property (readonly, nonatomic) MCMXPCMessageOperationDelete *message;
@property (readonly, nonatomic) NSMutableDictionary *referenceCounts;
@property (readonly, nonatomic) BOOL runFromManifests;
@property (copy, nonatomic) id /* block */ onError;
@property (readonly, nonatomic) NSArray *concreteContainerIdentities;
@property (readonly, nonatomic) BOOL traverseLinks;
@property (readonly, nonatomic) BOOL waitForDiskSpaceReclaim;

+ (unsigned long long)command;
+ (id)commandForOperationDeleteWithContainerIdentities:(id)a0 removeAllCodeSignInfo:(BOOL)a1 context:(id)a2 resultPromise:(id)a3 onError:(id /* block */)a4;
+ (id)commandForOperationDeleteFromManifestsRemoveAllCodeSignInfo:(BOOL)a0 context:(id)a1 resultPromise:(id)a2 onError:(id /* block */)a3;
+ (Class)incomingMessageClass;
+ (id)_materializeContainerIdentityFromManifestAtURL:(id)a0 userIdentityCache:(id)a1 error:(id *)a2;
+ (id)_materializeContainerIdentityFromManifestPlist:(id)a0 userIdentityCache:(id)a1 error:(id *)a2;
+ (id)_materializeContainerIdentityFromManifestPlistV1:(id)a0 userIdentityCache:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (void)execute;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (id)initWithContainerIdentities:(id)a0 traverseLinks:(BOOL)a1 waitForDiskSpaceReclaim:(BOOL)a2 removeAllCodeSignInfo:(BOOL)a3 runFromManifests:(BOOL)a4 context:(id)a5 resultPromise:(id)a6 onError:(id /* block */)a7;
- (BOOL)preflightClientAllowed;
- (id)_containersToDeleteRecursivelyStartingWithContainerIdentities:(id)a0 error:(id *)a1;
- (id)_containerIdentitiesToDeleteTransitivelyFromMetadata:(id)a0;
- (id)_deleteItems:(id)a0 directDelete:(BOOL)a1 error:(id *)a2;
- (void)_removeLinksTargetingItems:(id)a0;
- (id)_replyFromRelayToDaemonWithContainerIdentities:(id)a0;
- (void)_setManifestURLsForItems:(id)a0;
- (BOOL)_writeDeleteManifestsForItems:(id)a0 error:(id *)a1;
- (BOOL)_writeDeleteManifestForItem:(id)a0 error:(id *)a1;
- (id)_urlForDeleteManifestWithContainerIdentity:(id)a0;
- (BOOL)_removeDeleteManifestIfExistsForContainerIdentity:(id)a0 error:(id *)a1;
- (id)_stableFileNameForDataOperationPlistWithContainerIdentity:(id)a0;

@end
