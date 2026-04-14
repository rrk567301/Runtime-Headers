@class NSString;

@interface _PFTConstantFutureImpl : NSObject <PFTFutureImpl> {
    id _result;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (id)initWithResult:(id)a0;
- (void)addSuccessBlock:(id /* block */)a0;
- (BOOL)isFinished;
- (BOOL)isCancelled;
- (void)appendDescriptionToStream:(id)a0;
- (BOOL)cancel;
- (void)addFailureBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
