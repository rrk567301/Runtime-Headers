@interface VideosUI.DownloadQueueManager : NSObject <VUIDownloadQueueManager> {
    void /* unknown type, empty encoding */ maxDownloadSize;
    void /* unknown type, empty encoding */ seasonDetailsMap;
    void /* unknown type, empty encoding */ allSeasonDetailsFetchers;
    void /* unknown type, empty encoding */ enqueuedOrder;
}

- (void).cxx_destruct;
- (id)init;
- (void)enqueueDownloadsForVideoManagedObjects:(id)a0;
- (void)handleErrors:(id)a0;
- (void)removeDownloadsForVideoManagedObjects:(id)a0;

@end
