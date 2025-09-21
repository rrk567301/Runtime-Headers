@class NSOperationQueue;

@interface ACNotificationRebroadcaster : NSObject {
    id _daemonAccountStoreDidChangeObserver;
    NSOperationQueue *_queue;
}

@property (class, readonly) ACNotificationRebroadcaster *sharedRebroadcaster;

- (void)_accountStoreDidChange:(id)a0;
- (void)dealloc;
- (id)init;
- (void)_endObservingAccountStoreDidChangeNotifications;
- (void)_beginObservingAccountStoreDidChangeNotifications;
- (void).cxx_destruct;

@end
