@class NSCalendar, HDProfile, NSDateInterval, HDHeartDailyAnalytics, NSUserDefaults;

@interface HDHeartDailyAnalyticsBuilder : NSObject {
    HDProfile *_profile;
    HDHeartDailyAnalytics *_heartDailyAnalytics;
    NSUserDefaults *_heartRateNotificationsUserDefaults;
    NSUserDefaults *_heartRhythmUserDefaults;
    NSUserDefaults *_remoteFeatureAvailabilityUserDefaults;
    char _isHealthDataSubmissionAllowed;
    NSCalendar *_calendar;
    NSDateInterval *_dateInterval;
    char _areHealthNotificationsAuthorized;
}

- (void).cxx_destruct;
- (id)heartDailyAnalyticsWithError:(id *)a0;
- (id)initWithProfile:(id)a0 calendar:(id)a1 dateInterval:(id)a2 heartRateNotificationsUserDefaults:(id)a3 heartRhythmUserDefaults:(id)a4 remoteFeatureAvailabilityUserDefaults:(id)a5 areHealthNotificationsAuthorized:(char)a6 isHealthDataSubmissionAllowed:(char)a7;

@end
