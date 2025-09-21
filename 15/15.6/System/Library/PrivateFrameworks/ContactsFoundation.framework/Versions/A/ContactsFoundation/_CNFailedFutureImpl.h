@class NSString, NSError;

@interface _CNFailedFutureImpl : NSObject <CNFutureImpl> {
    NSError *_error;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithError:(id)a0;
- (char)cancel;
- (char)isCancelled;
- (char)isFinished;
- (void)addFailureBlock:(id /* block */)a0;
- (void)addSuccessBlock:(id /* block */)a0;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (void)updateDescriptionWithBuilder:(id)a0;

@end
