@interface VUIPostPlayUpsellManager : NSObject {
    void /* unknown type, empty encoding */ playable;
    void /* unknown type, empty encoding */ notificationToken;
}

@property (class, nonatomic, readonly) VUIPostPlayUpsellManager *shared;

- (void)handleNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)beginMonitoringForUpsellOnExitWithPlayable:(id)a0;

@end
