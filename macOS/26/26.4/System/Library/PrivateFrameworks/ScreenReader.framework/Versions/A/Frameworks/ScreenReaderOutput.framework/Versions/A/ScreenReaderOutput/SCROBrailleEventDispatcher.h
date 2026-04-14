@class NSLock, NSMutableArray;
@protocol SCROBrailleEventDispatcherDelegate;

@interface SCROBrailleEventDispatcher : NSObject {
    NSLock *_queueLock;
    struct __CFRunLoop { } *_runLoop;
    struct __CFRunLoopSource { } *_queueSource;
    NSMutableArray *_queue;
    NSMutableArray *_brailleEventQueue;
    id<SCROBrailleEventDispatcherDelegate> _target;
    BOOL _isValid;
}

- (id)initWithTarget:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)invalidate;
- (void)start;
- (void)dealloc;
- (void)enqueueEvent:(id)a0;
- (void)_processQueue;

@end
