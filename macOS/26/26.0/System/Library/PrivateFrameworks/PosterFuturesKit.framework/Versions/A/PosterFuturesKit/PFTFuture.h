@class NSDictionary, NSString, NSMutableArray;
@protocol PFTFutureImpl;

@interface PFTFuture : NSObject <PFTFuture, PFTPromise> {
    id<PFTFutureImpl> _impl;
    NSMutableArray *_calculationDependencies;
}

@property (copy) NSDictionary *userInfo;
@property (readonly, getter=isFinished) BOOL finished;
@property (readonly, getter=isCancelled) BOOL cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)future;
+ (id)futureWithError:(id)a0;
+ (id)_joinMany:(id)a0;
+ (id)_joinOne:(id)a0;
+ (id)_joinZero;
+ (id)chain:(id)a0;
+ (void)finishPromise:(id)a0 withFuture:(id)a1;
+ (id)futureWithBlock:(id /* block */)a0;
+ (id)futureWithBlock:(id /* block */)a0 scheduler:(id)a1;
+ (id)futureWithBlock:(id /* block */)a0 scheduler:(id)a1 schedulerProvider:(id)a2;
+ (id)futureWithBlock:(id /* block */)a0 schedulerProvider:(id)a1;
+ (id)futureWithResult:(id)a0;
+ (id)join:(id)a0;
+ (id)lazyFutureWithBlock:(id /* block */)a0;
+ (id)promiseFuture;
+ (id)sequence:(id)a0;
+ (id)cancelledFuture;
+ (id)flatMap:(id)a0 withBlock:(id /* block */)a1 continuationScheduler:(id)a2 schedulerProvider:(id)a3;
+ (id)recover:(id)a0 withBlock:(id /* block */)a1 onErrorScheduler:(id)a2 schedulerProvider:(id)a3;

- (id)flatMap:(id /* block */)a0;
- (id /* block */)boolErrorCompletionHandlerAdapter;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (id)resultWithTimeout:(double)a0 error:(id *)a1;
- (id)recover:(id /* block */)a0;
- (id)result:(id *)a0;
- (void)_flushCompletionBlocks;
- (void)addCompletionBlock:(id /* block */)a0;
- (void)addSuccessBlock:(id /* block */)a0;
- (BOOL)finishWithResult:(id)a0;
- (id /* block */)completionHandlerAdapter;
- (BOOL)finishWithResult:(id)a0 error:(id)a1;
- (id)initWithImpl:(id)a0;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (void)didCancel;
- (id)initWithSchedulerProvider:(id)a0;
- (BOOL)cancel;
- (void)addFailureBlock:(id /* block */)a0;
- (id /* block */)completionHandlerAdapterWithDefaultValue:(id)a0;
- (BOOL)finishWithError:(id)a0;
- (id)init;
- (void)addCalculationDependency:(id)a0;
- (void)addFailureBlock:(id /* block */)a0 scheduler:(id)a1;
- (void)addSuccessBlock:(id /* block */)a0 scheduler:(id)a1;
- (void).cxx_destruct;
- (BOOL)cancelWithReason:(id)a0;
- (id)timeoutAfter:(double)a0 scheduler:(id)a1 cleanup:(id /* block */)a2;
- (void)addCompletionBlock:(id /* block */)a0 scheduler:(id)a1;
- (void)addSuccessBlock:(id /* block */)a0 andFailureBlock:(id /* block */)a1;
- (void)addSuccessBlock:(id /* block */)a0 andFailureBlock:(id /* block */)a1 scheduler:(id)a2;
- (id)flatMap:(id /* block */)a0 continuationScheduler:(id)a1;
- (id)flatMap:(id /* block */)a0 continuationScheduler:(id)a1 schedulerProvider:(id)a2;
- (id)recover:(id /* block */)a0 onErrorScheduler:(id)a1;
- (id)recover:(id /* block */)a0 onErrorScheduler:(id)a1 schedulerProvider:(id)a2;
- (id)timeoutAfter:(double)a0 cleanup:(id /* block */)a1;
- (id)trackWithActivity:(id)a0;

@end
