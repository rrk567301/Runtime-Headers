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
- (void)invocationInterruptXPCReply;
- (id)sentinel;
- (BOOL)isMarkedDone;
- (void)invocationAwaitXPCReply;
- (void)markDone;
- (BOOL)timedOut;
- (id)initWithSession:(id)a0 selector:(SEL)a1;

@end
