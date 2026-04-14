@class MTObserverStore;

@interface MTSensitiveUIMonitor : NSObject

@property (retain, nonatomic) MTObserverStore *observers;
@property (nonatomic) int notifyToken;
@property (nonatomic) BOOL hideSensitiveUI;
@property (nonatomic) BOOL needPrefsUpdate;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;

+ (id)sharedMonitor;

- (void)removeSensitiveUIObserver:(id)a0;
- (void)registerForNotifications;
- (BOOL)_isVendorRelease;
- (void)unregisterForNotifications;
- (void)addSensitiveUIObserver:(id)a0;
- (void)_withLock:(id /* block */)a0;
- (BOOL)shouldHideForSensitivity:(long long)a0;
- (void).cxx_destruct;
- (void)_handleNotification;
- (id)init;
- (BOOL)_hideSensitiveUI;
- (void)dealloc;

@end
