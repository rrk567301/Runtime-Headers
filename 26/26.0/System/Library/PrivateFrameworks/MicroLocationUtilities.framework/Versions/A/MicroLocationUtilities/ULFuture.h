@class NSString, NSConditionLock, NSError, NSMutableArray;

@interface ULFuture : NSObject <ULPromisePrivate, ULFuture> {
    NSConditionLock *_stateLock;
    id _result;
    NSError *_error;
    NSMutableArray *_completionBlocks;
}

@property (readonly, nonatomic) id result;
@property (readonly, nonatomic) id resultIfAvailable;
@property (readonly) id /* block */ completionHandlerAdapter;
@property (readonly) id /* block */ boolErrorCompletionHandlerAdapter;
@property (readonly) id /* block */ errorOnlyCompletionHandlerAdapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, getter=isFinished) BOOL finished;
@property (readonly, getter=isCancelled) BOOL cancelled;

+ (id)combine:(id)a0;
+ (id)futureWithError:(id)a0;
+ (id)chain:(id)a0;
+ (id)futureWithBlock:(id /* block */)a0;
+ (id)futureWithResult:(id)a0;
+ (id)join:(id)a0;
+ (id)sequence:(id)a0;
+ (void)_always:(id)a0 withBlock:(id /* block */)a1 scheduler:(id)a2;
+ (id)_join:(id)a0 ignoreFailures:(BOOL)a1;
+ (id)_recover:(id)a0 withBlock:(id /* block */)a1 scheduler:(id)a2;
+ (id)_then:(id)a0 withBlock:(id /* block */)a1 scheduler:(id)a2;
+ (id)nullFuture;
+ (id)onScheduler:(id)a0 futureWithBlock:(id /* block */)a1;

- (BOOL)tryCancel;
- (BOOL)_nts_isFinished;
- (void)_addCompletionBlock:(id /* block */)a0;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (id)onScheduler:(id)a0 recover:(id /* block */)a1;
- (id)onScheduler:(id)a0 map:(id /* block */)a1;
- (void)onScheduler:(id)a0 always:(id /* block */)a1;
- (void)_finishWithFuture:(id)a0;
- (void)finishWithFuture:(id)a0;
- (id)resultIfAvailable:(id *)a0;
- (id)onScheduler:(id)a0 then:(id /* block */)a1;
- (void)always:(id /* block */)a0;
- (id)resultWithTimeout:(double)a0 error:(id *)a1;
- (id)recover:(id /* block */)a0;
- (void)onScheduler:(id)a0 addFailureBlock:(id /* block */)a1;
- (void)onScheduler:(id)a0 addSuccessBlock:(id /* block */)a1;
- (id)then:(id /* block */)a0;
- (id)result:(id *)a0;
- (void)_flushCompletionBlocks;
- (void)addSuccessBlock:(id /* block */)a0;
- (BOOL)finishWithResult:(id)a0;
- (BOOL)finishWithResult:(id)a0 error:(id)a1;
- (id)map:(id /* block */)a0;
- (void)didCancel;
- (void)cancel;
- (void)addFailureBlock:(id /* block */)a0;
- (BOOL)finishWithError:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
