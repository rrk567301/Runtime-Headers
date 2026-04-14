@interface UserNotificationsCore.RemoteBadgeService : NSObject <UNCBadgeService> {
    void /* unknown type, empty encoding */ systemServiceClient;
}

- (void).cxx_destruct;
- (id)init;
- (id)badgeNumberForBundleIdentifier:(id)a0;
- (BOOL)setBadgeValue:(id)a0 forBundleIdentifier:(id)a1;

@end
