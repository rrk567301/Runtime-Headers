@class NSObject;
@protocol OS_dispatch_queue;

@interface TSKLowPriorityThreadDispatcher : TSKThreadDispatcher {
    NSObject<OS_dispatch_queue> *_queue;
    _Atomic int _suspendCount;
}

@property (class, readonly) TSKLowPriorityThreadDispatcher *sharedLowPriorityDispatcher;

@property (readonly, getter=isSuspended) char suspended;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_singletonAlloc;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (void)suspend;
- (id)p_dispatchQueue;

@end
