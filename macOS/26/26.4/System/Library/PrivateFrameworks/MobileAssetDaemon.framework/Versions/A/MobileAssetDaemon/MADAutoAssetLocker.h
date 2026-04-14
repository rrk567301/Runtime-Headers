@class MADAutoAssetPersisted, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MADAutoAssetLocker : NSObject

@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *lockerQueue;
@property (readonly, retain, nonatomic) MADAutoAssetPersisted *persistedState;
@property (retain, nonatomic) NSMutableDictionary *eliminateSelectors;
@property (retain, nonatomic) NSMutableDictionary *lockCountsBySelector;
@property (nonatomic) long long lockCountsTotal;

+ (id)migrateMismatchedPersistedStateVersion:(id)a0 forEntryID:(id)a1 withMismatchedState:(id)a2;
+ (id)copyOfLockCountsBySelector;
+ (id)copyOfLocksBySelector;
+ (BOOL)endedLockByClient:(id)a0 forAssetSelector:(id)a1 forLockReason:(id)a2 endError:(id *)a3;
+ (void)eliminateAllPreviousSetLocksByClient:(id)a0 forSetDescriptor:(id)a1;
+ (BOOL)lockedByClient:(id)a0 forClientProcessName:(id)a1 withClientProcessID:(long long)a2 forAssetSelector:(id)a3 forLockReason:(id)a4 withUsagePolicy:(id)a5 withLocalContentURL:(id)a6 withAssetAttributes:(id)a7 lockError:(id *)a8;
+ (BOOL)continuedLockByClient:(id)a0 forAssetSelector:(id)a1 forLockReason:(id)a2 withUsagePolicy:(id)a3 continueError:(id *)a4;
+ (void)setPersistedStateCaching:(BOOL)a0;
+ (void)resumeFromPersistedWithDownloadedSelectors:(id)a0;
+ (BOOL)endedPreviousLocksByClient:(id)a0 forAssetSelector:(id)a1 forLockReason:(id)a2 removingLockCount:(long long)a3 endError:(id *)a4;
+ (BOOL)endedPreviousSetLocksByClient:(id)a0 forSetDescriptor:(id)a1 forLockReason:(id)a2 removingLockCount:(long long)a3 endError:(id *)a4;
+ (id)newCurrentLockUsageForSelector:(id)a0;
+ (BOOL)lockedSetByClient:(id)a0 forClientProcessName:(id)a1 withClientProcessID:(long long)a2 lockingSetDescriptor:(id)a3 forLockReason:(id)a4 withSetUsagePolicy:(id)a5 lockError:(id *)a6;
+ (id)currentSetLockUsageEliminatingOtherThanSetAtomicInstances:(id)a0;
+ (id)lockedSelectorsForEliminate:(id)a0;
+ (long long)persistedLocksCount;
+ (id)newSetClientNameForDomain:(id)a0 withAutoAssetClientName:(id)a1 forSetAtomicInstance:(id)a2;
+ (id)eliminateAllPreviousSetLocksNoLongerTracked:(id)a0;
+ (BOOL)endedAllPreviousLocksByClient:(id)a0 forAssetSelector:(id)a1 forLockReason:(id)a2 endError:(id *)a3;
+ (void)addClientLockReasons:(id)a0 basedOnControl:(id)a1;
+ (void)forceGlobalUnlock:(id)a0 atomicInstancesHandle:(id *)a1;
+ (void)eliminateSetEndAllLocks:(id)a0 forClientDomainName:(id)a1 forAssetSetIdentifier:(id)a2;
+ (id)autoAssetLocker;
+ (BOOL)continuedSetLockByClient:(id)a0 forSetDescriptor:(id)a1 forLockReason:(id)a2 withSetUsagePolicy:(id)a3 continueError:(id *)a4;

