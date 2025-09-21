@class NSData, AVPersistableContentKeyRequest, NSURL;
@protocol FCAVAssetKeyServiceType, FCAVAssetKeyCacheType;

@interface FCAVAssetKeyFetchOperation : FCOperation {
    NSData *_resultCKCData;
    id /* block */ _fetchCompletionHandler;
    AVPersistableContentKeyRequest *_keyRequest;
    NSURL *_keyURI;
    id<FCAVAssetKeyServiceType> _service;
    id<FCAVAssetKeyCacheType> _cache;
}

- (void)performOperation;
- (void)resetForRetry;
- (unsigned long long)maxRetries;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)canRetryWithError:(id)a0 retryAfter:(id *)a1;
- (void).cxx_destruct;

@end
