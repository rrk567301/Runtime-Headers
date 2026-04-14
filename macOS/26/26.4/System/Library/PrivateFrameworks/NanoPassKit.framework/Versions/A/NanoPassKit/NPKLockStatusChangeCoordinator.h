@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, NPKLockStatusChangeCoordinatorDelegate;

@interface NPKLockStatusChangeCoordinator : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableArray *blocksToPerformAfterDeviceUnlock;
@property (retain, nonatomic) NSMutableArray *blocksToPerformAfterDeviceLock;
@property (nonatomic) int notifyLockStatesToken;
@property (readonly, nonatomic) NSString *reason;
@property (weak, nonatomic) id<NPKLockStatusChangeCoordinatorDelegate> delegate;
@property BOOL wipeBlocksAfterPerform;

+ (id)descriptionOfLockStatusChangeEvent:(unsigned long long)a0;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (int)_lockState;
- (void)_handleLockStateChange;
- (BOOL)_hasLockBlocksToPerform;
- (BOOL)_hasUnlockBlocksToPerform;
- (BOOL)_isLockedForLockState:(int)a0;
- (BOOL)_isUnlockedForLockState:(int)a0;
- (void)_performLockWork;
- (void)_performUnlockWork;
- (void)_performWorkForEvent:(unsigned long long)a0 withBlocks:(id)a1;
- (void)_registerForLockStatusChanges;
- (BOOL)hasBlocksToPerform;
- (id)initWithQueue:(id)a0 reason:(id)a1;
- (void)performBlocksIfPossible;
- (void)performSubjectToEvent:(unsigned long long)a0 blockToPerform:(id /* block */)a1;

@end
