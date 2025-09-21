@class NSMutableDictionary, NSSet, NSUUID, HMDHome, NSNotificationCenter, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDAccessoryNetworkProtectionGroupRegistry : NSObject <HMFMessageReceiver, HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_groupRecords;
}

@property (readonly, weak, nonatomic) HMDHome *home;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy) NSSet *activeGroups;
@property (readonly, copy) NSSet *persistedGroups;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)configure;
- (id)logIdentifier;
- (char)_evaluateActiveStatusForGroupWithUUID:(id)a0;
- (void)_registerForAccessoryChanges:(id)a0;
- (void)_registerForMessages;
- (void)_setupActiveGroupsForHome;
- (void)_setupProtectionGroupForAccessory:(id)a0 shouldNotifyChange:(char)a1;
- (char)_updateGroupWithUUID:(id)a0 active:(char)a1;
- (id)accessoriesForGroupWithUUID:(id)a0;
- (char)addActiveSurrogateGroup:(id)a0;
- (void)addActiveSurrogateGroupForAccessory:(id)a0 shouldNotifyChange:(char)a1;
- (id)groupRecordWithUUID:(id)a0;
- (id)groupWithUUID:(id)a0;
- (void)handleAccessoryTransportAdded:(id)a0;
- (void)handleAddOrUpdateAccessoryNetworkProtectionGroupModel:(id)a0 message:(id)a1;
- (void)handleAddedAccessory:(id)a0;
- (void)handleRemoveAccessoryNetworkProtectionGroupModel:(id)a0 message:(id)a1;
- (void)handleRemovedAccessory:(id)a0;
- (void)handleUpdateAccessoryNetworkProtectionGroupProtectionMode:(id)a0;
- (void)handleUpdatedAccessoryConfiguredNetworkProtectionGroup:(id)a0;
- (void)handleUpdatedAccessoryInitialManufacturerOrCategory:(id)a0;
- (id)initWithHome:(id)a0 notificationCenter:(id)a1;
- (id)initWithHome:(id)a0 notificationCenter:(id)a1 persistedGroups:(id)a2;
- (id)markGroupWithUUID:(id)a0 active:(char)a1;
- (void)notifyClientsOfAddedGroup:(id)a0;
- (void)notifyClientsOfRemovedGroup:(id)a0;
- (id)removeGroupWithUUID:(id)a0;
- (long long)targetProtectionModeForGroupWithUUID:(id)a0;
- (char)updateTargetProtectionModeForGroupWithUUID:(id)a0 protectionMode:(long long)a1 error:(id *)a2;
- (char)updateTargetProtectionModeForGroupWithUUID:(id)a0 protectionMode:(long long)a1 error:(id *)a2 requestMessage:(id)a3;

@end
