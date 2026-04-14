@interface SUOSUUserPrefs : NSObject

+ (id)sharedInstance;

- (id)init;
- (void)setAutoUpdateMajorOSVersionPreference;
- (double)_timeIntervalWithPreferenceKey:(id)a0 defaultValue:(double)a1;
- (id)autoUpdateMajorOSVersionPreference;
- (double)availableUpdatesNotificationMinimumInterval;
- (double)criticalUpdatesNotificationMinimumInterval;
- (id)firstCriticalUpdateNotificationPostedDate;
- (id)lastPostedDDMUpdateNotificationDate;
- (id)lastPostedMDMUpdateRequestedNotificationDate;
- (id)lastPostedMajorOSUpdatesAvailableNotificationDate;
- (id)lastPostedRecommendedUpdateNotificationDate;
- (id)lastPostedSimulatedDILFailureNotificationDate;
- (id)lastPostedUpdatesAvailableNotificationDate;
- (id)majorOSNotificationDelay;
- (double)managedUpdatesNotificationMinimumInterval;
- (id)readMajorOSUpdatePrefs;
- (void)setFirstCriticalUpdateNotificationPostedToDate:(id)a0;
- (void)setLastPostedDDMUpdateNotificationDateToDate:(id)a0;
- (void)setLastPostedDDMUpdateNotificationDateToNow;
- (void)setLastPostedMDMUpdateRequestedNotificationDateToNow;
- (void)setLastPostedMDMUpdateRequestedNotificationToDate:(id)a0;
- (void)setLastPostedMajorOSUpdatesAvailableNotificationDateToNow;
- (void)setLastPostedMajorOSUpdatesAvailableNotificationToDate:(id)a0;
- (void)setLastPostedRecommendedUpdateNotificationDateToNow;
- (void)setLastPostedSimulatedDILFailureNotificationDateToNow;
- (void)setLastPostedUpdatesAvailableNotificationDateToNow;
- (void)setLastPostedUpdatesAvailableNotificationToDate:(id)a0;
- (void)writeMajorOSUpdatePrefs:(id)a0;

@end
