@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMDAppleAccountSettings : HMFObject <HMFLogging> {
    struct hmf_unfair_data_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _lock;
}

@property (class, readonly) BOOL supportsCloudSettings;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic) BOOL migrated;
@property (readonly, getter=isHomeEnabled) BOOL homeEnabled;
@property (readonly, getter=isKeychainSyncEnabled) BOOL keychainSyncEnabled;
@property (readonly, getter=isManaged) BOOL managed;
@property (readonly, getter=isMultiUser) BOOL multiUser;

+ (id)logCategory;
+ (id)sharedSettings;

- (void)__synchronize;
- (id)init;
- (void)_notifyClientsOfUpdatedHomeState:(BOOL)a0 userInitiated:(BOOL)a1;
- (void)handleManateeAvailabilityNotification:(id)a0;
- (void)enableHome:(BOOL)a0 userInitiated:(BOOL)a1;
- (id)attributeDescriptions;
- (void)__updateHomeEnabled:(BOOL)a0 userInitiated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)updateHomeEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)__registerForKeychainChangeNotifications;
- (void)_notifyClientsOfUpdatedKeychainSyncState:(BOOL)a0;
- (void)__migrateHomePreferences;
- (void)synchronize;

@end
