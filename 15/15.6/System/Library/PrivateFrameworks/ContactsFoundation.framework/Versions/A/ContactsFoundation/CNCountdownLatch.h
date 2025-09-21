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
- (void)await;
- (char)awaitImmediate;
- (char)awaitOnSemaphoreWithTimeout:(double)a0;
- (char)awaitWhileSpinningRunloopWithTimeout:(double)a0;
- (char)awaitWithTimeout:(double)a0;
- (char)awaitWithTimeout:(double)a0 strategy:(unsigned long long)a1;
- (void)countDown;
- (char)hasLatched;
- (id)initWithStartingCount:(unsigned long long)a0;

@end
