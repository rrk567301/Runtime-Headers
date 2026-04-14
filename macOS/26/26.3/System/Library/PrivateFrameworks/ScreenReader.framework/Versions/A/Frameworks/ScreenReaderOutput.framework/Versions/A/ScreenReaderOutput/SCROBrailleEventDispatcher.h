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

- (void)invalidate;
- (id)initWithTarget:(id)a0;
- (void)start;
- (void)enqueueEvent:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isValid;
- (void)_processQueue;

@end
