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
- (id)sentinel;
- (void)markDone;
- (BOOL)isMarkedDone;
- (BOOL)timedOut;
- (void)invocationAwaitXPCReply;
- (void)invocationInterruptXPCReply;
- (id)initWithSession:(id)a0 selector:(SEL)a1;

@end
