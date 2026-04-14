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

- (void)operationWillFinishWithError:(id)a0;
- (unsigned long long)maxRetries;
- (void)performOperation;
- (BOOL)canRetryWithError:(id)a0 retryAfter:(id *)a1;
- (void)resetForRetry;
- (void).cxx_destruct;

@end
