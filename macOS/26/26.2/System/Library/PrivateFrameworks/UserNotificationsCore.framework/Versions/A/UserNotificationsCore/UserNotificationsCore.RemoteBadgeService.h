@interface UserNotificationsCore.RemoteBadgeService : NSObject <UNCBadgeService> {
    void /* unknown type, empty encoding */ systemServiceClient;
}

- (id)badgeNumberForBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)setBadgeValue:(id)a0 forBundleIdentifier:(id)a1;

@end
