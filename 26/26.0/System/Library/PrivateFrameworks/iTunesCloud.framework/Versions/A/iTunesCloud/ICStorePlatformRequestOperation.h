@class ICStoreURLRequest, ICStorePlatformRequest, ICURLSession, NSObject;
@protocol OS_dispatch_queue;

@interface ICStorePlatformRequestOperation : ICAsyncOperation {
    NSObject<OS_dispatch_queue> *_accessQueue;
    ICStoreURLRequest *_activeURLRequest;
    ICStorePlatformRequestOperation *_strongSelf;
    ICURLSession *_urlSession;
}

@property (readonly, copy, nonatomic) ICStorePlatformRequest *platformRequest;
@property (copy, nonatomic) id /* block */ responseHandler;

- (id)_URLRequestWithBaseURL:(id)a0;
- (void)execute;
- (void)cancel;
- (void)finishWithError:(id)a0;
- (id)initWithPlatformRequest:(id)a0;
- (void)_executePersonalized;
- (void)_finishWithResponse:(id)a0 error:(id)a1;
- (void)_executeUnpersonalized;
- (void)_enqueueDataRequest:(id)a0;
- (id)initWithPlatformRequest:(id)a0 usingURLSession:(id)a1;
- (id)_requestContext;
- (void).cxx_destruct;

@end
