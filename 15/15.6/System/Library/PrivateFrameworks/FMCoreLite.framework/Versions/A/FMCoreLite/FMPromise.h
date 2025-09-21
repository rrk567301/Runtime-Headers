@class NSString, FMFuture;

@interface FMPromise : NSObject <FMPromise>

@property (readonly) FMFuture *future;
@property (copy, nonatomic) NSString *descriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (char)finishWithError:(id)a0;
- (char)finishWithResult:(id)a0 error:(id)a1;
- (id /* block */)completionHandlerAdapter;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (char)finishWithResult:(id)a0;
- (id)initWithFuture:(id)a0;
- (char)finishWithNoResult;

@end
