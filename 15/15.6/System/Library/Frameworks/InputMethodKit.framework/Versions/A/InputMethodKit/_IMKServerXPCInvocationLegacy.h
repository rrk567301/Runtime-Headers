@class _IPMDServerClientWrapperLegacy, _IMKServerInvocationSentinelLegacy;

@interface _IMKServerXPCInvocationLegacy : NSObject {
    char _request_reply_done;
    char _timedOut;
    SEL _callerSelector;
    struct __CFRunLoopTimer { } *_replyTimer;
    _IMKServerInvocationSentinelLegacy *_sentinel;
    _IPMDServerClientWrapperLegacy *_clientWrapper;
    char _invocationInterruptAttempted;
    char _otherInnerRunLoopDetected;
    unsigned long long _innerRunLoopCount;
    struct __CFRunLoopObserver { } *_replyObserver;
}

+ (id)invocationWithClientWrapper:(id)a0 selector:(SEL)a1;

- (void)dealloc;
- (void)invocationAwaitXPCReply;
- (void)invocationInterruptXPCReply;
- (char)isMarkedDone;
- (void)markDone;
- (id)sentinel;
- (char)timedOut;
- (id)initWithClientWrapper:(id)a0 selector:(SEL)a1;

@end
