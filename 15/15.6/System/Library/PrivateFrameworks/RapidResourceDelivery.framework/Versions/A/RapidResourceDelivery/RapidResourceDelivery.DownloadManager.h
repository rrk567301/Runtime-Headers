@interface RapidResourceDelivery.DownloadManager : NSObject <NSURLSessionDownloadDelegate> {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ taskStates;
    void /* unknown type, empty encoding */ settings;
    void /* unknown type, empty encoding */ tokenBucket;
    void /* unknown type, empty encoding */ downloadToFolder;
    void /* unknown type, empty encoding */ downloadCompletion;
    void /* unknown type, empty encoding */ sessionConstructor;
    void /* unknown type, empty encoding */ clock;
    void /* unknown type, empty encoding */ _urlSession;
}

- (id)init;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 didCreateTask:(id)a1;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didResumeAtOffset:(long long)a2 expectedTotalBytes:(long long)a3;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;

@end
