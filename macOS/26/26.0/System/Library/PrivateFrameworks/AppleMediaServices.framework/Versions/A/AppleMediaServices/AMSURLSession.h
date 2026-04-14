@class NSOperationQueue, NSURLSession, NSString, AKAppleIDSession, AMSURLDelegateProxy, AMSURLSecurityPolicy, NSURLSessionConfiguration;
@protocol AMSURLHandling, AMSResponseDecoding, AMSURLProtocolDelegate, NSURLSessionDelegate, AMSRequestEncoding;

@interface AMSURLSession : NSObject <NSURLSessionDataDelegate, NSURLSessionTaskDelegate> {
    id<AMSURLHandling> _protocolHandler;
    id<AMSResponseDecoding> _responseDecoder;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _propertiesLock;
}

@property (class, readonly) AKAppleIDSession *sharedAuthKitSession;

@property (retain) AMSURLDelegateProxy *delegateProxy;
@property BOOL invalidated;
@property BOOL useFallbackBag;
@property (retain) AMSURLSecurityPolicy *securityPolicy;
@property (readonly) NSURLSessionConfiguration *configuration;
@property (weak) id<NSURLSessionDelegate, AMSURLProtocolDelegate> delegate;
@property (readonly) NSOperationQueue *delegateQueue;
@property (retain) id<AMSURLHandling> protocolHandler;
@property (retain) id<AMSRequestEncoding> requestEncoder;
@property (retain) id<AMSResponseDecoding> responseDecoder;
@property (readonly) NSURLSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_taskFromSession:(id)a0 request:(id)a1 activity:(id)a2;
+ (id)minimalSessionUsing:(id)a0;
+ (id)loggingOnlySession;
+ (id)loggingOnlySessionUsing:(id)a0;
+ (id)imageSession;
+ (id)defaultSession;
+ (id)minimalSession;

- (id)_prepareRequest:(id)a0 logUUID:(id)a1;
- (void)invalidateAndCancel;
- (id)dataTaskWithRequest:(id)a0 activity:(id)a1 completionHandler:(id /* block */)a2;
- (id)dataTaskWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)dealloc;
- (id)initWithConfiguration:(id)a0 delegate:(id)a1 delegateQueue:(id)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (id)dataTaskWithRequest:(id)a0 signpostID:(unsigned long long)a1 activity:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (id)dataTaskWithRequest:(id)a0;
- (id)_createSharedDataForTask:(id)a0 properties:(id)a1 completionHandler:(id /* block */)a2;
- (id)dataTaskPromiseWithRequestPromise:(id)a0;
- (id)init;
- (id)_formatError:(id)a0 task:(id)a1 decodedObject:(id)a2;
- (BOOL)_protocolHandler:(id)a0 canUseAlternateImplementationOfSelector:(SEL)a1;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (id)_retryTask:(id)a0 action:(id)a1;
- (void)finishTasksAndInvalidate;
- (id)_reconfigureNewRequest:(id)a0 originalTask:(id)a1 protocolHandler:(id)a2 redirect:(BOOL)a3;
- (id)dataTaskPromiseWithRequest:(id)a0;
- (id)dataTaskPromiseWithRequest:(id)a0 activity:(id)a1;
- (id)_handleURLAction:(id)a0 task:(id)a1 contiguousActionIdentifier:(unsigned long long)a2;
- (id)dataTaskPromiseWithRequestPromise:(id)a0 activity:(id)a1;
- (void)createDataTaskWithRequest:(id)a0 activity:(id)a1 dataTaskCreationCompletionHandler:(id /* block */)a2 requestCompletionHandler:(id /* block */)a3;
- (id)dataTaskWithRequest:(id)a0 signpostID:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)createDataTaskWithRequest:(id)a0 signpostID:(unsigned long long)a1 activity:(id)a2 dataTaskCreationCompletionHandler:(id /* block */)a3 requestCompletionHandler:(id /* block */)a4;
- (id)initWithConfiguration:(id)a0;
- (void)_completeTaskWithTaskInfo:(id)a0 result:(id)a1 decodedObject:(id)a2 error:(id)a3;
- (void).cxx_destruct;

@end
