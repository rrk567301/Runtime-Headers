@class IMKClientInvocationSentinel;

@interface IMKClientXPCInvocation : NSObject {
    BOOL _request_reply_done;
    BOOL _timedOut;
    SEL _callerSelector;
    struct __CFRunLoopTimer { } *_replyTimer;
    IMKClientInvocationSentinel *_sentinel;
    double _timeout;
}

+ (id)invocationWithTimeout:(double)a0 selector:(SEL)a1;

- (void)dealloc;
- (double)timeout;
- (void)invocationInterruptXPCReply;
- (id)sentinel;
- (BOOL)isMarkedDone;
- (void)invocationAwaitXPCReply;
- (void)markDone;
- (id)initWithTimeout:(double)a0 selector:(SEL)a1;
- (BOOL)timedOut;

@end
