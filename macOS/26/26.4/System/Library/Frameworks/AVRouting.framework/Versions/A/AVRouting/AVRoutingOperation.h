@class NSError, NSObject;
@protocol OS_dispatch_queue;

@interface AVRoutingOperation : NSOperation {
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    long long _status;
    NSError *_error;
}

@property (readonly) long long status;
@property (readonly) NSError *error;

+ (void)initialize;
+ (long long)statusOfOperations:(id)a0 error:(id *)a1;

- (BOOL)isReady;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)markAsFailedWithError:(id)a0;
- (id)init;
- (void)didEnterTerminalState;
- (void)markAsCompleted;
- (void)dealloc;
- (void)markAsCancelled;
- (BOOL)_setStatus:(long long)a0 error:(id)a1 resultingStatus:(long long *)a2 failureReason:(id *)a3;
- (BOOL)evaluateDependenciesAndMarkAsExecuting;

@end
