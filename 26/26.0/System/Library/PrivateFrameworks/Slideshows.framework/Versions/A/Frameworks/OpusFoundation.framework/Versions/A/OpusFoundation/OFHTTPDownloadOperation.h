@class NSURL, NSFileHandle;

@interface OFHTTPDownloadOperation : OFHTTPOperation {
    NSFileHandle *_fileHandle;
    long long _totalBytesWritten;
    long long _expectedTotalBytes;
}

@property (copy) NSURL *destinationURL;

+ (id)operationWithURL:(id)a0 headers:(id)a1 destinationURL:(id)a2;

- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)dealloc;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (id)init;
- (void)cancelOperation;
- (void)connectionDidFinishLoading:(id)a0;
- (unsigned long long)launchOperation;
- (void)finishOperation;
- (void)cleanupOperation;
- (id)initWithURL:(id)a0 headers:(id)a1 destinationURL:(id)a2;

@end
