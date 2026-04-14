@protocol BCCloudSecureUserDataManager, BDSSecureEngagementManaging, BCCloudSecureManaging;

@interface BookDataStore.CloudSecureManagerProxy : NSObject <BDSCloudKitSupportSignOutDissociate, BCCloudSecureManaging, BDSHandlesRemoteNotification> {
    void /* unknown type, empty encoding */ serviceProxy;
}

@property (class, nonatomic, retain) id<BCCloudSecureManaging> sharedManager;

@property (nonatomic, retain) id<BDSSecureEngagementManaging> engagementManager;
@property (nonatomic, retain) id<BCCloudSecureUserDataManager> userDataManager;

- (id)init;
- (void).cxx_destruct;
- (void)setEnableCloudSync:(BOOL)a0;
- (void)dissociateCloudDataFromSyncWithCompletion:(id /* block */)a0;
- (void)handleRemoteCKNotification:(id)a0;
- (void)handleRemoteNotification:(id)a0;

@end
