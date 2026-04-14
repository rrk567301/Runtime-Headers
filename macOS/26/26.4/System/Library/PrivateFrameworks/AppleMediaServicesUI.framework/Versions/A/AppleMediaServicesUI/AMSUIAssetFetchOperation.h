@class AMSPromise;

@interface AMSUIAssetFetchOperation : NSOperation

@property (getter=isLowLatency) BOOL lowLatency;
@property (retain) AMSPromise *operationPromise;

- (void)setQueuePriority:(long long)a0;
- (void)main;
- (void)cancel;
- (void).cxx_destruct;
- (void)_finishWithImage:(id)a0 error:(id)a1;

@end
