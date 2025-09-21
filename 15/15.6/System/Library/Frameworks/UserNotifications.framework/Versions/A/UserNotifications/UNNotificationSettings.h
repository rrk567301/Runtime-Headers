@interface UNNotificationSettings : NSObject <NSMutableCopying, NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) long long groupingSetting;
@property (readonly) long long remoteNotificationsSetting;
@property (readonly) long long summarizationSetting;
@property (readonly) long long prioritizationSetting;
@property (readonly) long long authorizationStatus;
@property (readonly) long long soundSetting;
@property (readonly) long long badgeSetting;
@property (readonly) long long alertSetting;
@property (readonly) long long notificationCenterSetting;
@property (readonly) long long lockScreenSetting;
@property (readonly) long long carPlaySetting;
@property (readonly) long long alertStyle;
@property (readonly) long long showPreviewsSetting;
@property (readonly) long long criticalAlertSetting;
@property (readonly) char providesAppNotificationSettings;
@property (readonly) long long announcementSetting;
@property (readonly) long long timeSensitiveSetting;
@property (readonly) long long scheduledDeliverySetting;
@property (readonly) long long directMessagesSetting;

+ (id)emptySettings;
+ (id)settingsWithAuthorizationStatus:(long long)a0 soundSetting:(long long)a1 badgeSetting:(long long)a2 alertSetting:(long long)a3 notificationCenterSetting:(long long)a4 lockScreenSetting:(long long)a5 carPlaySetting:(long long)a6 announcementSetting:(long long)a7 criticalAlertSetting:(long long)a8 alertStyle:(long long)a9 showPreviewsSetting:(long long)a10 groupingSetting:(long long)a11 providesAppNotificationSettings:(char)a12;
+ (id)settingsWithAuthorizationStatus:(long long)a0 soundSetting:(long long)a1 badgeSetting:(long long)a2 alertSetting:(long long)a3 notificationCenterSetting:(long long)a4 lockScreenSetting:(long long)a5 carPlaySetting:(long long)a6 announcementSetting:(long long)a7 criticalAlertSetting:(long long)a8 timeSensitiveSetting:(long long)a9 alertStyle:(long long)a10 showPreviewsSetting:(long long)a11 groupingSetting:(long long)a12 providesAppNotificationSettings:(char)a13;
+ (id)settingsWithAuthorizationStatus:(long long)a0 soundSetting:(long long)a1 badgeSetting:(long long)a2 alertSetting:(long long)a3 notificationCenterSetting:(long long)a4 lockScreenSetting:(long long)a5 carPlaySetting:(long long)a6 announcementSetting:(long long)a7 criticalAlertSetting:(long long)a8 timeSensitiveSetting:(long long)a9 scheduledDeliverySetting:(long long)a10 alertStyle:(long long)a11 showPreviewsSetting:(long long)a12 groupingSetting:(long long)a13 providesAppNotificationSettings:(char)a14;
+ (id)settingsWithAuthorizationStatus:(long long)a0 soundSetting:(long long)a1 badgeSetting:(long long)a2 alertSetting:(long long)a3 notificationCenterSetting:(long long)a4 lockScreenSetting:(long long)a5 carPlaySetting:(long long)a6 announcementSetting:(long long)a7 criticalAlertSetting:(long long)a8 timeSensitiveSetting:(long long)a9 scheduledDeliverySetting:(long long)a10 directMessagesSetting:(long long)a11 alertStyle:(long long)a12 showPreviewsSetting:(long long)a13 groupingSetting:(long long)a14 providesAppNotificationSettings:(char)a15;
+ (id)settingsWithAuthorizationStatus:(long long)a0 soundSetting:(long long)a1 badgeSetting:(long long)a2 alertSetting:(long long)a3 notificationCenterSetting:(long long)a4 lockScreenSetting:(long long)a5 carPlaySetting:(long long)a6 remoteNotificationsSetting:(long long)a7 announcementSetting:(long long)a8 criticalAlertSetting:(long long)a9 timeSensitiveSetting:(long long)a10 scheduledDeliverySetting:(long long)a11 directMessagesSetting:(long long)a12 alertStyle:(long long)a13 showPreviewsSetting:(long long)a14 groupingSetting:(long long)a15 providesAppNotificationSettings:(char)a16;
+ (id)settingsWithAuthorizationStatus:(long long)a0 soundSetting:(long long)a1 badgeSetting:(long long)a2 alertSetting:(long long)a3 notificationCenterSetting:(long long)a4 lockScreenSetting:(long long)a5 carPlaySetting:(long long)a6 remoteNotificationsSetting:(long long)a7 announcementSetting:(long long)a8 criticalAlertSetting:(long long)a9 timeSensitiveSetting:(long long)a10 scheduledDeliverySetting:(long long)a11 directMessagesSetting:(long long)a12 summarizationSetting:(long long)a13 alertStyle:(long long)a14 showPreviewsSetting:(long long)a15 groupingSetting:(long long)a16 providesAppNotificationSettings:(char)a17;
+ (id)settingsWithAuthorizationStatus:(long long)a0 soundSetting:(long long)a1 badgeSetting:(long long)a2 alertSetting:(long long)a3 notificationCenterSetting:(long long)a4 lockScreenSetting:(long long)a5 carPlaySetting:(long long)a6 remoteNotificationsSetting:(long long)a7 announcementSetting:(long long)a8 criticalAlertSetting:(long long)a9 timeSensitiveSetting:(long long)a10 scheduledDeliverySetting:(long long)a11 directMessagesSetting:(long long)a12 summarizationSetting:(long long)a13 prioritizationSetting:(long long)a14 alertStyle:(long long)a15 showPreviewsSetting:(long long)a16 groupingSetting:(long long)a17 providesAppNotificationSettings:(char)a18;
+ (id)settingsWithAuthorizationStatus:(long long)a0 soundSetting:(long long)a1 badgeSetting:(long long)a2 alertSetting:(long long)a3 notificationCenterSetting:(long long)a4 lockScreenSetting:(long long)a5 carPlaySetting:(long long)a6 spokenSetting:(long long)a7 criticalAlertSetting:(long long)a8 alertStyle:(long long)a9 showPreviewsSetting:(long long)a10 providesAppNotificationSettings:(char)a11;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)hasEnabledAlertSettings;
- (char)hasEnabledSettings;
- (id)initWithAuthorizationStatus:(long long)a0 soundSetting:(long long)a1 badgeSetting:(long long)a2 alertSetting:(long long)a3 notificationCenterSetting:(long long)a4 lockScreenSetting:(long long)a5 carPlaySetting:(long long)a6 remoteNotificationsSetting:(long long)a7 announcementSetting:(long long)a8 criticalAlertSetting:(long long)a9 timeSensitiveSetting:(long long)a10 scheduledDeliverySetting:(long long)a11 directMessagesSetting:(long long)a12 summarizationSetting:(long long)a13 prioritizationSetting:(long long)a14 alertStyle:(long long)a15 showPreviewsSetting:(long long)a16 groupingSetting:(long long)a17 providesAppNotificationSettings:(char)a18;
- (char)isEligibleForIndexing;

@end
