@class NSObject;
@protocol OS_dispatch_queue;

@interface HMFDispatchContext : NSObject <HMFAsyncContext> {
    NSObject<OS_dispatch_queue> *_queue;
    char _alwaysDispatch;
}

@property (readonly) NSObject<OS_dispatch_queue> *queue;

+ (void)blessWithImplicitContext:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)performBlock:(id /* block */)a0;
- (id)initWithQueue:(id)a0;
- (void)assertIsExecuting;
- (id)initWithQueue:(id)a0 alwaysDispatch:(char)a1;

@end
