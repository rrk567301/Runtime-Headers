@class NSString;

@interface _PFTConstantFutureImpl : NSObject <PFTFutureImpl> {
    id _result;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)cancel;
- (void)addSuccessBlock:(id /* block */)a0;
- (void)addFailureBlock:(id /* block */)a0;
- (void)appendDescriptionToStream:(id)a0;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (BOOL)isFinished;
- (BOOL)isCancelled;
- (id)initWithResult:(id)a0;
- (void).cxx_destruct;

@end
