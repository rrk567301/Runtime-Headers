@class NSString, NAFuture;

@interface NAPromise : NSObject <NAPromise>

@property (readonly) NAFuture *future;
@property (copy, nonatomic) NSString *descriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)finishWithError:(id)a0;
- (BOOL)finishWithResult:(id)a0 error:(id)a1;
- (BOOL)finishWithResult:(id)a0;
- (id /* block */)completionHandlerAdapter;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (id)initWithFuture:(id)a0;
- (BOOL)finishWithNoResult;

@end
