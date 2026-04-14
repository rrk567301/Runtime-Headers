@class NSError, NSOperationQueue;

@interface ICAsyncOperation : NSOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _asyncOperationLock;
    NSOperationQueue *_childOperationQueue;
    long long _qualityOfServiceForChildOperationQueue;
    BOOL _isExecuting;
    BOOL _isFinished;
}

@property (readonly, copy, nonatomic) NSError *error;

- (id)init;
- (void).cxx_destruct;
- (void)finish;
- (void)start;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isConcurrent;
- (BOOL)isAsynchronous;
- (void)execute;
- (void)finishWithError:(id)a0;
- (void)_execute;
- (void)enqueueChildOperation:(id)a0;

@end
