@class NSData, NSMutableData;

@interface OFHTTPRequestOperation : OFHTTPOperation

@property unsigned long long method;
@property (retain) NSData *body;
@property (retain) NSMutableData *receivedData;

+ (id)operationWithURL:(id)a0 headers:(id)a1 body:(id)a2;
+ (id)operationWithURL:(id)a0 headers:(id)a1 method:(unsigned long long)a2;

- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)cancelOperation;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (id)init;
- (void)dealloc;
- (unsigned long long)launchOperation;
- (void)finishOperation;
- (void)cleanupOperation;
- (id)initWithURL:(id)a0 headers:(id)a1 body:(id)a2;
- (id)initWithURL:(id)a0 headers:(id)a1 method:(unsigned long long)a2;

@end
