@interface UNCNotificationSourceSettingsDescription : NSObject

@property (nonatomic) char supportsSounds;
@property (nonatomic) char supportsAlerts;
@property (nonatomic) char supportsBadges;
@property (nonatomic) char supportsLockScreen;
@property (nonatomic) char supportsNotificationCenter;
@property (nonatomic) char supportsCarPlay;
@property (nonatomic) char supportsSpoken;
@property (nonatomic) char modalAlertStyle;
@property (nonatomic) char alwaysShowPreviews;
@property (nonatomic) char providesAppNotificationSettings;
@property (nonatomic) char supportsTimeSensitive;
@property (nonatomic) char supportsCriticalAlerts;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;

@end
