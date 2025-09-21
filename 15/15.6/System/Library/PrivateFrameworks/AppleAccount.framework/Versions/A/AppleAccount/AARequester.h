@class NSString, AARequest, AAResponse, AKAppleIDSession, NSObject, NSMutableData, NSHTTPURLResponse, NSURLConnection;
@protocol OS_dispatch_queue;

@interface AARequester : NSOperation <NSURLConnectionDelegate> {
    AARequest *_request;
    AAResponse *_response;
    NSURLConnection *_urlConnection;
    id /* block */ _handler;
    NSMutableData *_data;
    NSHTTPURLResponse *_httpResponse;
    Class _responseClass;
    char _canceled;
    AKAppleIDSession *_appleIDSession;
    char _shouldRetry;
}

@property (nonatomic, getter=isExecuting) char isExecuting;
@property (getter=isFinished) char finished;
@property (getter=isCanceled) char canceled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 willSendRequestForAuthenticationChallenge:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)__unsafe_callHandler;
- (void)_callHandler;
- (void)_kickOffRequest:(id)a0;
- (id)initWithRequest:(id)a0 handler:(id /* block */)a1;

@end
