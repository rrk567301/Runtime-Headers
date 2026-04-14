@interface SUOSUUserPrefs : NSObject

+ (id)sharedInstance;

- (id)init;
- (void)setAutoUpdateMajorOSVersionPreference;
- (void)setAutoUpdateRetryCount:(id)a0 forUpdateKey:(id)a1;
- (id)firstCriticalUpdateNotificationPostedDate;
- (id)_autoUpdateRetryCountsForUpdates;
- (void)setLastPostedUpdatesAvailableNotificationToDate:(id)a0;
- (void)setLastPostedMajorOSUpdatesAvailableNotificationToDate:(id)a0;
- (void)setLastPostedMDMUpdateRequestedNotificationToDate:(id)a0;
- (double)_timeIntervalWithPreferenceKey:(id)a0 defaultValue:(double)a1;
- (id)autoUpdateMajorOSVersionPreference;
- (void)removeAutoUpdateRetryCountForUpdateKey:(id)a0;
- (id)autoUpdateRetryCountForUpdate:(id)a0;
- (id)lastPostedUpdatesAvailableNotificationDate;
- (id)lastPostedMajorOSUpdatesAvailableNotificationDate;
- (id)lastPostedMDMUpdateRequestedNotificationDate;
- (void)setLastPostedUpdatesAvailableNotificationDateToNow;
- (void)setLastPostedMajorOSUpdatesAvailableNotificationDateToNow;
- (void)setLastPostedMDMUpdateRequestedNotificationDateToNow;
- (void)setFirstCriticalUpdateNotificationPostedToDate:(id)a0;
- (double)criticalUpdatesNotificationMinimumInterval;
- (double)availableUpdatesNotificationMinimumInterval;
- (double)managedUpdatesNotificationMinimumInterval;
- (id)majorOSNotificationBundlePath;
- (void)writeMajorOSUpdatePrefs:(id)a0;
- (id)readMajorOSUpdatePrefs;
- (id)majorOSNotificationDelay;

@end
