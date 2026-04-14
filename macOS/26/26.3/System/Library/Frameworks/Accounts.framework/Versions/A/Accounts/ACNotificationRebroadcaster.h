@class NSOperationQueue;

@interface ACNotificationRebroadcaster : NSObject {
    id _daemonAccountStoreDidChangeObserver;
    NSOperationQueue *_queue;
}

@property (class, readonly) ACNotificationRebroadcaster *sharedRebroadcaster;

- (void)_beginObservingAccountStoreDidChangeNotifications;
- (id)init;
- (void)_accountStoreDidChange:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_endObservingAccountStoreDidChangeNotifications;

@end
