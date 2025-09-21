@class NSMutableArray, NSViewServiceMarshal;

@interface NSVB_QueueingProxy : NSVB_TargetedProxy {
    unsigned char _wantsResume : 1;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _suspensionCount;
    NSMutableArray *_queuedInvocations;
    id /* block */ _shouldSuspendInvocationBlock;
    NSViewServiceMarshal *_connectionClient;
    _Atomic unsigned int _queuedInvocationsAreSpecial;
}

+ (id)proxyWithTarget:(id)a0;
+ (id)proxyWithTarget:(id)a0 connectionClient:(id)a1 shouldSuspendInvocationBlock:(id /* block */)a2;

- (void)dealloc;
- (id)description;
- (void)forwardInvocation:(id)a0;
- (char)respondsToSelector:(SEL)a0;
- (char)isValid;
- (void).cxx_destruct;
- (void)resume;
- (void)suspend;
- (void)setWantsResume:(char)a0;
- (void)_dispatchSuspendedMessages;
- (void)ifWantsResume:(id /* block */)a0;
- (void)queuedInvocationsAreSpecial:(id /* block */)a0;
- (void)removeAllEnqueuedInvocations;

@end
