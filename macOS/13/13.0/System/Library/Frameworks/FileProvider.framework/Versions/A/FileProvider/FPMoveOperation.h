@class FPMoveInfo, FPItem, NSArray, NSURL, NSString, NSMutableDictionary, NSDictionary, NSMutableSet, FPProgressManager;
@protocol NSXPCProxyCreating, FPDaemonActionOperation;

@interface FPMoveOperation : FPActionOperation <FPDaemonActionOperationClient> {
    FPMoveInfo *_info;
    NSArray *__sourceURLs;
    NSArray *__sourceItems;
    NSURL *__destinationURL;
    FPItem *__destinationFolder;
    FPProgressManager *_progressManager;
    BOOL _isScheduledFromThisClient;
    id<NSXPCProxyCreating, FPDaemonActionOperation> _remoteMoveOperation;
    NSMutableSet *_createdOrFailedRoots;
    NSMutableDictionary *_createdItemsByRoot;
    NSMutableDictionary *_placeholderIDsByRoot;
    NSMutableDictionary *_URLByResolvedFPItem;
    NSString *_providerIdentifier;
}

@property (copy, nonatomic) NSMutableDictionary *progressByRoot;
@property (copy, nonatomic) id /* block */ _t_patchActionOperationInfo;
@property (copy, nonatomic) id /* block */ _t_remoteOperationWasScheduled;
@property (copy, nonatomic) id /* block */ _t_rootCompleted;
@property (nonatomic) BOOL shouldBounceOnCollision;
@property (nonatomic) unsigned long long lastUsageUpdatePolicy;
@property (copy, nonatomic) NSDictionary *targetFilenamesByURL;
@property (copy, nonatomic) NSDictionary *targetFilenamesByItem;
@property (readonly, nonatomic) BOOL byCopy;
@property (readonly, nonatomic) NSDictionary *transferResults;
@property (readonly, nonatomic) NSDictionary *errorsByItem;
@property (readonly, nonatomic) NSDictionary *transferLocations;
@property (readonly, nonatomic) NSMutableDictionary *filenamesByURL;

- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (id)operationDescription;
- (id)initWithItems:(id)a0 destinationURL:(id)a1;
- (id)initWithItems:(id)a0 destinationFolder:(id)a1;
- (id)initWithURLs:(id)a0 destinationFolder:(id)a1;
- (void)completedWithResult:(id)a0 error:(id)a1;
- (void)actionMain;
- (void)presendNotifications;
- (void)remoteOperationCreatedRoot:(id)a0 resultingItem:(id)a1 completion:(id /* block */)a2;
- (void)remoteOperationCompletedRoot:(id)a0 resultingItem:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)remoteOperationProgressesAreReady;
- (void)remoteOperationFinishedSendingPastUpdates;
- (id)fp_prettyDescription;
- (void)_completedWithResultsByRoot:(id)a0 errorsByRoot:(id)a1 error:(id)a2;
- (id)initWithRemoteOperation:(id)a0 info:(id)a1;
- (void)_runWithRemoteOperation:(id)a0;
- (void)checkNonEmptyPackage;
- (id)initWithSourceItems:(id)a0 orSourceURLs:(id)a1 destinationFolder:(id)a2 orDestinationURL:(id)a3;
- (id)initWithSourceURLs:(id)a0 destinationFolder:(id)a1;
- (id)initWithSourceURLsAndNames:(id)a0 destinationFolder:(id)a1;
- (void)_recomputeMoveInfoIfNecessary;
- (BOOL)_hasAccessToURL:(id)a0 readonly:(BOOL)a1;
- (void)_resolveURLsWithCompletionHandler:(id /* block */)a0;
- (void)_recoverFromCollisionError:(id)a0 withPolicy:(unsigned long long)a1;
- (void)completedWithResultsByRoot:(id)a0 errorsByRoot:(id)a1 error:(id)a2;
- (void)_completedWithResult:(id)a0 error:(id)a1;
- (void)_presendNotifications;
- (unsigned long long)defaultLastUsedDatePolicy;
- (void)runUserInteractionsPreflight:(id /* block */)a0;
- (void)gatherErrorsForUserInteractionForDomain:(id)a0 action:(id)a1 sourceItems:(id)a2 destinationItem:(id)a3 sourceItemKeysAllowList:(id)a4 destinationItemKeysAllowList:(id)a5 errors:(id)a6 completionHandler:(id /* block */)a7;
- (BOOL)_preflightCheckProviderCanMoveWithErrors:(id *)a0;
- (BOOL)_preflightCheckNotMovingIntoSelfWithError:(id *)a0;
- (void)_preflightForceBounceIfCopyingOntoSelf;
- (void)subclassPreflightWithCompletion:(id /* block */)a0;
- (void)_t_unblockReader;
- (void)_resetOperationBeforeErrorRecovery;
- (void)_scheduleAgainAfterErrorRecovery;

@end
