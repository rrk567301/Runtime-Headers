@class NSObject;
@protocol OS_dispatch_queue;

@interface GTContinuation_replayer : NSObject {
    NSObject<OS_dispatch_queue> *queue;
    id /* block */ block;
    BOOL cancelled;
}

- (id)initWithQueue:(id)a0 block:(id /* block */)a1;
- (id)init;
- (void)dealloc;
- (void)dispatch;

@end
