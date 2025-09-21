@class NSString, SUCoreConnectClient;

@interface MAAutoAssetControl : NSObject <SUCoreConnectClientDelegate>

@property (readonly, retain, nonatomic) NSString *controlClientName;
@property (readonly, retain, nonatomic) NSString *controlClientProcessName;
@property (readonly, nonatomic) long long controlClientProcessID;
@property (retain, nonatomic) SUCoreConnectClient *connectionClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)forceGlobalPurge:(id)a0 forcingUnlock:(char)a1;
+ (long long)simulateCacheDeleteDetermineReclaimableSpace:(id)a0 withUrgency:(int)a1 error:(id *)a2;
+ (id)_privateStateQueue;
+ (id)activeJobSummary:(char)a0 error:(id *)a1;
+ (id)activeJobSummary:(char)a0 limitedToAssetTypes:(id)a1 error:(id *)a2;
+ (id)assetSelectorOrAllSelector:(id)a0;
+ (id)autoAssetControl;
+ (id)availableForStagingAssetSummary:(id *)a0;
+ (id)controlStatistics:(char)a0 error:(id *)a1;
+ (id)defaultDispatchQueue;
+ (id)forceGlobalAbandon:(id)a0;
+ (id)forceGlobalForget:(id)a0;
+ (id)forceGlobalUnlock:(id)a0;
+ (void)frameworkInstanceSetLogDomain;
+ (id)frameworkInstanceUUID;
+ (id)knownAssetSummary:(char)a0 error:(id *)a1;
+ (id)knownAssetSummary:(char)a0 limitedToAssetTypes:(id)a1 error:(id *)a2;
+ (id)lockedAssetSummary:(char)a0 error:(id *)a1;
+ (id)lockedAssetSummary:(char)a0 limitedToAssetTypes:(id)a1 error:(id *)a2;
+ (id)pushNotificationHistory:(char)a0 error:(id *)a1;
+ (id)scheduledJobSummary:(char)a0 error:(id *)a1;
+ (id)scheduledJobSummary:(char)a0 limitedToAssetTypes:(id)a1 error:(id *)a2;
+ (long long)simulateCacheDeleteReclaimSpace:(id)a0 withUrgency:(int)a1 targetingPurgeAmount:(long long)a2 error:(id *)a3;
+ (id)simulateSetJobOperation:(long long)a0 withEndEvent:(long long)a1 forSelector:(id)a2;
+ (id)stagedAssetSummary:(char)a0 error:(id *)a1;
+ (id)stagedAssetSummary:(char)a0 limitedToAssetTypes:(id)a1 error:(id *)a2;

- (id)init;
- (void).cxx_destruct;
- (void)handleMessage:(id)a0 reply:(id /* block */)a1;
- (void)_activeJobSummary:(char)a0 limitedToAssetTypes:(id)a1 isSynchronous:(char)a2 completion:(id /* block */)a3;
- (void)_availableForStagingAssetSummaryIsSynchronous:(char)a0 completion:(id /* block */)a1;
- (void)_controlStatistics:(char)a0 isSynchronous:(char)a1 completion:(id /* block */)a2;
- (void)_failedControl:(id)a0 withErrorCode:(long long)a1 withResponseError:(id)a2 description:(id)a3 isSynchronous:(char)a4 completion:(id /* block */)a5;
- (void)_failedControlLockSummary:(id)a0 withErrorCode:(long long)a1 withResponseError:(id)a2 description:(id)a3 isSynchronous:(char)a4 completion:(id /* block */)a5;
- (void)_failedControlStatistics:(id)a0 withErrorCode:(long long)a1 withResponseError:(id)a2 description:(id)a3 isSynchronous:(char)a4 completion:(id /* block */)a5;
- (void)_failedControlSummary:(id)a0 withErrorCode:(long long)a1 withResponseError:(id)a2 description:(id)a3 isSynchronous:(char)a4 completion:(id /* block */)a5;
- (void)_failedSimulateCacheDeleteOperation:(id)a0 withErrorCode:(long long)a1 withResponseError:(id)a2 description:(id)a3 isSynchronous:(char)a4 completion:(id /* block */)a5;
- (void)_forceGlobalAbandon:(id)a0 isSynchronous:(char)a1 completion:(id /* block */)a2;
- (void)_forceGlobalForget:(id)a0 isSynchronous:(char)a1 completion:(id /* block */)a2;
- (void)_forceGlobalPurge:(id)a0 forcingUnlock:(char)a1 isSynchronous:(char)a2 completion:(id /* block */)a3;
- (void)_forceGlobalUnlock:(id)a0 isSynchronous:(char)a1 completion:(id /* block */)a2;
- (void)_knownAssetSummary:(char)a0 limitedToAssetTypes:(id)a1 isSynchronous:(char)a2 completion:(id /* block */)a3;
- (void)_lockedAssetSummary:(char)a0 limitedToAssetTypes:(id)a1 isSynchronous:(char)a2 completion:(id /* block */)a3;
- (void)_scheduledJobSummary:(char)a0 limitedToAssetTypes:(id)a1 isSynchronous:(char)a2 completion:(id /* block */)a3;
- (void)_simulateCacheDeleteDetermineReclaimableSpace:(id)a0 withUrgency:(int)a1 error:(id *)a2 isSynchronous:(char)a3 completion:(id /* block */)a4;
- (void)_simulateCacheDeleteReclaimSpace:(id)a0 withUrgency:(int)a1 targetingPurgeAmount:(long long)a2 isSynchronous:(char)a3 completion:(id /* block */)a4;
- (void)_simulateSetJobOperation:(long long)a0 withEndEvent:(long long)a1 forSelector:(id)a2 isSynchronous:(char)a3 completion:(id /* block */)a4;
- (void)_stagedAssetSummary:(char)a0 limitedToAssetTypes:(id)a1 isSynchronous:(char)a2 completion:(id /* block */)a3;
- (void)_successControl:(id)a0 isSynchronous:(char)a1 completion:(id /* block */)a2;
- (void)_successControlLockSummary:(id)a0 withLockSummaryEntries:(id)a1 isSynchronous:(char)a2 completion:(id /* block */)a3;
- (void)_successControlStatistics:(id)a0 withControlStatistics:(id)a1 isSynchronous:(char)a2 completion:(id /* block */)a3;
- (void)_successControlSummary:(id)a0 withJobSummaryEntries:(id)a1 isSynchronous:(char)a2 completion:(id /* block */)a3;
- (void)_successSimulateCacheDeleteOperation:(id)a0 withReclaimableSpace:(long long)a1 isSynchronous:(char)a2 completion:(id /* block */)a3;
- (void)connectToServerFrameworkCompletion:(id /* block */)a0;
- (void)connectionClosed;
- (void)handleResponse:(id)a0 error:(id)a1;

@end
