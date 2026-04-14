@interface GEOAnalyticsPipelineFuzzers : NSObject

+ (double)fuzzTime:(double)a0 bySeconds:(unsigned int)a1;
+ (double)fuzzParkedCarTimestamp:(double)a0;
+ (id)twoDecimalLocation:(id)a0;
+ (double)dayResolution:(double)a0;
+ (unsigned int)max1:(unsigned int)a0;
+ (unsigned int)max6:(unsigned int)a0;
+ (unsigned int)max11:(unsigned int)a0;
+ (unsigned int)bucket21:(unsigned int)a0;
+ (unsigned int)bucket1800:(unsigned int)a0;
+ (unsigned int)fuzzCount:(unsigned int)a0 forDailyUsageType:(unsigned int)a1;

@end
