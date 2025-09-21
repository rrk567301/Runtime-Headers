@class NSNotificationCenter, NSString;

@interface HMDUserDefaultDataSource : NSObject <HMDUserDataSource>

@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (nonatomic, readonly) BOOL isThisDeviceDesignatedFMFDevice;
@property (nonatomic, readonly) NSString *fmfDeviceName;

- (id)init;
- (void)applyVoucherForModel:(id)a0 withModelID:(id)a1 eventType:(long long)a2 storeType:(unsigned long long)a3;
- (id)userDataControllerWithDelegate:(id)a0 dataSource:(id)a1 queue:(id)a2 userID:(id)a3 homeID:(id)a4 sharedSettingsController:(id)a5 privateSettingsController:(id)a6 isCurrentUser:(BOOL)a7;
- (BOOL)isCurrentUser:(id)a0;
- (id)userDataBackingStoreControllerWithDelegate:(id)a0 queue:(id)a1 zoneName:(id)a2 shareMessenger:(id)a3;

@end
