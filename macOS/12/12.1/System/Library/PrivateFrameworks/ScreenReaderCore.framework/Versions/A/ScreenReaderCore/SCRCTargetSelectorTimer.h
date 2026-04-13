@class NSLock;

@interface SCRCTargetSelectorTimer : SCRCTargetSelector {
    struct __CFRunLoopTimer { } *_timer;
    id _key;
    BOOL _isCanceled;
    BOOL _isPending;
    id _object;
    NSLock *_lock;
    BOOL _createdTimer;
    id /* block */ _block;
}

+ (void)initialize;
+ (void)_runThread;
+ (void)_assignThreadPriority;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)isCancelled;
- (id)initWithTarget:(id)a0 selector:(SEL)a1;
- (BOOL)isPending;
- (BOOL)isCanceled;
- (BOOL)_createdTimer;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 threadKey:(id)a2;
- (void)dispatchAfterDelay:(double)a0;
- (void)dispatchAfterDelay:(double)a0 withObject:(id)a1;
- (id)_initWithTarget:(id)a0 selector:(SEL)a1 threadKeyOrThread:(id)a2;
- (void)_dispatchThreadHelper:(id /* block */)a0;
- (void)_runTimerBlock:(id /* block */)a0;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 thread:(id)a2;
- (void)dispatchAfterDelay:(double)a0 withBlock:(id /* block */)a1;
- (id)threadKey;
- (void)_dispatch;
- (void)_dispatchMainThread;
- (void)_dispatchSCRCThread;

@end
