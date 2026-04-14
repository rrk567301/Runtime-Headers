@class NSObject;
@protocol OS_dispatch_queue;

@interface AVWeakReferencingDelegateStorage : NSObject {
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    id _weakDelegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property (readonly, nonatomic) id delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;

+ (void)initialize;

- (void)setDelegate:(id)a0 queue:(id)a1;
- (void)dealloc;
- (void)getRetainedDelegate:(id *)a0 retainedDelegateQueue:(id *)a1;
- (id)init;
- (void)invokeDelegateCallbackWithBlock:(id /* block */)a0;
- (void)invokeDelegateCallbackWithBlock:(id /* block */)a0 synchronouslyIfDelegateQueueIsQueue:(id)a1;
- (void).cxx_destruct;

@end
