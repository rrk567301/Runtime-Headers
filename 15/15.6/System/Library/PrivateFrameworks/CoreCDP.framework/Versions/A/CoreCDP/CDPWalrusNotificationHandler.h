@interface CDPWalrusNotificationHandler : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observerLock;
    char _isObservingWalrusStatus;
}

@property (readonly, nonatomic) char isObservingWalrusStatus;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)_stopObservingWalrusStateChangeNotification;
- (void)startObservingWalrusStateChangeNotification;

@end
