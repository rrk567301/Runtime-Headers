@class NSURL, NSDictionary, NSURLConnection;

@interface OFHTTPOperation : OFNSOperation

@property BOOL running;
@property (copy) NSURL *url;
@property (retain) NSDictionary *headers;
@property (retain) NSURLConnection *urlConnection;

- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)dealloc;
- (id)init;
- (id)URLRequest;
- (void)cancelOperation;
- (void)connection:(id)a0 didReceiveAuthenticationChallenge:(id)a1;
- (unsigned long long)launchOperation;
- (id)localizedErrorDescription;
- (void)finishOperation;
- (void)cleanupOperation;
- (void)runURLRequest:(id)a0;

@end
