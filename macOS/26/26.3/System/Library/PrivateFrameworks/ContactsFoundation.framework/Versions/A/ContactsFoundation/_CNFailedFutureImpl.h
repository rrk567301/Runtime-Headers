@class NSString, NSError;

@interface _CNFailedFutureImpl : NSObject <CNFutureImpl> {
    NSError *_error;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithError:(id)a0;
- (BOOL)cancel;
- (void)addSuccessBlock:(id /* block */)a0;
- (void)addFailureBlock:(id /* block */)a0;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (BOOL)isFinished;
- (BOOL)isCancelled;
- (void).cxx_destruct;
- (void)updateDescriptionWithBuilder:(id)a0;

@end
