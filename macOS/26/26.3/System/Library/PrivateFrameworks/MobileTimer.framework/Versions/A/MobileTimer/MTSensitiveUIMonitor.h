@class MTObserverStore;

@interface MTSensitiveUIMonitor : NSObject

@property (retain, nonatomic) MTObserverStore *observers;
@property (nonatomic) int notifyToken;
@property (nonatomic) BOOL hideSensitiveUI;
@property (nonatomic) BOOL needPrefsUpdate;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;

+ (id)sharedMonitor;

- (void)_withLock:(id /* block */)a0;
- (void)unregisterForNotifications;
- (BOOL)_isVendorRelease;
- (id)init;
- (BOOL)_hideSensitiveUI;
- (void)registerForNotifications;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_handleNotification;
- (BOOL)shouldHideForSensitivity:(long long)a0;
- (void)addSensitiveUIObserver:(id)a0;
- (void)removeSensitiveUIObserver:(id)a0;

@end
