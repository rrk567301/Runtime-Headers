@class NSMutableDictionary, SUCoreLog, MADAutoAssetPersisted, NSObject;
@protocol OS_dispatch_queue;

@interface MADAutoAssetLocker : NSObject

@property (readonly, retain, nonatomic) SUCoreLog *logger;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *lockerQueue;
@property (readonly, retain, nonatomic) MADAutoAssetPersisted *persistedState;
@property (retain, nonatomic) NSMutableDictionary *eliminateSelectors;

+ (void)forceGlobalUnlock:(id)a0;
+ (id)newCurrentLockUsageForSelector:(id)a0;
+ (id)autoAssetLocker;
+ (void)addClientLockReasons:(id)a0 basedOnControl:(id)a1;
+ (BOOL)continuedLockByClient:(id)a0 forAssetSelector:(id)a1 forLockReason:(id)a2 withUsagePolicy:(id)a3 continueError:(id *)a4;
+ (BOOL)continuedSetLockByClient:(id)a0 forSetDescriptor:(id)a1 forLockReason:(id)a2 withSetUsagePolicy:(id)a3 continueError:(id *)a4;
+ (id)copyOfLocksBySelector;
+ (id)copyOfSetLocksByDescriptor;
+ (id)currentSetLockUsageEliminatingOtherThanSetAtomicInstances:(id)a0;
+ (id)eliminateAllPreviousSetLocksByClient:(id)a0 forSetDescriptor:(id)a1;
+ (id)eliminateAllPreviousSetLocksNoLongerTracked:(id)a0;
+ (BOOL)endedAllPreviousLocksByClient:(id)a0 forAssetSelector:(id)a1 forLockReason:(id)a2 endError:(id *)a3;
+ (BOOL)endedAllPreviousSetLocksByClient:(id)a0 forSetDescriptor:(id)a1 forLockReason:(id)a2 endError:(id *)a3;
+ (BOOL)endedLockByClient:(id)a0 forAssetSelector:(id)a1 forLockReason:(id)a2 endError:(id *)a3;
+ (BOOL)endedPreviousLocksByClient:(id)a0 forAssetSelector:(id)a1 forLockReason:(id)a2 removingLockCount:(long long)a3 endError:(id *)a4;
+ (BOOL)endedPreviousSetLocksByClient:(id)a0 forSetDescriptor:(id)a1 forLockReason:(id)a2 removingLockCount:(long long)a3 endError:(id *)a4;
+ (BOOL)lockedByClient:(id)a0 forAssetSelector:(id)a1 forLockReason:(id)a2 withUsagePolicy:(id)a3 withLocalContentURL:(id)a4 withAssetAttributes:(id)a5 lockError:(id *)a6;
+ (id)lockedSelectorsForEliminate:(id)a0;
+ (BOOL)lockedSetByClient:(id)a0 lockingSetDescriptor:(id)a1 forLockReason:(id)a2 withSetUsagePolicy:(id)a3 lockError:(id *)a4;
+ (id)migrateMismatchedPersistedStateVersion:(id)a0 forEntryID:(id)a1 withMismatchedState:(id)a2;
+ (id)newCurrentSetLockUsageForDescriptor:(id)a0;
+ (long long)persistedLocksCount;
+ (void)resumeFromPersistedWithDownloadedSelectors:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)summary;
- (void)_logPersistedRemovedEntry:(id)a0 removedAssetLock:(id)a1 forSelector:(id)a2 message:(id)a3;
- (id)_assetIDOfLock:(id)a0;
- (id)_endAllSetLocksNoLongerTracked:(id)a0;
- (BOOL)_anyCurrentLocksForEliminate:(id)a0;
- (id)_continuedLockByClient:(id)a0 forClientDomainName:(id)a1 forAssetSetIdentifier:(id)a2 forAssetSelector:(id)a3 forSetAtomicInstance:(id)a4 forLockReason:(id)a5 withUsagePolicy:(id)a6;
- (long long)_currentLockCountOfLock:(id)a0;
- (id)_endAllSetLocksByClient:(id)a0 forSetDescriptor:(id)a1;
- (BOOL)_endLockDecideUnlocked:(id)a0;
- (BOOL)_endLocksByClient:(id)a0 forAllClientNames:(BOOL)a1 forClientDomainName:(id)a2 forAssetSetIdentifier:(id)a3 forAssetSelector:(id)a4 forSetAtomicInstance:(id)a5 forLockReason:(id)a6 removingLockCount:(long long)a7 endError:(id *)a8;
- (id)_endedLockByClient:(id)a0 forClientDomainName:(id)a1 forAssetSetIdentifier:(id)a2 forAssetSelector:(id)a3 forSetAtomicInstance:(id)a4 forLockReason:(id)a5;
- (BOOL)_isUntrackedSetAssetLock:(id)a0 forTrackedSetDescriptors:(id)a1;
- (id)_lockAutoAssetByClient:(id)a0 forClientDomainName:(id)a1 forAssetSetIdentifier:(id)a2 forAssetSelector:(id)a3 forSetAtomicInstance:(id)a4 forLockReason:(id)a5 withUsagePolicy:(id)a6 withLocalContentURL:(id)a7 withAssetAttributes:(id)a8;
- (void)_logPersistedEntry:(id)a0 operation:(id)a1 persistingAssetLock:(id)a2 forSelector:(id)a3 message:(id)a4;
- (void)_logPersistedTableOfContents:(id)a0;
- (void)_mergeAddedLock:(id)a0 intoExistingLock:(id)a1;
- (void)_mergeContinuedLock:(id)a0 intoExistingLock:(id)a1;
- (id)_newAssetLockSummaryWithoutSelectorOrAttributes:(id)a0;
- (BOOL)_persistAssetLock:(id)a0 operation:(id)a1 forAssetLock:(id)a2 message:(id)a3;
- (void)_persistRemoveAssetLock:(id)a0 removedAssetLock:(id)a1 message:(id)a2;
- (id)_refreshFilesystemMetadataLastInterest:(id)a0;
- (void)_removeAssetLock:(id)a0 lastClient:(id)a1 forSelector:(id)a2 message:(id)a3;
- (id)_setClientDomainNameForAssetLock:(id)a0;
- (id)atomicInstanceUUIDForLockTracker:(id)a0;
- (BOOL)isAssetLockSetAtomicInstanceLock:(id)a0;
- (id)locateLockBySelector:(id)a0;
- (long long)locateLocksCurrentLocksCount;
- (id)locateLocksNewAllBySelector;
- (id)newSetClientNameForDomain:(id)a0 withAutoAssetClientName:(id)a1 forSetAtomicInstance:(id)a2;
- (id)setAtomicInstanceForUUID:(id)a0 fromSetAtomicInstances:(id)a1;

@end
