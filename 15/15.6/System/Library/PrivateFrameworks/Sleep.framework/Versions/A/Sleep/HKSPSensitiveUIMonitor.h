@class NSUserDefaults, HKSPObserverSet;

@interface HKSPSensitiveUIMonitor : NSObject

@property (readonly, nonatomic) HKSPObserverSet *observers;
@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (readonly, nonatomic) char sensitiveUIOverridden;
@property (readonly, nonatomic) char hideSensitiveUI;
@property (readonly, nonatomic) char needPrefsUpdate;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (nonatomic, getter=isCurrentSensitiveUIHidden) char currentSensitiveUIHidden;

+ (id)sharedMonitor;

- (void)dealloc;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)registerForNotifications;
- (void)unregisterForNotifications;
- (void)_withLock:(id /* block */)a0;
- (void)_handleNotification;
- (char)_hideSensitiveUI;
- (char)_isVendorRelease;
- (id)initWithCallbackScheduler:(id)a0;
- (char)shouldHideForSensitivity:(long long)a0;
- (void)overrideHideSensitiveUI:(char)a0;

@end
