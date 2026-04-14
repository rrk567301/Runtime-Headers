@class NSURL, NSMutableData;

@interface OFHTTPUploadOperation : OFHTTPOperation

@property (copy) NSURL *fileURL;
@property (retain) NSMutableData *receivedData;

+ (id)operationWithURL:(id)a0 headers:(id)a1 fileURLToUpload:(id)a2;

- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)dealloc;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (id)init;
- (void)cancelOperation;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didSendBodyData:(long long)a1 totalBytesWritten:(long long)a2 totalBytesExpectedToWrite:(long long)a3;
- (unsigned long long)launchOperation;
- (void)finishOperation;
- (void)cleanupOperation;
- (id)initWithURL:(id)a0 headers:(id)a1 fileURLToUpload:(id)a2;

@end
