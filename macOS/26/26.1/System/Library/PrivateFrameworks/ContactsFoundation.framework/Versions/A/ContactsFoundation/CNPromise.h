@class NSString, CNFuture;

@interface CNPromise : NSObject <CNPromise>

@property (readonly) CNFuture *future;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSchedulerProvider:(id)a0;
- (id /* block */)completionHandlerAdapterWithDefaultValue:(id)a0;
- (BOOL)finishWithResult:(id)a0;
- (BOOL)finishWithError:(id)a0;
- (BOOL)finishWithResult:(id)a0 error:(id)a1;
- (id /* block */)completionHandlerAdapter;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (id /* block */)boolErrorCompletionHandlerAdapter;
- (void).cxx_destruct;
- (id)init;

@end
