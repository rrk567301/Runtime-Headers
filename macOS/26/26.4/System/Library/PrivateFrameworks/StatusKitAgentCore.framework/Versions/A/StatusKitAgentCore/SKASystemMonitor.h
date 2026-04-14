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

- (void)removeListener:(id)a0;
- (void)addListener:(id)a0;
- (void)_deliverNotificationSelectorToListeners:(SEL)a0;
- (void)recordBootSessionUUID:(id)a0;
- (BOOL)_deviceStillUnderFirstLock;
- (BOOL)isFirstProcessLaunchOfBootSession;
- (void).cxx_destruct;
- (void)_listenForKeyBagChangeNotifications;
- (id)init;
- (id)getBootSessionUUID;
- (void)_updateLockState;

@end
