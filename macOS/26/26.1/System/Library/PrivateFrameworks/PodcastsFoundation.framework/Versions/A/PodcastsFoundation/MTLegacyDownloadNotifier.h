@class NSMutableArray;

@interface MTLegacyDownloadNotifier : NSObject

@property (retain, nonatomic) NSMutableArray *downloadListeners;

- (void).cxx_destruct;
- (id)init;
- (void)unregisterForUpdates:(id)a0;
- (id)_listenerWithDelegate:(id)a0;
- (void)_sendDelegateSelector:(SEL)a0 withDownload:(id)a1;
- (void)_sendDelegateSelector:(SEL)a0 withDownloadCount:(id)a1;
- (void)_sendDelegateSelector:(SEL)a0 withDownloads:(id)a1;
- (void)registerForUpdates:(id)a0;

@end
