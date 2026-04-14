@class IMKServerInvocationSentinel, IPMDServerClientWrapper;

@interface IMKServerXPCInvocation : NSObject {
    BOOL _request_reply_done;
    BOOL _timedOut;
    SEL _callerSelector;
    struct __CFRunLoopTimer { } *_replyTimer;
    IMKServerInvocationSentinel *_sentinel;
    IPMDServerClientWrapper *_clientWrapper;
    BOOL _invocationInterruptAttempted;
    BOOL _otherInnerRunLoopDetected;
    unsigned long long _innerRunLoopCount;
    struct __CFRunLoopObserver { } *_replyObserver;
}

+ (id)invocationWithClientWrapper:(id)a0 selector:(SEL)a1;

- (void)dealloc;
- (void)invocationInterruptXPCReply;
- (id)sentinel;
- (BOOL)isMarkedDone;
- (void)invocationAwaitXPCReply;
- (void)markDone;
- (BOOL)timedOut;
- (id)initWithClientWrapper:(id)a0 selector:(SEL)a1;

@end
