@interface GEOMapItemOpenState : NSObject

+ (unsigned long long)_checkForStateWithStartTime:(double)a0 endtime:(double)a1 compareTimeInSeconds:(double)a2 openingSoonThreshold:(double)a3 closingSoonThreshold:(double)a4 secondsOverMidnightForTomorrow:(double)a5 isTodaysNormalizedHours:(char)a6 tomorrowsHoursBeginAtMidnight:(char)a7;
+ (unsigned long long)_geoMapItemOpeningHoursOptionsForBusinessHours:(id)a0 compareDate:(id)a1 timeZone:(id)a2;
+ (unsigned long long)_geoMapItemOpeningHoursOptionsForNormalizedHours:(id)a0 compareDate:(id)a1 timeZone:(id)a2;

@end
