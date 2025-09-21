@interface GEOAPFuzzers : NSObject

+ (unsigned long long)bucketNavDurationTime:(unsigned long long)a0;
+ (unsigned int)bucket1800:(unsigned int)a0;
+ (unsigned int)bucket21:(unsigned int)a0;
+ (double)dayResolution:(double)a0;
+ (double)fiveMinResolution:(double)a0;
+ (unsigned int)fuzzDailyCount:(unsigned int)a0 forDailyUsageType:(unsigned int)a1;
+ (unsigned int)fuzzMonthlyCount:(unsigned int)a0 forDailyUsageType:(unsigned int)a1;
+ (double)fuzzTime:(double)a0 bySeconds:(unsigned int)a1;
+ (unsigned int)max11:(unsigned int)a0;
+ (unsigned int)max1:(unsigned int)a0;
+ (unsigned int)max2:(unsigned int)a0;
+ (unsigned int)max6:(unsigned int)a0;
+ (id)saltedHashWithSalt:(unsigned long long)a0 value:(id)a1;
+ (id)twoDecimalLocation:(id)a0;

@end
