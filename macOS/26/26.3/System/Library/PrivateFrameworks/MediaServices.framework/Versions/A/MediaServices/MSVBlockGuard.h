@class MSVTimer;

@interface MSVBlockGuard : NSObject {
    MSVTimer *_timeoutTimer;
    id /* block */ _interruptionHandler;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned char _disarmed : 1;
    unsigned char _didTimeout : 1;
}

- (id)initWithDeallocHandler:(id /* block */)a0;
- (BOOL)disarm;
- (id)init;
- (id)initWithTimeout:(double)a0 interruptionHandler:(id /* block */)a1;
- (void)_interruptWithReason:(long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTimeout:(double)a0;

@end
