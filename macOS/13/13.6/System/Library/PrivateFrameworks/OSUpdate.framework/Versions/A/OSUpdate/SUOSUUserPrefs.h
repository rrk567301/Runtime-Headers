@interface SUOSUUserPrefs : NSObject

+ (id)sharedInstance;

- (id)init;
- (void)setAutoUpdateMajorOSVersionPreference;
- (id)_autoUpdateRetryCountsForUpdates;
- (double)_timeIntervalWithPreferenceKey:(id)a0 defaultValue:(double)a1;
- (id)autoUpdateMajorOSVersionPreference;
- (id)autoUpdateRetryCountForUpdate:(id)a0;
- (double)availableUpdatesNotificationMinimumInterval;
- (double)criticalUpdatesNotificationMinimumInterval;
- (id)firstCriticalUpdateNotificationPostedDate;
- (id)lastPostedMDMUpdateRequestedNotificationDate;
- (id)lastPostedMajorOSUpdatesAvailableNotificationDate;
- (id)lastPostedUpdatesAvailableNotificationDate;
- (id)majorOSNotificationBundlePath;
- (id)majorOSNotificationDelay;
- (double)managedUpdatesNotificationMinimumInterval;
- (id)readMajorOSUpdatePrefs;
- (void)removeAutoUpdateRetryCountForUpdateKey:(id)a0;
- (void)setAutoUpdateRetryCount:(id)a0 forUpdateKey:(id)a1;
- (void)setFirstCriticalUpdateNotificationPostedToDate:(id)a0;
- (void)setLastPostedMDMUpdateRequestedNotificationDateToNow;
- (void)setLastPostedMDMUpdateRequestedNotificationToDate:(id)a0;
- (void)setLastPostedMajorOSUpdatesAvailableNotificationDateToNow;
- (void)setLastPostedMajorOSUpdatesAvailableNotificationToDate:(id)a0;
- (void)setLastPostedUpdatesAvailableNotificationDateToNow;
- (void)setLastPostedUpdatesAvailableNotificationToDate:(id)a0;
- (void)writeMajorOSUpdatePrefs:(id)a0;

@end
