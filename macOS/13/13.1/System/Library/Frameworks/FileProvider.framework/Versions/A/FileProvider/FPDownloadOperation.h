@class FPDownloadInfo, NSArray, NSMutableDictionary, NSMutableSet, NSObservation, NSFileCoordinator;
@protocol NSXPCProxyCreating, FPDaemonActionOperation;

@interface FPDownloadOperation : FPActionOperation <FPDaemonActionOperationClient> {
    NSArray *_items;
    FPDownloadInfo *_info;
    NSMutableSet *_itemsPendingDownload;
    id<NSXPCProxyCreating, FPDaemonActionOperation> _remoteMoveOperation;
    NSMutableDictionary *_progressByRoot;
    NSObservation *_observation;
    NSMutableDictionary *_childProxies;
    NSFileCoordinator *_coordinator;
}

@property (copy, nonatomic) id /* block */ _t_patchActionOperationInfo;
@property (nonatomic) BOOL recursively;
@property (copy, nonatomic) id /* block */ downloadCompletionBlock;

- (void).cxx_destruct;
- (id)initWithItems:(id)a0;
- (void)completedWithResult:(id)a0 error:(id)a1;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)actionMain;
- (void)presendNotifications;
- (void)remoteOperationCreatedRoot:(id)a0 resultingItem:(id)a1 completion:(id /* block */)a2;
- (void)remoteOperationCompletedRoot:(id)a0 resultingItem:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)remoteOperationProgressesAreReady;
- (void)remoteOperationFinishedSendingPastUpdates;
- (void)_recomputeDownloadInfoIfNecessary;
- (id)fp_prettyDescription;
- (void)_completedWithResultsByRoot:(id)a0 errorsByRoot:(id)a1 error:(id)a2;
- (id)initWithRemoteOperation:(id)a0 info:(id)a1;
- (void)_runWithRemoteOperation:(id)a0;
- (void)_updateProgressWithUpdatedFileCountForItem:(id)a0;
- (void)_setupParentProgress;
- (void)_updateParentProgressForItem:(id)a0 withUnitCount:(id)a1;
- (void)_removeProgressWithItemID:(id)a0;
- (void)_retrieveChildProgressForItem:(id)a0 childProxies:(id)a1 parentSetup:(id /* block */)a2;

@end
