@class MTRAsyncCallbackWorkQueue, NSObject;
@protocol OS_dispatch_queue;

@interface MTRAsyncCallbackQueueWorkItem : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long retryCount;
@property (retain, nonatomic) MTRAsyncCallbackWorkQueue *workQueue;
@property (copy, nonatomic) id /* block */ readyHandler;
@property (copy, nonatomic) id /* block */ cancelHandler;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)cancel;
- (void)endWork;
- (void)retryWork;
- (void)callReadyHandlerWithContext:(id)a0;

@end
