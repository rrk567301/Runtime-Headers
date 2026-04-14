@class NSMutableDictionary, SUCoreLog, MADAutoAssetPersisted, NSObject;
@protocol OS_dispatch_queue;

@interface MADAutoAssetLocker : NSObject

@property (readonly, retain, nonatomic) SUCoreLog *logger;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *lockerQueue;
@property (readonly, retain, nonatomic) MADAutoAssetPersisted *persistedState;
@property (retain, nonatomic) NSMutableDictionary *locksBySelector;
@property (retain, nonatomic) NSMutableDictionary *eliminateSelectors;

+ (void)forceGlobalUnlock:(id)a0;
+ (id)migrateMismatchedPersistedStateVersion:(id)a0 forEntryID:(id)a1 withMismatchedState:(id)a2;
+ (id)autoAssetLocker;
+ (BOOL)lockedByClient:(id)a0 forAssetSelector:(id)a1 forLockReason:(id)a2 withUsagePolicy:(id)a3 withLocalContentURL:(id)a4 withAssetAttributes:(id)a5 lockError:(id *)a6;
+ (BOOL)additionalLockedByClient:(id)a0 forAssetSelector:(id)a1 forLockReason:(id)a2 withUsagePolicy:(id)a3 lockError:(id *)a4;
+ (BOOL)continuedLockByClient:(id)a0 forAssetSelector:(id)a1 forLockReason:(id)a2 withUsagePolicy:(id)a3 continueError:(id *)a4;
+ (BOOL)endedLockByClient:(id)a0 forAssetSelector:(id)a1 forLockReason:(id)a2 endError:(id *)a3;
+ (BOOL)endedPreviousLocksByClient:(id)a0 forAssetSelector:(id)a1 forLockReason:(id)a2 removingLockCount:(long long)a3 endError:(id *)a4;
+ (BOOL)endedAllPreviousLocksByClient:(id)a0 forAssetSelector:(id)a1 forLockReason:(id)a2 endError:(id *)a3;
+ (id)copyOfLocksBySelector;
+ (id)lockedSelectorsForEliminate:(id)a0;
+ (void)resumeFromPersistedWithDownloadedSelectors:(id)a0;
+ (void)addClientLockReasons:(id)a0 basedOnControl:(id)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)summary;
- (BOOL)_endLocksByClient:(id)a0 forAssetSelector:(id)a1 forLockReason:(id)a2 removingLockCount:(long long)a3 endError:(id *)a4;
- (void)_removeAssetLock:(id)a0 forSelector:(id)a1;
- (BOOL)_persistAssetLock:(id)a0;
- (void)_persistRemoveAssetLock:(id)a0;
- (void)_mergeAddedLock:(id)a0 intoExistingLock:(id)a1;
- (void)_mergeContinuedLock:(id)a0 intoExistingLock:(id)a1;
- (BOOL)_endLockDecideUnlocked:(id)a0;
- (id)_refreshFilesystemMetadataLastInterest:(id)a0;
- (BOOL)_anyCurrentLocksForEliminate:(id)a0;

@end
