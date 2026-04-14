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
- (BOOL)isConcurrent;
- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)execute;
- (void)finishWithError:(id)a0;
- (void)enqueueChildOperation:(id)a0;
- (void)_execute;

@end
