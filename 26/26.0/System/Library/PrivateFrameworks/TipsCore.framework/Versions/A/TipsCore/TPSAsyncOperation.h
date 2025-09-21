@class NSError;

@interface TPSAsyncOperation : NSOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _executing;
    BOOL _finished;
    BOOL _cancelled;
}

@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) id /* block */ preCompletionBlock;

- (BOOL)isAsynchronous;
- (BOOL)isFinished;
- (BOOL)isCancelled;
- (BOOL)isExecuting;
- (void)start;
- (void)cancel;
- (void)finishWithError:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)lockExec:(id /* block */)a0;

@end
