@class NSString, NSError;

@interface _PFTFailedFutureImpl : NSObject <PFTFutureImpl> {
    NSError *_error;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isCancelled;
- (void)addFailureBlock:(id /* block */)a0;
- (void)addSuccessBlock:(id /* block */)a0;
- (BOOL)cancel;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (BOOL)isFinished;
- (id)initWithError:(id)a0;
- (void).cxx_destruct;
- (void)appendDescriptionToStream:(id)a0;

@end
