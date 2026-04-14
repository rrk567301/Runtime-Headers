@class NSNumber, NSString, NSHashTable;

@interface SKASystemMonitor : NSObject <SKASystemMonitoring>

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ivarLock;
@property (nonatomic) BOOL underFirstLock;
@property (retain, nonatomic) NSNumber *isFirstProcessLaunch;
@property (retain, nonatomic) NSHashTable *listeners;
@property (readonly, nonatomic) BOOL isUnderFirstDataProtectionLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)logger;

- (void)addListener:(id)a0;
- (void)removeListener:(id)a0;
- (void)recordBootSessionUUID:(id)a0;
- (BOOL)_deviceStillUnderFirstLock;
- (void)_listenForKeyBagChangeNotifications;
- (void)_deliverNotificationSelectorToListeners:(SEL)a0;
- (void)_updateLockState;
- (void).cxx_destruct;
- (BOOL)isFirstProcessLaunchOfBootSession;
- (id)getBootSessionUUID;
- (id)init;

@end
