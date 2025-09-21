@class NSObject;
@protocol OS_dispatch_queue, FPCancellable;

@interface FPOperation : NSOperation <FPOperationClient> {
    unsigned char _uuid[16];
    id _executionTransaction;
}

@property (readonly, getter=isExecuting) char executing;
@property (readonly, getter=isFinished) char finished;
@property (retain, nonatomic) id<FPCancellable> remoteOperation;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (copy) id /* block */ finishedBlock;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)setCancellationHandler:(id)a0;
- (void)start;
- (void)cancel;
- (id)operationDescription;
- (char)_finishIfCancelled;
- (void)_setExecuting:(char)a0;
- (void)_setFinished:(char)a0;
- (void)completedWithResult:(id)a0 error:(id)a1;
- (char)finishIfCancelled;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)_setRemoteCancellationHandler:(id)a0;
- (void)operationDidProgressWithInfo:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (id)proxifiedDescription;
- (void)resetRemoteOperation;

@end
