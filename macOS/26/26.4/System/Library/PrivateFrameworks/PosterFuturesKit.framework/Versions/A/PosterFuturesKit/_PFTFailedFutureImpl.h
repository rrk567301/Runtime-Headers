@class NSString, NSError;

@interface _PFTFailedFutureImpl : NSObject <PFTFutureImpl> {
    NSError *_error;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appendDescriptionToStream:(id)a0;
- (id)initWithError:(id)a0;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (void)addFailureBlock:(id /* block */)a0;
- (BOOL)isFinished;
- (void)addSuccessBlock:(id /* block */)a0;
- (BOOL)cancel;
- (void).cxx_destruct;
- (BOOL)isCancelled;

@end
