@class NSOperationQueue;

@interface ACNotificationRebroadcaster : NSObject {
    id _daemonAccountStoreDidChangeObserver;
    NSOperationQueue *_queue;
}

@property (class, readonly) ACNotificationRebroadcaster *sharedRebroadcaster;

- (void)_endObservingAccountStoreDidChangeNotifications;
- (void)_accountStoreDidChange:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_beginObservingAccountStoreDidChangeNotifications;
- (void)dealloc;

@end
