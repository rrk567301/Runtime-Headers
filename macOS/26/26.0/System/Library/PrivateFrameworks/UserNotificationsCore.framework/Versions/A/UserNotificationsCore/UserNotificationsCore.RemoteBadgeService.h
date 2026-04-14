@interface UserNotificationsCore.RemoteBadgeService : NSObject <UNCBadgeService> {
    void /* unknown type, empty encoding */ systemServiceClient;
}

- (id)badgeNumberForBundleIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)setBadgeValue:(id)a0 forBundleIdentifier:(id)a1;

@end
