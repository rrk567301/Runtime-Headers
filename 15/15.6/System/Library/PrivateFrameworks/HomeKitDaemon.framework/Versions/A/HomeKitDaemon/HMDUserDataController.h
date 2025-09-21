@class NSUUID, NSString, HMFTimer, NSArray, NSDictionary, HMBModel, NSMutableSet, NSObject, NSNotificationCenter;
@protocol HMDUserDataControllerTimerCreator, HMDSettingsControllerProtocol, HMDUserDataControllerDelegate, OS_dispatch_queue, HMDUserDataControllerDataSource;

@interface HMDUserDataController : NSObject <HMDAssistantAccessControlModelUpdateReceiver, HMDMediaContentProfileAccessControlModelUpdateReceiver, HMDUserListeningHistoryUpdateControlModelUpdateReceiver, HMDSharedUserDataModelUpdateReceiver, HMFLogging, HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    char _isModifyingState;
}

@property (readonly) NSUUID *homeUUID;
@property (readonly) NSUUID *userUUID;
@property (readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, weak) id<HMDUserDataControllerDelegate> delegate;
@property (readonly, weak) id<HMDUserDataControllerDataSource> dataSource;
@property (readonly) id<HMDUserDataControllerTimerCreator> timerCreator;
@property (retain) NSUUID *sharedSettingsRootUUID;
@property (retain) NSUUID *assistantAccessControlModelUUID;
@property (retain) NSMutableSet *assistantAccessControlAccessoryUUIDs;
@property char assistantAccessControlRequiresAuthenticationForSecureRequests;
@property char assistantAccessControlActivityNotificationsEnabledForPersonalRequests;
@property (retain) NSUUID *mediaContentProfileAccessControlModelUUID;
@property (retain) NSMutableSet *mediaContentProfileAccessControlAccessories;
@property (retain) NSUUID *userListeningHistoryUpdateControlModelUUID;
@property (retain) NSMutableSet *userListeningHistoryUpdateControlModelAccessories;
@property (retain) NSUUID *privateSettingsRootUUID;
@property unsigned long long state;
@property (retain, nonatomic) HMFTimer *sharedZoneFirstLoadTimer;
@property (retain, nonatomic) HMFTimer *privateZoneFirstLoadTimer;
@property (retain) NSNotificationCenter *notificationCenter;
@property (readonly) char isCurrentUser;
@property (readonly) id<HMDSettingsControllerProtocol> sharedSettingsController;
@property (readonly) id<HMDSettingsControllerProtocol> privateSettingsController;
@property (readonly, copy) NSArray *assistantAccessControlAccessoriesToEncode;
@property (readonly, copy) NSArray *mediaContentProfileAccessControlAccessoriesToEncode;
@property (readonly, copy) NSArray *userListeningHistoryUpdateControlModelAccessoriesToEncode;
@property (readonly, copy) NSDictionary *sharedSettingValuesByKeyPath;
@property (readonly, copy) NSDictionary *privateSettingValuesByKeyPath;
@property (readonly, copy) HMBModel *assistantAccessControlModelToReset;
@property (readonly) char isInitialized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (void)configure;
- (id)logIdentifier;
- (void)timerDidFire:(id)a0;
- (void)_startPrivateZoneFirstLoadTimer;
- (void)_invalidatePrivateZoneFirstLoadTimer;
- (void)_invalidateSharedZoneFirstLoadTimer;
- (void)_startSharedZoneFirstLoadTimer;
- (void)_startupPrivateZone;
- (void)_startupSharedZone;
- (void)assistantAccessControlModelRemoved:(id)a0 completion:(id /* block */)a1;
- (void)assistantAccessControlModelUpdated:(id)a0 previousModel:(id)a1 completion:(id /* block */)a2;
- (void)enableUserListeningHistoryForAccessory:(id)a0;
- (void)eventDidInitializePrivateZone;
- (void)eventDidInitializeSharedZone;
- (void)handleAssistantAccessControlAccessoryUUIDsUpdated:(id)a0 requireAuthenticationForSecureRequests:(char)a1 activityNotificationsEnabledForPersonalRequests:(char)a2 completion:(id /* block */)a3;
- (void)handleMediaContentProfileAccessControlUpdatedAccessoryUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)handleRemovedAccessory:(id)a0;
- (void)handleStartForZoneController:(id)a0;
- (void)handleUserListeningHistoryUpdateControlUpdatedAccessoryUUIDs:(id)a0 completion:(id /* block */)a1;
- (id)initWithDelegate:(id)a0 dataSource:(id)a1 queue:(id)a2 userID:(id)a3 homeID:(id)a4 sharedSettingsController:(id)a5 privateSettingsController:(id)a6 isCurrentUser:(char)a7;
- (id)initWithDelegate:(id)a0 dataSource:(id)a1 queue:(id)a2 userID:(id)a3 homeID:(id)a4 sharedSettingsController:(id)a5 privateSettingsController:(id)a6 timerCreator:(id)a7 isCurrentUser:(char)a8;
- (void)initializePrivateZoneController:(id)a0 userDataModel:(id)a1;
- (void)initializeSharedZoneController:(id)a0 userDataModel:(id)a1;
- (void)mediaContentProfileAccessControlModelRemoved:(id)a0 completion:(id /* block */)a1;
- (void)mediaContentProfileAccessControlModelUpdated:(id)a0 previousModel:(id)a1 completion:(id /* block */)a2;
- (void)performFirstRunOperationsOnPrivateZoneController:(id)a0;
- (void)performFirstRunOperationsOnSharedZoneController:(id)a0;
- (void)sharedUserDataModelUpdated:(id)a0 previousModel:(id)a1 completion:(id /* block */)a2;
- (long long)sharedUserSettingsLogEventBackingStoreControllerRunState;
- (id)updateListeningHistoryModelToReset;
- (void)userListeningHistoryUpdateControlModelRemoved:(id)a0 completion:(id /* block */)a1;
- (void)userListeningHistoryUpdateControlModelUpdated:(id)a0 previousModel:(id)a1 completion:(id /* block */)a2;

@end
