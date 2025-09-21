@class NSError;

@interface TPSAsyncOperation : NSOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    char _executing;
    char _finished;
    char _cancelled;
}

@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) id /* block */ preCompletionBlock;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (char)isAsynchronous;
- (char)isCancelled;
- (char)isExecuting;
- (char)isFinished;
- (void)finishWithError:(id)a0;
- (void)lockExec:(id /* block */)a0;

@end
