@interface MTPurchaseControllerWrapper : NSObject {
    void /* unknown type, empty encoding */ purchaseController;
}

@property (class, nonatomic, readonly) MTPurchaseControllerWrapper *sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)fetchChannelUpdatesCheckingEntitlementsNotification;
- (void)forceFetchLatestChannelUpdates;
- (void)syncMusicSubscriptionInformation;

@end
