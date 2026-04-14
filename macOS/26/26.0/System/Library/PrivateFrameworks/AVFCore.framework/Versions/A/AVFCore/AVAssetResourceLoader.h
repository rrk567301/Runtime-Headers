@class NSURLSession, NSString, AVAssetResourceLoaderInternal, NSOperationQueue, NSObject;
@protocol NSURLSessionDataDelegate, AVAssetResourceLoaderDelegate, OS_dispatch_queue;

@interface AVAssetResourceLoader : NSObject <NSURLAuthenticationChallengeSender> {
    AVAssetResourceLoaderInternal *_resourceLoader;
}

@property (nonatomic) BOOL preloadsEligibleContentKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<NSURLSessionDataDelegate> URLSessionDataDelegate;
@property (readonly, nonatomic) NSOperationQueue *URLSessionDataDelegateQueue;
@property (retain, nonatomic) NSURLSession *URLSession;
@property (nonatomic) BOOL sendsCommonMediaClientDataAsHTTPHeaders;
@property (nonatomic) unsigned long long allowedCommonMediaClientDataKeys;
@property (readonly, weak, nonatomic) id<AVAssetResourceLoaderDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;

- (void)cancelAuthenticationChallenge:(id)a0;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)a0;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)a0;
- (void)useCredential:(id)a0 forAuthenticationChallenge:(id)a1;
- (void)cancelLoading;
- (id)_getDelegateQueueOnStateQueue;
- (void)_issueLoadingRequestWithKey:(id)a0 loadingRequest:(id)a1 isRenewalRequest:(BOOL)a2 fallbackHandler:(id /* block */)a3;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (void)cacheContentInformation:(id)a0 forURL:(id)a1;
- (struct OpaqueFigCustomURLHandler { } *)_copyContentKeySessionCustomURLHandler;
- (void)_poseAuthenticationChallengeWithRequestInfo:(struct __CFDictionary { } *)a0 requestID:(unsigned long long)a1 challenge:(id)a2;
- (struct OpaqueFigCustomURLLoader { } *)_customURLLoader;
- (void)dealloc;
- (void)_setDelegateOnStateQueue:(id)a0;
- (id)cachedContentInformationForURL:(id)a0;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)a0;
- (void)_noteFinishingOfRequest:(id)a0;
- (void)_setContentKeySessionCustomURLHandler:(struct OpaqueFigCustomURLHandler { } *)a0;
- (void)_sendAuthResponseForChallenge:(id)a0 disposition:(long long)a1 credential:(id)a2 error:(id)a3;
- (struct OpaqueFigCustomURLHandler { } *)_customURLHandler;
- (id)init;
- (id)initWithURLRequestHelper:(id)a0 asset:(id)a1 remoteCustomURLHandlerContext:(id)a2;
- (id)_getDelegateOnStateQueue;
- (id)initWithURLRequestHelper:(id)a0 asset:(id)a1;
- (struct OpaqueFigCustomURLHandler { } *)_authHandler;
- (id)asset;
- (void)_performDelegateSelector:(SEL)a0 withObject:(id)a1 representingNewRequest:(BOOL)a2 key:(id)a3 fallbackHandler:(id /* block */)a4;
- (id)stateQueue;
- (void)_handleRequest:(struct __CFDictionary { } *)a0 requestID:(unsigned long long)a1 willHandleRequest:(BOOL *)a2;
- (void)_cancelRequestWithKey:(id)a0 fallbackHandler:(id /* block */)a1;
- (id)remoteCustomURLHandlerContextForPID:(int)a0;
- (void)_performDelegateCallbackSynchronouslyIfCurrentDelegateQueueIsQueue:(id)a0 delegateCallbackBlock:(id /* block */)a1;
- (id)URLRequestHelper;
- (void)_poseAuthenticationChallengeWithKey:(id)a0 challenge:(id)a1 fallbackHandler:(id /* block */)a2;
- (void)_cancelRequest:(struct __CFDictionary { } *)a0 requestID:(unsigned long long)a1;

@end
