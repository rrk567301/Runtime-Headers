@class SUCoreFSM, NSDictionary, NSString, NSMutableArray, NSLock;

@interface MADCacheDeleteManager : NSObject <SUCoreFSMDelegate>

@property (readonly, retain, nonatomic) NSDictionary *stateTable;
@property (retain, nonatomic) SUCoreFSM *stateMachine;
@property (retain, nonatomic) NSMutableArray *spaceCheckRequests;
@property (retain, nonatomic) NSMutableArray *downloadsUsingSpace;
@property (retain, nonatomic) NSLock *spaceCheckRequestsLock;
@property (retain, nonatomic) NSLock *downloadsUsingSpaceLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (id)_generateCacheDeleteManagerStateTable;

- (long long)actionUnknownAction:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (long long)performAction:(id)a0 onEvent:(id)a1 inState:(id)a2 withInfo:(id)a3 nextState:(id)a4 error:(id *)a5;
- (long long)action_NotifyEnoughSpace:(id)a0 error:(id *)a1;
- (long long)action_Activate:(id)a0 error:(id *)a1;
- (long long)action_CheckFileSystem:(id)a0 error:(id *)a1;
- (long long)action_CheckPendingRequest:(id)a0 error:(id *)a1;
- (long long)action_CheckPurgeable:(id)a0 error:(id *)a1;
- (long long)action_NotifyNotEnoughSpaceAfterCheck:(id)a0 error:(id *)a1;
- (long long)action_NotifyNotEnoughSpaceAfterPurge:(id)a0 error:(id *)a1;
- (long long)action_NotifyOperationError:(id)a0 error:(id *)a1;
- (long long)action_PerformPurgeBasePath:(id)a0 error:(id *)a1;
- (long long)action_PerformPurgeSharedPath:(id)a0 error:(id *)a1;
- (long long)action_QueueRequest:(id)a0 error:(id *)a1;
- (long long)action_RemoveCompletedDownload:(id)a0 error:(id *)a1;
- (void)checkAvailableSpace:(unsigned long long)a0 allowPurgeWithUrgency:(int)a1 withCompletionQueue:(id)a2 completion:(id /* block */)a3;
- (BOOL)maCacheDeleteSupported:(id *)a0;
- (void)notifyDownloadCompleted:(id)a0;
- (void)notifyDownloadCompleted:(id)a0 withSpaceNoLongerNeeded:(unsigned long long)a1;
- (unsigned long long)totalSpaceRequired:(unsigned long long)a0;

@end
