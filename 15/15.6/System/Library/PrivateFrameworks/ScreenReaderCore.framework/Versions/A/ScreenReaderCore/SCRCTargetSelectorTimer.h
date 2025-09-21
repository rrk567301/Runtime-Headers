@class NSLock;

@interface SCRCTargetSelectorTimer : SCRCTargetSelector {
    struct __CFRunLoopTimer { } *_timer;
    id _key;
    char _isCanceled;
    char _isPending;
    id _object;
    NSLock *_lock;
    char _createdTimer;
    id /* block */ _block;
}

+ (void)initialize;
+ (void)_assignThreadPriority;
+ (void)_runThread;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)cancel;
- (char)isCancelled;
- (id)initWithTarget:(id)a0 selector:(SEL)a1;
- (char)isPending;
- (char)isCanceled;
- (void)_runTimerBlock:(id /* block */)a0;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 thread:(id)a2;
- (char)_createdTimer;
- (void)_dispatch;
- (void)_dispatchMainThread;
- (void)_dispatchSCRCThread;
- (void)_dispatchThreadHelper:(id /* block */)a0;
- (id)_initWithTarget:(id)a0 selector:(SEL)a1 threadKeyOrThread:(id)a2;
- (void)dispatchAfterDelay:(double)a0;
- (void)dispatchAfterDelay:(double)a0 withBlock:(id /* block */)a1;
- (void)dispatchAfterDelay:(double)a0 withObject:(id)a1;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 threadKey:(id)a2;
- (id)threadKey;

@end
