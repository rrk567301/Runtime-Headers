@interface _TtCO11MediaCoreUI19MotionAssetDownload10Downloader : NSObject <AVAssetDownloadDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_downloadSession;
    void /* unknown type, empty encoding */ downloadContainers;
}

- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 assetDownloadTask:(id)a1 willDownloadToURL:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
