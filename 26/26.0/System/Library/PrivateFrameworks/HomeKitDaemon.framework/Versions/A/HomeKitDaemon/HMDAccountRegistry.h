@class NSArray, NSString, HMDRemoteAccountManager, HMDAppleAccountManager, NSObject;
@protocol OS_dispatch_queue;

@interface HMDAccountRegistry : HMCContextProvider <HMFLogging, NSFastEnumeration> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, nonatomic) HMDAccountRegistry *sharedRegistry;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, weak) HMDAppleAccountManager *appleAccountManager;
@property (readonly, weak) HMDRemoteAccountManager *remoteAccountManager;
@property (readonly) BOOL started;
@property (readonly, nonatomic) NSArray *accounts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)logCategory;

- (id)deviceForIdentifier:(id)a0;
- (void)removeAccount:(id)a0;
- (void)addAccount:(id)a0 isLocal:(BOOL)a1;
- (id)deviceForHandle:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)deviceForHandle:(id)a0 exists:(BOOL *)a1;
- (id)accountForHandle:(id)a0;
- (void)reset;
- (void)start;
- (id)deviceForDevice:(id)a0 exists:(BOOL *)a1;
- (id)deviceForAddress:(id)a0;
- (id)existingAccountWithMergeIdentifier:(id)a0;
- (void)removeDevice:(id)a0 fromAccount:(id)a1;
- (void)stop;
- (id)attributeDescriptions;
- (void)__handleAppleAccountDeviceAdded:(id)a0;
- (void)__handleAddedRemoteAccount:(id)a0;
- (id)deviceForIDSIdentifier:(id)a0;
- (id)accountForHandle:(id)a0 exists:(BOOL *)a1;
- (void)updateAccount:(id)a0;
- (void)updateDevice:(id)a0 toVersion:(id)a1;
- (id)updateDevices:(id)a0 onAccount:(id)a1;
- (void)__handleRemovedRemoteAccount:(id)a0;
- (void)accountInformationChanged:(id)a0;
- (BOOL)accountExistsForHandle:(id)a0;
- (void)addHandle:(id)a0 toAccount:(id)a1;
- (void)__handleAppleAccountHandlesUpdated:(id)a0;
- (void)addDevice:(id)a0 toAccount:(id)a1;
- (void)__handleAppleAccountUpdate:(id)a0;
- (void)_resolveAccountForHandle:(id)a0 completionHandler:(id /* block */)a1;
- (id)fetchAccountsWithLocalFlag:(BOOL)a0;
- (id)findBackingModelFromDevice:(id)a0;
- (void)updateDevice:(id)a0 withDevice:(id)a1;
- (void)removeHandle:(id)a0 fromAccount:(id)a1;
- (id)deviceForDevice:(id)a0;
- (id)deviceForPushToken:(id)a0;
- (void)registerForDatabaseChanges;
- (id)initWithAppleAccountManager:(id)a0 remoteAccountManager:(id)a1 context:(id)a2;
- (BOOL)deviceExistsForDevice:(id)a0;
- (void).cxx_destruct;

@end
