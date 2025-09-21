@class NSThread;

@interface ThreadedInvocationTrampoline : InvocationTrampoline {
    NSThread *_thread;
    char _immediateForMatchingThread;
}

- (void)dealloc;
- (void)forwardInvocation:(id)a0;
- (id)initWithTarget:(id)a0 thread:(id)a1 immediateForMatchingThread:(char)a2;

@end
