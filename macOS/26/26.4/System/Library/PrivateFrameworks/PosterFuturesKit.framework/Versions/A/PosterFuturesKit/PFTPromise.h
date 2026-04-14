@class NSString, PFTFuture;

@interface PFTPromise : NSObject <PFTPromise>

@property (readonly) PFTFuture *future;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)finishWithError:(id)a0;
- (id /* block */)completionHandlerAdapter;
- (id /* block */)boolErrorCompletionHandlerAdapter;
- (BOOL)finishWithResult:(id)a0 error:(id)a1;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (id /* block */)completionHandlerAdapterWithDefaultValue:(id)a0;
- (BOOL)finishWithResult:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithSchedulerProvider:(id)a0;
- (BOOL)cancelWithReason:(id)a0;

@end
