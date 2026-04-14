@class AMSPromise;

@interface AMSUIAssetFetchOperation : NSOperation

@property (getter=isLowLatency) BOOL lowLatency;
@property (retain) AMSPromise *operationPromise;

- (void)setQueuePriority:(long long)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (void)_finishWithImage:(id)a0 error:(id)a1;

@end
