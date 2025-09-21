@class NSObject, NSString, NSCondition, NSError, NSMutableArray;
@protocol OS_dispatch_source, MONSOperationDelegate;

@interface MONSOperation : NSOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    char _executing;
    char _finished;
    double _startTime;
    NSCondition *_finishingCondition;
    char _isFinishingCondition;
    NSObject<OS_dispatch_source> *_cancelTimer;
}

@property char isFinishing;
@property (copy) id /* block */ executionBlock;
@property (retain) NSMutableArray *subOperations;
@property (weak) MONSOperation *mainOperation;
@property char canBeCancelled;
@property (retain) NSError *error;
@property (copy) NSString *identifier;
@property (retain) id context;
@property (weak, nonatomic) id<MONSOperationDelegate> finishDelegate;
@property (copy) id /* block */ cancelBlock;
@property (copy) id /* block */ finishBlock;
@property char needsToRetry;
@property (readonly) unsigned long long retryCount;

+ (id)blockOperationWithExecutionBlock:(id /* block */)a0 finishBlock:(id /* block */)a1 andFinishDelegate:(id)a2;
+ (id)blockOperationWithExecutionBlock:(id /* block */)a0;
+ (id)nullOperationWithFinishBlock:(id /* block */)a0 andFinishDelegate:(id)a1;
+ (id)operationWithFinishBlock:(id /* block */)a0 andFinishDelegate:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)finish;
- (char)isActive;
- (void)start;
- (void)cancel;
- (char)isConcurrent;
- (char)isExecuting;
- (char)isFinished;
- (id)operationDescription;
- (unsigned long long)launchOperation;
- (char)shouldContinue;
- (char)_finish:(char)a0;
- (double)elapsedTime;
- (char)hasSucceeded;
- (void)cancelOperation;
- (char)canStart;
- (void)finishOperation;
- (char)performSynchronously;
- (void)performAsynchronously:(id)a0;
- (void)_launchOperation;
- (void)cleanupOperation;
- (void)performAsynchronously:(id)a0 timeout:(unsigned long long)a1;
- (char)performSubOperationSynchronously:(id)a0 timeout:(unsigned long long)a1;
- (char)performSynchronouslyWithTimeout:(unsigned long long)a0;

@end
