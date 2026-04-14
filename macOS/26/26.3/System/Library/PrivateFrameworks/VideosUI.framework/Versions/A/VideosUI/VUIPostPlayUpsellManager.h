@interface VUIPostPlayUpsellManager : NSObject {
    void /* unknown type, empty encoding */ playable;
    void /* unknown type, empty encoding */ notificationToken;
}

@property (class, nonatomic, readonly) VUIPostPlayUpsellManager *shared;

- (id)init;
- (void)handleNotification:(id)a0;
- (void).cxx_destruct;
- (void)beginMonitoringForUpsellOnExitWithPlayable:(id)a0;

@end
