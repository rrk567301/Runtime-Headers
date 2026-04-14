@class NSURL, NSFileHandle;

@interface OFHTTPDownloadOperation : OFHTTPOperation {
    NSFileHandle *_fileHandle;
    long long _totalBytesWritten;
    long long _expectedTotalBytes;
}

@property (copy) NSURL *destinationURL;

+ (id)operationWithURL:(id)a0 headers:(id)a1 destinationURL:(id)a2;

- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (id)init;
- (void)dealloc;
- (void)cancelOperation;
- (unsigned long long)launchOperation;
- (void)finishOperation;
- (void)cleanupOperation;
- (id)initWithURL:(id)a0 headers:(id)a1 destinationURL:(id)a2;

@end
