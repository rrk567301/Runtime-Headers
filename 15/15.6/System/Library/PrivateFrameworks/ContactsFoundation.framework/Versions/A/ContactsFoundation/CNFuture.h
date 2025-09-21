@class NSString, NSMutableArray;
@protocol CNFutureImpl;

@interface CNFuture : NSObject <CNFuture, CNPromise> {
    id<CNFutureImpl> _impl;
    NSMutableArray *_calculationDependencies;
}

@property (readonly, getter=isFinished) char finished;
@property (readonly, getter=isCancelled) char cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_joinMany:(id)a0;
+ (id)_joinOne:(id)a0;
+ (id)_joinZero;
+ (id)chain:(id)a0;
+ (void)finishPromise:(id)a0 withFuture:(id)a1;
+ (id)flatMap:(id)a0 withBlock:(id /* block */)a1 schedulerProvider:(id)a2;
+ (id)future;
+ (id)futureWithBlock:(id /* block */)a0;
+ (id)futureWithBlock:(id /* block */)a0 scheduler:(id)a1;
+ (id)futureWithBlock:(id /* block */)a0 scheduler:(id)a1 schedulerProvider:(id)a2;
+ (id)futureWithBlock:(id /* block */)a0 schedulerProvider:(id)a1;
+ (id)futureWithError:(id)a0;
+ (id)futureWithResult:(id)a0;
+ (id)join:(id)a0;
+ (id)lazyFutureWithBlock:(id /* block */)a0;
+ (id)promiseFuture;
+ (id)recover:(id)a0 withBlock:(id /* block */)a1 schedulerProvider:(id)a2;
+ (id)sequence:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (char)cancel;
- (id)initWithImpl:(id)a0;
- (char)finishWithError:(id)a0;
- (char)finishWithResult:(id)a0 error:(id)a1;
- (void)didCancel;
- (id)result:(id *)a0;
- (void)_flushCompletionBlocks;
- (void)addCalculationDependency:(id)a0;
- (void)addFailureBlock:(id /* block */)a0;
- (void)addFailureBlock:(id /* block */)a0 scheduler:(id)a1;
- (void)addSuccessBlock:(id /* block */)a0;
- (void)addSuccessBlock:(id /* block */)a0 scheduler:(id)a1;
- (id /* block */)boolErrorCompletionHandlerAdapter;
- (id /* block */)completionHandlerAdapter;
- (id /* block */)completionHandlerAdapterWithDefaultValue:(id)a0;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (char)finishWithResult:(id)a0;
- (id)flatMap:(id /* block */)a0;
- (id)flatMap:(id /* block */)a0 schedulerProvider:(id)a1;
- (id)initWithSchedulerProvider:(id)a0;
- (id)recover:(id /* block */)a0;
- (id)recover:(id /* block */)a0 schedulerProvider:(id)a1;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (id)resultWithTimeout:(double)a0 error:(id *)a1;

@end
