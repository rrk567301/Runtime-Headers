@class NSString, NSURLSession, NSOperationQueue, AKAppleIDSession, AMSURLDelegateProxy, NSObject, AMSURLSecurityPolicy, NSURLSessionConfiguration;
@protocol AMSRequestEncoding, AMSURLHandling, AMSResponseDecoding, AMSURLProtocolDelegate, OS_dispatch_queue, NSURLSessionDelegate;

@interface AMSURLSession : NSObject <NSURLSessionDataDelegate, NSURLSessionTaskDelegate>

@property (class, readonly) AKAppleIDSession *sharedAuthKitSession;

@property (retain) AMSURLDelegateProxy *delegateProxy;
@property BOOL invalidated;
@property (readonly) NSObject<OS_dispatch_queue> *lazyDataTaskCreationQueue;
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

+ (id)defaultSession;
+ (id)imageSession;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (id)dataTaskWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithConfiguration:(id)a0;
- (id)dataTaskWithRequest:(id)a0;
- (void)invalidateAndCancel;
- (void)finishTasksAndInvalidate;
- (id)initWithConfiguration:(id)a0 delegate:(id)a1 delegateQueue:(id)a2;
- (void)_completeTask:(id)a0 decodedObject:(id)a1 error:(id)a2;
- (id)_createSharedDataForTask:(id)a0 properties:(id)a1 completionHandler:(id /* block */)a2;
- (id)_formatError:(id)a0 task:(id)a1 decodedObject:(id)a2;
- (id)_handleURLAction:(id)a0 task:(id)a1 error:(id *)a2;
- (id)_prepareRequest:(id)a0 properties:(id)a1 error:(id *)a2;
- (BOOL)_protocolHandlerIsAMSImplementation;
- (void)_retryTask:(id)a0 action:(id)a1 error:(id *)a2;
- (id)dataTaskPromiseWithRequest:(id)a0;
- (id)dataTaskPromiseWithRequestPromise:(id)a0;
- (id)dataTaskWithRequest:(id)a0 signpostID:(unsigned long long)a1 completionHandler:(id /* block */)a2;

@end
