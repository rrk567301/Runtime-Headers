@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue, OS_dispatch_group;

@interface FCOperationThrottler : NSObject <FCOperationThrottler> {
    NSObject<OS_dispatch_source> *_dispatchSource;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_group> *_handlerSynchronizationGroup;
}

@property BOOL suspended;

- (id)initWithDelegate:(id)a0;
- (id)initWithDelegate:(id)a0 updateQueue:(id)a1;
- (void)tickleWithCompletion:(id /* block */)a0;
- (void)tickle;
- (void).cxx_destruct;
- (void)addCompletionForCurrentOperation:(id /* block */)a0;
- (id)init;
- (void)dealloc;

@end
