@class MTObserverStore;

@interface MTSensitiveUIMonitor : NSObject

@property (retain, nonatomic) MTObserverStore *observers;
@property (nonatomic) int notifyToken;
@property (nonatomic) BOOL hideSensitiveUI;
@property (nonatomic) BOOL needPrefsUpdate;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;

+ (id)sharedMonitor;

- (void)_withLock:(id /* block */)a0;
- (void)removeSensitiveUIObserver:(id)a0;
- (BOOL)shouldHideForSensitivity:(long long)a0;
- (void)addSensitiveUIObserver:(id)a0;
- (BOOL)_isVendorRelease;
- (void)dealloc;
- (void)registerForNotifications;
- (void)unregisterForNotifications;
- (void)_handleNotification;
- (void).cxx_destruct;
- (BOOL)_hideSensitiveUI;
- (id)init;

@end
