@class NSObject, NSString, NSCondition, NSError, NSMutableArray;
@protocol OS_dispatch_source, MONSOperationDelegate;

@interface MONSOperation : NSOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _executing;
    BOOL _finished;
    double _startTime;
    NSCondition *_finishingCondition;
    BOOL _isFinishingCondition;
    NSObject<OS_dispatch_source> *_cancelTimer;
}

@property BOOL isFinishing;
@property (copy) id /* block */ executionBlock;
@property (retain) NSMutableArray *subOperations;
@property (weak) MONSOperation *mainOperation;
@property BOOL canBeCancelled;
@property (retain) NSError *error;
@property (copy) NSString *identifier;
@property (retain) id context;
@property (weak, nonatomic) id<MONSOperationDelegate> finishDelegate;
@property (copy) id /* block */ cancelBlock;
@property (copy) id /* block */ finishBlock;
@property BOOL needsToRetry;
@property (readonly) unsigned long long retryCount;

+ (id)blockOperationWithExecutionBlock:(id /* block */)a0 finishBlock:(id /* block */)a1 andFinishDelegate:(id)a2;
+ (id)blockOperationWithExecutionBlock:(id /* block */)a0;
+ (id)nullOperationWithFinishBlock:(id /* block */)a0 andFinishDelegate:(id)a1;
+ (id)operationWithFinishBlock:(id /* block */)a0 andFinishDelegate:(id)a1;

- (double)elapsedTime;
- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (BOOL)isActive;
- (void)performAsynchronously:(id)a0;
- (void)finish;
- (void)start;
- (BOOL)_finish:(BOOL)a0;
- (BOOL)isFinished;
- (void)cancel;
- (id)operationDescription;
- (BOOL)shouldContinue;
- (void)cancelOperation;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)launchOperation;
- (BOOL)hasSucceeded;
- (BOOL)canStart;
- (void)finishOperation;
- (BOOL)performSynchronously;
- (void)_launchOperation;
- (void)cleanupOperation;
- (void)performAsynchronously:(id)a0 timeout:(unsigned long long)a1;
- (BOOL)performSubOperationSynchronously:(id)a0 timeout:(unsigned long long)a1;
- (BOOL)performSynchronouslyWithTimeout:(unsigned long long)a0;

@end
