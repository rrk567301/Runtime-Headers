@class MSVTimer;

@interface MSVBlockGuard : NSObject {
    MSVTimer *_timeoutTimer;
    id /* block */ _interruptionHandler;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned char _disarmed : 1;
    unsigned char _didTimeout : 1;
}

- (BOOL)disarm;
- (void)_interruptWithReason:(long long)a0;
- (void)dealloc;
- (id)initWithTimeout:(double)a0 interruptionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithTimeout:(double)a0;
- (id)initWithDeallocHandler:(id /* block */)a0;
- (id)init;

@end
