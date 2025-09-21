@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface MCMTestLocks : NSObject {
    long long _lockCount[15];
    NSObject<OS_dispatch_queue> *_lockQueue[15];
    NSObject<OS_dispatch_semaphore> *_lockSemaphore[15];
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (nonatomic) BOOL enabled;

+ (id)sharedInstance;

- (void)_stateQueue_releaseLock:(unsigned long long)a0;
- (void)releaseAllLocks;
- (void)_stateQueue_acquireLock:(unsigned long long)a0;
- (id)init;
- (long long)countOfLock:(unsigned long long)a0;
- (void)_stateQueue_updateCountForLock:(unsigned long long)a0 byCount:(long long)a1;
- (void)acquireLock:(unsigned long long)a0;
- (void)waitOnLock:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)releaseLock:(unsigned long long)a0;

@end
