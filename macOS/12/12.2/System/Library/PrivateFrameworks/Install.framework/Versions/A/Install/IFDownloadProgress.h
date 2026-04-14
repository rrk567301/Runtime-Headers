@class IFDownloadToken, NSMutableArray;

@interface IFDownloadProgress : NSObject {
    NSMutableArray *tokens;
    unsigned long long downloadedSize;
    unsigned long long totalExpectedSize;
    BOOL finished;
    long long initTime;
    unsigned long long totalDownloads;
    double currentSpeed;
    double averageSpeed;
    IFDownloadToken *currentDownload;
}

- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)addToken:(id)a0;
- (unsigned long long)downloadedSize;
- (double)averageSpeed;
- (double)currentSpeed;
- (void)noteDownloadStarted:(id)a0;
- (void)noteDownloadFinished:(id)a0;
- (void)noteDownloadProgress:(id)a0;
- (unsigned long long)totalExpectedSize;
- (unsigned long long)totalDownloads;
- (id)currentDownload;
- (void)_updateNetSpeed;
- (unsigned long long)downloadsRemaining;

@end
