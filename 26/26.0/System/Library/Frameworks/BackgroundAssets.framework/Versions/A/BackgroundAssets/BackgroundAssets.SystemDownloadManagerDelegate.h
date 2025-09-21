@class NSURLAuthenticationChallenge, BADownload, NSURLCredential;

@interface BackgroundAssets.SystemDownloadManagerDelegate : NSObject <BADownloadManagerDelegate> {
    void /* unknown type, empty encoding */ progressCache;
    void /* unknown type, empty encoding */ stream;
    void /* unknown type, empty encoding */ continuation;
}

- (id)init;
- (void).cxx_destruct;
- (void)downloadDidBegin:(id)a0;
- (void)download:(BADownload *)a0 didReceiveChallenge:(NSURLAuthenticationChallenge *)a1 completionHandler:(void (^)(long long, NSURLCredential *))a2;
- (void)download:(id)a0 didWriteBytes:(long long)a1 totalBytesWritten:(long long)a2 totalBytesExpectedToWrite:(long long)a3;
- (void)download:(id)a0 failedWithError:(id)a1;
- (void)download:(id)a0 finishedWithFileURL:(id)a1;
- (void)downloadDidPause:(id)a0;

@end
