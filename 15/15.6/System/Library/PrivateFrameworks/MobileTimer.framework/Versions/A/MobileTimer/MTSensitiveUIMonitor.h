@class MTObserverStore;

@interface MTSensitiveUIMonitor : NSObject

@property (retain, nonatomic) MTObserverStore *observers;
@property (nonatomic) int notifyToken;
@property (nonatomic) char hideSensitiveUI;
@property (nonatomic) char needPrefsUpdate;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;

+ (id)sharedMonitor;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)registerForNotifications;
- (void)unregisterForNotifications;
- (void)_withLock:(id /* block */)a0;
- (void)_handleNotification;
- (char)_hideSensitiveUI;
- (char)_isVendorRelease;
- (void)addSensitiveUIObserver:(id)a0;
- (void)removeSensitiveUIObserver:(id)a0;
- (char)shouldHideForSensitivity:(long long)a0;

@end
