@class CNUnfairLock, NSObject;
@protocol OS_dispatch_semaphore;

@interface CNCountdownLatch : NSObject {
    unsigned long long _count;
    CNUnfairLock *_lock;
    NSObject<OS_dispatch_semaphore> *_latchedSemaphore;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithStartingCount:(unsigned long long)a0;
- (void)countDown;
- (void)await;
- (BOOL)awaitWithTimeout:(double)a0;
- (BOOL)awaitWithTimeout:(double)a0 strategy:(unsigned long long)a1;
- (BOOL)awaitImmediate;
- (BOOL)hasLatched;
- (BOOL)awaitOnSemaphoreWithTimeout:(double)a0;
- (BOOL)awaitWhileSpinningRunloopWithTimeout:(double)a0;

@end
