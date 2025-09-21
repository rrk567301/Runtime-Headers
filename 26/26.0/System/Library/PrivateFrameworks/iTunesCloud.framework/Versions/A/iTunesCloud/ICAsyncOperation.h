@class NSError, NSOperationQueue;

@interface ICAsyncOperation : NSOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _asyncOperationLock;
    NSOperationQueue *_childOperationQueue;
    long long _qualityOfServiceForChildOperationQueue;
    BOOL _isExecuting;
    BOOL _isFinished;
}

@property (readonly, copy, nonatomic) NSError *error;

- (BOOL)isAsynchronous;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)execute;
- (void)start;
- (BOOL)isConcurrent;
- (void)finish;
- (void)finishWithError:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_execute;
- (void)enqueueChildOperation:(id)a0;

@end
