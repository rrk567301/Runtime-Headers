@class NSMutableDictionary, CNFuture, NSOperationQueue, CNUnfairLock;

@interface CNDeviceFirstUnlock : NSObject

@property (retain, nonatomic) CNUnfairLock *handlersLock;
@property (retain, nonatomic) NSMutableDictionary *unlockHandlers;
@property (retain, nonatomic) NSOperationQueue *workQueue;
@property (retain, nonatomic) CNFuture *firstUnlockFuture;
@property (readonly, nonatomic) BOOL isUnlockedSinceBoot;

+ (id)sharedInstance;

- (void)withHandlersLock_registerForDeviceFirstUnlock;
- (void)waitForAllOperationsToFinish;
- (void)removeUnlockHandlerWithIdentifier:(id)a0;
- (void)withHandlersLock_cancelExistingOperationWithIdentifier:(id)a0;
- (long long)countOfUnlockHandlers;
- (void)addUnlockHandlerWithIdentifier:(id)a0 block:(id /* block */)a1;
- (void).cxx_destruct;
- (void)withHandlersLock_addHandlerWithIdentifier:(id)a0 block:(id /* block */)a1;
- (id)init;
- (void)dealloc;

@end
