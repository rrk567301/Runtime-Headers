@class MSVTimer;

@interface MSVBlockGuard : NSObject {
    MSVTimer *_timeoutTimer;
    id /* block */ _interruptionHandler;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned char _disarmed : 1;
    unsigned char _didTimeout : 1;
}

- (void)dealloc;
- (void)_interruptWithReason:(long long)a0;
- (id)init;
- (id)initWithDeallocHandler:(id /* block */)a0;
- (id)initWithTimeout:(double)a0 interruptionHandler:(id /* block */)a1;
- (BOOL)disarm;
- (id)initWithTimeout:(double)a0;
- (void).cxx_destruct;

@end
