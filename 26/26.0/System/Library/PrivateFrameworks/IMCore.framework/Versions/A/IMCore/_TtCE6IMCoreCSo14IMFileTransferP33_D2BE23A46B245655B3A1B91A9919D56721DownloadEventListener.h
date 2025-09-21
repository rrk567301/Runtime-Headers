@interface _TtCE6IMCoreCSo14IMFileTransferP33_D2BE23A46B245655B3A1B91A9919D56721DownloadEventListener : NSObject {
    void /* unknown type, empty encoding */ isWaiting;
    void /* unknown type, empty encoding */ fileTransfer;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)downloadCreatedWithNotification:(id)a0;
- (void)downloadFinishedWithNotification:(id)a0;
- (void)downloadRejectedWithNotification:(id)a0;
- (void)downloadUpdatedWithNotification:(id)a0;
- (void)downloadedRemovedWithNotification:(id)a0;

@end
