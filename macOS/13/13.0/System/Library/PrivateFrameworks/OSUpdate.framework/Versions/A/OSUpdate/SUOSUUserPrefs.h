@interface SUOSUUserPrefs : NSObject

+ (id)sharedInstance;

- (id)init;
- (void)setAutoUpdateMajorOSVersionPreference;
- (id)autoUpdateMajorOSVersionPreference;
- (void)setAutoUpdateRetryCount:(id)a0 forUpdateKey:(id)a1;
- (void)removeAutoUpdateRetryCountForUpdateKey:(id)a0;
- (id)_autoUpdateRetryCountsForUpdates;
- (id)autoUpdateRetryCountForUpdate:(id)a0;
- (id)lastPostedUpdatesAvailableNotificationDate;
- (id)lastPostedMajorOSUpdatesAvailableNotificationDate;
- (id)lastPostedMDMUpdateRequestedNotificationDate;
- (void)setLastPostedUpdatesAvailableNotificationDateToNow;
- (void)setLastPostedUpdatesAvailableNotificationToDate:(id)a0;
- (void)setLastPostedMajorOSUpdatesAvailableNotificationDateToNow;
- (void)setLastPostedMajorOSUpdatesAvailableNotificationToDate:(id)a0;
- (void)setLastPostedMDMUpdateRequestedNotificationDateToNow;
- (void)setLastPostedMDMUpdateRequestedNotificationToDate:(id)a0;
- (double)_timeIntervalWithPreferenceKey:(id)a0 defaultValue:(double)a1;
- (id)firstCriticalUpdateNotificationPostedDate;
- (void)setFirstCriticalUpdateNotificationPostedToDate:(id)a0;
- (double)criticalUpdatesNotificationMinimumInterval;
- (double)availableUpdatesNotificationMinimumInterval;
- (double)managedUpdatesNotificationMinimumInterval;
- (id)majorOSNotificationBundlePath;
- (void)writeMajorOSUpdatePrefs:(id)a0;
- (id)readMajorOSUpdatePrefs;
- (id)majorOSNotificationDelay;

@end
