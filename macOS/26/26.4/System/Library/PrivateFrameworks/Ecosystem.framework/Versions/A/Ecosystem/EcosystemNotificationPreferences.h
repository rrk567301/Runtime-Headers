@interface EcosystemNotificationPreferences : NSObject

+ (void)clearNotifications;
+ (BOOL)getNotifyOnRosettaUsagePreference;
+ (void)setNotifyOnRosettaUsagePreference:(BOOL)a0;

- (id)init;

@end
