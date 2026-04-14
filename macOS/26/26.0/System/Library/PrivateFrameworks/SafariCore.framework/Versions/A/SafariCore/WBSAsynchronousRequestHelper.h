@class NSString, NSURLResponse, NSOperationQueue, NSMutableData, NSURLConnection;

@interface WBSAsynchronousRequestHelper : NSObject <NSURLConnectionDelegate, WBSAsynchronousRequest> {
    NSOperationQueue *_queue;
    id /* block */ _handler;
    NSURLConnection *_connection;
    NSURLResponse *_response;
    NSMutableData *_data;
    id _lifetimeExtender;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)dealloc;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)cancel;
- (void)sendRequest;
- (void)connectionDidFinishLoading:(id)a0;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;

@end
