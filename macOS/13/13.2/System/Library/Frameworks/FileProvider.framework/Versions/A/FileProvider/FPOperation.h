@class NSObject;
@protocol OS_dispatch_queue, FPCancellable;

@interface FPOperation : NSOperation <FPOperationClient> {
    unsigned char _uuid[16];
    id _executionTransaction;
}

@property (readonly, getter=isExecuting) BOOL executing;
@property (readonly, getter=isFinished) BOOL finished;
@property (retain, nonatomic) id<FPCancellable> remoteOperation;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (copy) id /* block */ finishedBlock;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)setCancellationHandler:(id)a0;
- (void)start;
- (void)cancel;
- (id)operationDescription;
- (void)_setFinished:(BOOL)a0;
- (void)_setExecuting:(BOOL)a0;
- (BOOL)_finishIfCancelled;
- (BOOL)finishIfCancelled;
- (void)completedWithResult:(id)a0 error:(id)a1;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (id)proxifiedDescription;
- (void)operationDidProgressWithInfo:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (void)resetRemoteOperation;
- (void)_setRemoteCancellationHandler:(id)a0;

@end
