@class NSUserDefaults, HKSPObserverSet;

@interface HKSPSensitiveUIMonitor : NSObject

@property (readonly, nonatomic) HKSPObserverSet *observers;
@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (readonly, nonatomic) BOOL sensitiveUIOverridden;
@property (readonly, nonatomic) BOOL hideSensitiveUI;
@property (readonly, nonatomic) BOOL needPrefsUpdate;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (nonatomic, getter=isCurrentSensitiveUIHidden) BOOL currentSensitiveUIHidden;

+ (id)sharedMonitor;

- (id)initWithCallbackScheduler:(id)a0;
- (void)removeObserver:(id)a0;
- (BOOL)shouldHideForSensitivity:(long long)a0;
- (void)_withLock:(id /* block */)a0;
- (void)addObserver:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)registerForNotifications;
- (BOOL)_isVendorRelease;
- (void).cxx_destruct;
- (BOOL)_hideSensitiveUI;
- (void)unregisterForNotifications;
- (void)_handleNotification;
- (void)dealloc;
- (void)overrideHideSensitiveUI:(BOOL)a0;

@end
