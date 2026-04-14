@class DownloadManager, MAKeyManagerDownloadSessionDelegate, NSOperationQueue, NSString;

@interface DownloaderSessionDelegate : NSObject <NSURLSessionDownloadDelegate>

@property (readonly, nonatomic) DownloadManager *downloadManager;
@property (readonly, retain, nonatomic) MAKeyManagerDownloadSessionDelegate *keyManagerDelegate;
@property (readonly, retain, nonatomic) NSOperationQueue *queue;
@property (readonly, copy) NSString *backgroundSessionID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (id)initWithDownloadManager:(id)a0;
- (id)allBackgroundSessionIDs;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didResumeAtOffset:(long long)a2 expectedTotalBytes:(long long)a3;
- (void).cxx_destruct;
- (void)invalidateStaleBackgroundSessionsIfNeeded;

@end
