@class NSOperationQueue;

@interface ACNotificationRebroadcaster : NSObject {
    id _daemonAccountStoreDidChangeObserver;
    NSOperationQueue *_queue;
}

@property (class, readonly) ACNotificationRebroadcaster *sharedRebroadcaster;

- (void)_accountStoreDidChange:(id)a0;
- (void)_beginObservingAccountStoreDidChangeNotifications;
- (void)_endObservingAccountStoreDidChangeNotifications;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
