@class NSObject, EXSAccount, EXSDataManager;
@protocol OS_dispatch_queue, EXSSyncProtocolDelegate;

@interface EXSSyncProtocol : NSObject <EXSChangeItemPushing>

@property (nonatomic) BOOL pendingResync;
@property (retain, nonatomic) EXSAccount *account;
@property (retain, nonatomic) EXSDataManager *dataManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property BOOL isRunning;
@property (weak) id<EXSSyncProtocolDelegate> delegate;

- (void).cxx_destruct;
- (void)shutdown;
- (void)accountChanged;
- (id)hostnames;
- (void)startup;
- (id)changeSourceID;
- (BOOL)canStoreChangeTokens;
- (id)lastProcessedChangeToken;
- (BOOL)canBatchChangeItemsForPush;
- (BOOL)pushChangeItems:(id)a0 withTrackingToken:(id)a1;
- (void)processOutstandingChangeItems;
- (id)initWithAccount:(id)a0 dataManager:(id)a1 dispatchWorkloop:(id)a2;
- (void)dispatchWithGroup:(id)a0 onWorkQueue:(id /* block */)a1;
- (void)syncFolderHierarchyForFolderIDs:(id)a0 initiatedBy:(id)a1 dispatchGroup:(id)a2;
- (void)needsFolderHierarchyResyncWithDispatchGroup:(id)a0;
- (void)fireHasFolderChanges;
- (void)needsItemResyncForFolder:(id)a0 dispatchGroup:(id)a1;
- (void)fireHasItemChangesForFolder:(id)a0;
- (void)needsItemSyncForExternalFolderIDs:(id)a0 dispatchGroup:(id)a1;
- (void)syncFolderHierarchyInitiatedBy:(id)a0 dispatchGroup:(id)a1;
- (void)syncItemsForFolder:(id)a0 initiatedBy:(id)a1 dispatchGroup:(id)a2;
- (void)firePushChannelStarted;
- (void)firePushChannelStopped;
- (void)needsFolderHierarchySyncForExternalFolderIDs:(id)a0 dispatchGroup:(id)a1;
- (void)hostnameIsReachable:(id)a0;
- (void)hostnameIsNotReachable:(id)a0;
- (void)systemWasWokenFromSleep;
- (void)locateImportantFolders;
- (void)repushFolders:(id)a0 dispatchGroup:(id)a1;
- (void)resyncFolderHierarchyInitiatedBy:(id)a0 dispatchGroup:(id)a1;
- (void)resyncItemsForFolder:(id)a0 initiatedBy:(id)a1 dispatchGroup:(id)a2;
- (void)startPushChannel;
- (void)stopPushChannel;
- (void)processOutstandingChangeItemsWithDispatchGroup:(id)a0;

@end
