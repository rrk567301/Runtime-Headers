@interface _TtC8SonicKitP33_679FE6256709F489EF82BF83D73B5E1214AssetCacheImpl : NSObject <AVAssetDownloadDelegate> {
    void /* unknown type, empty encoding */ fileCache;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ activeDownloadTasks;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cellularSession;
    void /* unknown type, empty encoding */ $__lazy_storage_$_nonCellularSession;
}

- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 assetDownloadTask:(id)a1 willDownloadToURL:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)URLSession:(id)a0 assetDownloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;

@end
