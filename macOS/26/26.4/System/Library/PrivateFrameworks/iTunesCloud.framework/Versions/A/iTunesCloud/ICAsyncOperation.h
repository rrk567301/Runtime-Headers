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
- (void)finishWithError:(id)a0;
- (void)execute;
- (void)finish;
- (BOOL)isFinished;
- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (void).cxx_destruct;
- (id)init;
- (void)start;
- (void)_execute;
- (void)enqueueChildOperation:(id)a0;

@end
