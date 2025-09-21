@class NSError, NSOperationQueue;

@interface ICAsyncOperation : NSOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _asyncOperationLock;
    NSOperationQueue *_childOperationQueue;
    long long _qualityOfServiceForChildOperationQueue;
    char _isExecuting;
    char _isFinished;
}

@property (readonly, copy, nonatomic) NSError *error;

- (id)init;
- (void).cxx_destruct;
- (void)finish;
- (void)start;
- (char)isAsynchronous;
- (char)isConcurrent;
- (char)isExecuting;
- (char)isFinished;
- (void)execute;
- (void)finishWithError:(id)a0;
- (void)_execute;
- (void)enqueueChildOperation:(id)a0;

@end
