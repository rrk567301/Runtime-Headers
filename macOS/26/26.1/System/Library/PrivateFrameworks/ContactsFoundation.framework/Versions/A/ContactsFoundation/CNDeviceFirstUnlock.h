@class NSMutableDictionary, CNFuture, NSOperationQueue, CNUnfairLock;

@interface CNDeviceFirstUnlock : NSObject

@property (retain, nonatomic) CNUnfairLock *handlersLock;
@property (retain, nonatomic) NSMutableDictionary *unlockHandlers;
@property (retain, nonatomic) NSOperationQueue *workQueue;
@property (retain, nonatomic) CNFuture *firstUnlockFuture;
@property (readonly, nonatomic) BOOL isUnlockedSinceBoot;

+ (id)sharedInstance;

- (long long)countOfUnlockHandlers;
- (void)withHandlersLock_registerForDeviceFirstUnlock;
- (void)withHandlersLock_addHandlerWithIdentifier:(id)a0 block:(id /* block */)a1;
- (void)dealloc;
- (void)removeUnlockHandlerWithIdentifier:(id)a0;
- (void)addUnlockHandlerWithIdentifier:(id)a0 block:(id /* block */)a1;
- (void).cxx_destruct;
- (void)withHandlersLock_cancelExistingOperationWithIdentifier:(id)a0;
- (void)waitForAllOperationsToFinish;
- (id)init;

@end
