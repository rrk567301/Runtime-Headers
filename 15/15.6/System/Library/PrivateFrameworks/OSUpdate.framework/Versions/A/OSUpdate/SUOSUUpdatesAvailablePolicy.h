@class NSDictionary, NSArray, NSString, SUOSUProduct, NSDate, SUOSUCloudDevice, NSNumber;

@interface SUOSUUpdatesAvailablePolicy : NSObject

@property (retain) NSArray *eligibleProducts;
@property (retain) SUOSUProduct *minorProduct;
@property (retain) SUOSUProduct *majorProduct;
@property (retain) SUOSUProduct *splatProduct;
@property char splatAppliedRestartNow;
@property double minimumNotificationInterval;
@property char alreadyPostedFinalNotification;
@property char offerLater;
@property char restartRequired;
@property (retain) SUOSUCloudDevice *alignedCloudDevice;
@property (retain) NSArray *availableProducts;
@property (retain) NSDate *lastNotificationDate;
@property (retain) NSString *lastNotificationProductKey;
@property NSNumber *minimumNotificationIntervalOverride;
@property unsigned long long notificationCount;
@property (retain) NSDictionary *firstInstallTonightDates;
@property char availableProductsDownloaded;
@property char autoDownloadEnabled;
@property char notificationsDisabled;
@property char settingsIsActive;
@property char setupAssistantIsActive;
@property char ddmEnforcedWithin24Hours;
@property char majorOSUpdatesManaged;
@property char installTonightArmed;
@property char installInProgress;
@property struct { long long majorVersion; long long minorVersion; long long patchVersion; } currentOSVersion;
@property (retain) NSArray *cloudDevices;
@property (readonly) SUOSUProduct *primaryProduct;

+ (long long)_reminderDaysForCount:(unsigned long long)a0;
+ (long long)_reminderDaysForCount:(unsigned long long)a0 finalNotification:(char *)a1;

- (id)init;
- (void).cxx_destruct;
- (char)_nowExceedsLastNotificationDate;
- (void)_determineEligibleProducts;
- (void)_determineNotificationInterval;
- (unsigned long long)_determineNotificationType;
- (char)_shouldShowDeviceCompatibilityNotificationForDevice:(id *)a0;
- (char)_shouldShowNotificationWithReason:(id *)a0;
- (char)_shouldShowSecurityAdvisoryNotification;
- (char)shouldShowNotification:(unsigned long long *)a0;

@end
