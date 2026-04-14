@class NSError, NSOperationQueue;

@interface ICAsyncOperation : NSOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _asyncOperationLock;
    NSOperationQueue *_childOperationQueue;
    long long _qualityOfServiceForChildOperationQueue;
    BOOL _isExecuting;
    BOOL _isFinished;
}

@property (readonly, copy, nonatomic) NSError *error;

- (void)finish;
- (BOOL)isExecuting;
- (BOOL)isConcurrent;
- (void)finishWithError:(id)a0;
- (BOOL)isFinished;
- (void)start;
- (BOOL)isAsynchronous;
- (id)init;
- (void).cxx_destruct;
- (void)execute;
- (void)_execute;
- (void)enqueueChildOperation:(id)a0;

@end
