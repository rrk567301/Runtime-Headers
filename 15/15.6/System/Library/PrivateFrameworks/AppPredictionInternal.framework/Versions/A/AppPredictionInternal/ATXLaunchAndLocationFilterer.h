@interface ATXLaunchAndLocationFilterer : NSObject

+ (id)_formattedStringForDate:(id)a0;
+ (char)appBundleIdIsBlacklisted:(id)a0 blacklist:(id)a1;
+ (char)genreIdIsBlacklistedGivenAppBundleId:(id)a0 blacklist:(id)a1;
+ (void)incrementOnDeviceDailySamplesWithCounterKey:(id)a0 date:(id)a1;
+ (char)locationIsStaleOrNotAccurateEnough:(id)a0 now:(id)a1;
+ (char)shouldSampleWithCounterKey:(id)a0 date:(id)a1 samplingRate:(double)a2 maxSamples:(unsigned long long)a3;

@end
