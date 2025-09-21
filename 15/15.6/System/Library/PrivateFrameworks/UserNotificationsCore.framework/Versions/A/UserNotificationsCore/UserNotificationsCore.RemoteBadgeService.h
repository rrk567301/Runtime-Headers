@interface UserNotificationsCore.RemoteBadgeService : NSObject <UNCBadgeService> {
    void /* unknown type, empty encoding */ systemServiceClient;
}

- (id)init;
- (void).cxx_destruct;
- (id)badgeNumberForBundleIdentifier:(id)a0;
- (char)setBadgeValue:(id)a0 forBundleIdentifier:(id)a1;

@end
