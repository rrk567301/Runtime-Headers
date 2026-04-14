@class CNUnfairLock, NSObject;
@protocol OS_dispatch_semaphore;

@interface CNCountdownLatch : NSObject {
    unsigned long long _count;
    CNUnfairLock *_lock;
    NSObject<OS_dispatch_semaphore> *_latchedSemaphore;
}

- (void).cxx_destruct;
- (id)init;
- (id)description;
- (void)await;
- (BOOL)awaitImmediate;
- (BOOL)awaitOnSemaphoreWithTimeout:(double)a0;
- (BOOL)awaitWhileSpinningRunloopWithTimeout:(double)a0;
- (BOOL)awaitWithTimeout:(double)a0;
- (BOOL)awaitWithTimeout:(double)a0 strategy:(unsigned long long)a1;
- (void)countDown;
- (BOOL)hasLatched;
- (id)initWithStartingCount:(unsigned long long)a0;

@end
