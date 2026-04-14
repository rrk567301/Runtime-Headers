@class IMKInputSessionInvocationSentinel, IMKInputSession;

@interface IMKInputSessionXPCInvocation : NSObject {
    BOOL _request_reply_done;
    BOOL _timedOut;
    BOOL _invocationInterruptAttempted;
    BOOL _otherInnerRunLoopDetected;
    long long _innerRunLoopCount;
    SEL _callerSelector;
    struct __CFRunLoopTimer { } *_replyTimer;
    struct __CFRunLoopObserver { } *_replyObserver;
    IMKInputSessionInvocationSentinel *_sentinel;
    IMKInputSession *_imkInputSession;
}

+ (id)invocationWithSession:(id)a0 selector:(SEL)a1;

- (void)dealloc;
- (void)configureReplyTimerWithTimeout:(double)a0;
- (void)runPrivateRunloopWithTimeLimit:(double)a0;
- (void)teardownInvocationAwaitXPCReply;
- (void)addReplyTimerToRunloop;
- (void)configureObservers;
- (void)handleInvocationAwaitXPCReplyDidTimeout;
- (void)handlePrivateRunloopRunResult:(int)a0;
- (void)handleRunloopObservationWithObserver:(struct __CFRunLoopObserver { } *)a0 activity:(unsigned long long)a1;
- (id)initWithSession:(id)a0 selector:(SEL)a1;
- (void)invocationAwaitXPCReply;
- (void)invocationInterruptXPCReply;
- (BOOL)isMarkedDone;
- (void)markDone;
- (void)runloopObservedActivityEntry;
- (void)runloopObservedActivityExit;
- (id)sentinel;
- (void)test_surpriseInnerRunloop;
- (BOOL)timedOut;

@end
