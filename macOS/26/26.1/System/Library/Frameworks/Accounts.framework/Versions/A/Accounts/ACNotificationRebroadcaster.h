@class NSOperationQueue;

@interface ACNotificationRebroadcaster : NSObject {
    id _daemonAccountStoreDidChangeObserver;
    NSOperationQueue *_queue;
}

@property (class, readonly) ACNotificationRebroadcaster *sharedRebroadcaster;

- (void)_endObservingAccountStoreDidChangeNotifications;
- (void)_accountStoreDidChange:(id)a0;
- (void)dealloc;
- (void)_beginObservingAccountStoreDidChangeNotifications;
- (void).cxx_destruct;
- (id)init;

@end
