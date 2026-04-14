@class NSMutableDictionary, SUCoreLog, MADAutoAssetPersisted, NSObject;
@protocol OS_dispatch_queue;

@interface MADAutoSetLocker : NSObject

@property (readonly, retain, nonatomic) SUCoreLog *logger;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *lockerQueue;
@property (readonly, retain, nonatomic) MADAutoAssetPersisted *persistedState;
@property (retain, nonatomic) NSMutableDictionary *locksBySelector;
@property (retain, nonatomic) NSMutableDictionary *eliminateSelectors;

+ (void)forceGlobalUnlock:(id)a0;
+ (id)autoAssetLocker;
+ (id)newCurrentLockUsageForSelector:(id)a0;
+ (void)addClientLockReasons:(id)a0 basedOnControl:(id)a1;
+ (BOOL)additionalLockedByClient:(id)a0 forAssetSelector:(id)a1 forLockReason:(id)a2 withUsagePolicy:(id)a3 lockError:(id *)a4;
+ (BOOL)continuedLockByClient:(id)a0 forAssetSelector:(id)a1 forLockReason:(id)a2 withUsagePolicy:(id)a3 continueError:(id *)a4;
+ (id)copyOfLocksBySelector;
+ (BOOL)endedAllPreviousLocksByClient:(id)a0 forAssetSelector:(id)a1 forLockReason:(id)a2 endError:(id *)a3;
+ (BOOL)endedLockByClient:(id)a0 forAssetSelector:(id)a1 forLockReason:(id)a2 endError:(id *)a3;
+ (BOOL)endedPreviousLocksByClient:(id)a0 forAssetSelector:(id)a1 forLockReason:(id)a2 removingLockCount:(long long)a3 endError:(id *)a4;
+ (BOOL)lockedByClient:(id)a0 forAssetSetIdentifier:(id)a1 forAtomicInstance:(id)a2 forLockReason:(id)a3 withUsagePolicy:(id)a4 lockError:(id *)a5;
+ (id)lockedSelectorsForEliminate:(id)a0;
+ (id)migrateMismatchedPersistedStateVersion:(id)a0 forEntryID:(id)a1 withMismatchedState:(id)a2;
+ (void)resumeFromPersistedWithDownloadedSelectors:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)summary;
- (void)_logPersistedRemovedEntry:(id)a0 removedAssetLock:(id)a1 forSelector:(id)a2 message:(id)a3;
- (id)_assetIDOfLock:(id)a0;
- (BOOL)_anyCurrentLocksForEliminate:(id)a0;
- (long long)_currentLockCountOfLock:(id)a0;
- (BOOL)_endLockDecideUnlocked:(id)a0;
- (BOOL)_endLocksByClient:(id)a0 forAssetSelector:(id)a1 forLockReason:(id)a2 removingLockCount:(long long)a3 endError:(id *)a4;
- (void)_logPersistedEntry:(id)a0 operation:(id)a1 persistingAssetLock:(id)a2 forSelector:(id)a3 message:(id)a4;
- (void)_logPersistedTableOfContents:(id)a0;
- (void)_mergeAddedLock:(id)a0 intoExistingLock:(id)a1;
- (void)_mergeContinuedLock:(id)a0 intoExistingLock:(id)a1;
- (id)_newAssetLockSummaryWithoutSelectorOrAttributes:(id)a0;
- (BOOL)_persistAssetLock:(id)a0 operation:(id)a1 forAssetLock:(id)a2 message:(id)a3;
- (void)_persistRemoveAssetLock:(id)a0 removedAssetLock:(id)a1 message:(id)a2;
- (id)_refreshFilesystemMetadataLastInterest:(id)a0;
- (void)_removeAssetLock:(id)a0 lastClient:(id)a1 forSelector:(id)a2 message:(id)a3;

@end
