@protocol BCCloudSecureUserDataManager, BDSSecureEngagementManaging, BCCloudSecureManaging;

@interface BookDataStore.CloudSecureManagerProxy : NSObject <BDSCloudKitSupportSignOutDissociate, BCCloudSecureManaging, BDSHandlesRemoteNotification> {
    void /* unknown type, empty encoding */ serviceProxy;
}

@property (class, nonatomic, retain) id<BCCloudSecureManaging> sharedManager;

@property (nonatomic, retain) id<BDSSecureEngagementManaging> engagementManager;
@property (nonatomic, retain) id<BCCloudSecureUserDataManager> userDataManager;

- (void).cxx_destruct;
- (id)init;
- (void)setEnableCloudSync:(BOOL)a0;
- (void)dissociateCloudDataFromSyncWithCompletion:(id /* block */)a0;
- (void)handleRemoteCKNotification:(id)a0;
- (void)handleRemoteNotification:(id)a0;

@end
