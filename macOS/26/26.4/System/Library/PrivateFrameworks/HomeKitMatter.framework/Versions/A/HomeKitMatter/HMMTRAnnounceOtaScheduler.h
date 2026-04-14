@class NSCalendar, NSTimeZone;

@interface HMMTRAnnounceOtaScheduler : HMFObject

@property (retain) NSCalendar *calendar;
@property (readonly, nonatomic) NSTimeZone *homeTimeZone;

- (id)init:(id)a0;
- (void).cxx_destruct;
- (BOOL)isWithinUpdateTimeWindow;
- (double)secondsUntilInstallationWindowBegin;
- (id)_currentTimeComponents;
- (long long)_getSoftwareInstallingWindowBeginHour;
- (long long)_getSoftwareInstallingWindowBeginMinute;
- (long long)_getSoftwareInstallingWindowBeginSecond;
- (long long)_getSoftwareInstallingWindowEndHour;
- (long long)_getSoftwareInstallingWindowEndMinute;
- (long long)_getSoftwareInstallingWindowEndSecond;
- (id)_homeCalendar;
- (BOOL)_isWithinUpdateTimeWindowForComponents:(id)a0 windowBegin:(long long)a1 windowEnd:(long long)a2;
- (long long)_secondsSinceMidnightForHour:(long long)a0 minute:(long long)a1 second:(long long)a2;
- (double)_secondsUntilInstallationWindowBeginForComponents:(id)a0 targetDateTime:(id)a1;

@end