- (void)_removeAssetLock:(id)a0 removingAssetLock:(id)a1 lastClient:(id)a2 forSelector:(id)a3 message:(id)a4;
- (id)_setClientDomainNameForAssetLock:(id)a0;
- (id)_endAllSetLocks:(id)a0 forClientDomainName:(id)a1 forAssetSetIdentifier:(id)a2;
- (BOOL)_isSetAssetLock:(id)a0 forClientDomainName:(id)a1 forAssetSetIdentifier:(id)a2;
- (BOOL)_endLockDecideUnlocked:(id)a0;
- (BOOL)isAssetLockSetAtomicInstanceLock:(id)a0;
- (id)_newAssetLockSummaryWithoutSelectorOrAttributes:(id)a0;
- (void)_persistRemoveAssetLock:(id)a0 removedAssetLock:(id)a1 message:(id)a2;
- (id)_continuedLockByClient:(id)a0 forClientDomainName:(id)a1 forAssetSetIdentifier:(id)a2 forAssetSelector:(id)a3 forSetAtomicInstance:(id)a4 forLockReason:(id)a5 withUsagePolicy:(id)a6;
- (id)_assetIDOfLock:(id)a0;
- (BOOL)_endLocksByClient:(id)a0 forAssetClientName:(id)a1 forAllClientNames:(BOOL)a2 forClientProcessName:(id)a3 withClientProcessID:(long long)a4 forClientDomainName:(id)a5 forAssetSelector:(id)a6 forSetAtomicInstance:(id)a7 forLockReason:(id)a8 removingLockCount:(long long)a9 endError:(id *)a10;
- (BOOL)_isUntrackedSetAssetLock:(id)a0 forTrackedSetDescriptors:(id)a1;
- (BOOL)_persistAssetLock:(id)a0 operation:(id)a1 forAssetLock:(id)a2 withDeltaLockCount:(long long)a3 message:(id)a4;
- (void)_endAllSetLocksByClient:(id)a0 forSetDescriptor:(id)a1;
- (id)locateLocksNewAllBySelector;
- (id)atomicInstanceUUIDForLockTracker:(id)a0;
- (id)locateLockByFullAssetSelector:(id)a0;
- (void)_mergeContinuedLock:(id)a0 intoExistingLock:(id)a1;
- (id)_autoAssetLockPolicyFromSetPolicy:(id)a0;
- (void)_mergeAddedLock:(id)a0 intoExistingLock:(id)a1;
- (void)trackPerformanceIteration:(id)a0 ofContainer:(id)a1;
- (void).cxx_destruct;
- (id)newSetClientNameForDomain:(id)a0 withAutoAssetClientName:(id)a1 forSetAtomicInstance:(id)a2;
- (id)_lockAutoAssetByClient:(id)a0 forClientProcessName:(id)a1 withClientProcessID:(long long)a2 forClientDomainName:(id)a3 forAssetSelector:(id)a4 forSetAtomicInstance:(id)a5 forLockReason:(id)a6 withDeltaLockCount:(long long)a7 withUsagePolicy:(id)a8 withLocalContentURL:(id)a9 withAssetAttributes:(id)a10;
- (void)_logPersistedRemovedEntry:(id)a0 removedAssetLock:(id)a1 forSelector:(id)a2 message:(id)a3;
- (void)trackPerformanceIteration:(id)a0 ofContainer:(id)a1 forSelector:(id)a2;
- (id)_refreshFilesystemMetadataLastInterest:(id)a0;
- (id)init;
- (id)summary;
- (void)_logPersistedEntry:(id)a0 operation:(id)a1 persistingAssetLock:(id)a2 forSelector:(id)a3 message:(id)a4;
- (id)_locateLockByPersistentEntryID:(id)a0;
- (void)_logPersistedTableOfContents:(id)a0;
- (id)_endAllSetLocksNoLongerTracked:(id)a0;
- (id)description;
- (BOOL)_anyCurrentLocksForEliminate:(id)a0;
- (long long)_currentLockCountOfLock:(id)a0;
- (id)_endedLockByClient:(id)a0 forClientDomainName:(id)a1 forAssetSetIdentifier:(id)a2 forAssetSelector:(id)a3 forSetAtomicInstance:(id)a4 forLockReason:(id)a5;
- (id)locateLocksBySelector:(id)a0;
- (void)addToLockCountsBySelector:(id)a0 addingAssetLock:(id)a1;

@end
