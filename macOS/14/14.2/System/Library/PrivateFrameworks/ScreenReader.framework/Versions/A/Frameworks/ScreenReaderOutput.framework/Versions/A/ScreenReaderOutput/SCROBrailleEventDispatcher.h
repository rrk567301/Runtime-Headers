@class NSLock, NSMutableArray;

@interface SCROBrailleEventDispatcher : NSObject {
    NSLock *_queueLock;
    struct __CFRunLoop { } *_runLoop;
    struct __CFRunLoopSource { } *_queueSource;
    NSMutableArray *_queue;
    NSMutableArray *_brailleEventQueue;
    id _target;
    BOOL _isValid;
}

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isValid;
- (void)invalidate;
- (void)start;
- (id)initWithTarget:(id)a0;
- (void)enqueueEvent:(id)a0;
- (void)_processQueue;

@end
