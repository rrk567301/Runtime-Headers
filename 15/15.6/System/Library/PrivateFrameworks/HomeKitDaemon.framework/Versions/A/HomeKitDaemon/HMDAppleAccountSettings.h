@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMDAppleAccountSettings : HMFObject <HMFLogging> {
    struct hmf_unfair_data_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _lock;
}

@property (class, readonly) char supportsCloudSettings;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, getter=isEducationMode) char educationMode;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic) char migrated;
@property (readonly, getter=isHomeEnabled) char homeEnabled;
@property (readonly, getter=isKeychainSyncEnabled) char keychainSyncEnabled;
@property (readonly, getter=isManaged) char managed;
@property (readonly, getter=isEphemeral) char ephemeral;

+ (id)logCategory;
+ (id)sharedSettings;

- (id)init;
- (void).cxx_destruct;
- (void)synchronize;
- (void)__synchronize;
- (id)attributeDescriptions;
- (void)__migrateHomePreferences;
- (void)__registerForKeychainChangeNotifications;
- (void)__updateHomeEnabled:(char)a0 userInitiated:(char)a1 completionHandler:(id /* block */)a2;
- (void)_notifyClientsOfUpdatedHomeState:(char)a0 userInitiated:(char)a1;
- (void)_notifyClientsOfUpdatedKeychainSyncState:(char)a0;
- (void)enableHome:(char)a0 userInitiated:(char)a1;
- (void)handleManateeAvailabilityNotification:(id)a0;
- (void)updateHomeEnabled:(char)a0 completionHandler:(id /* block */)a1;

@end
