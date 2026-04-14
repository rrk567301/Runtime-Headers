@interface NFCALogger : NSObject

+ (id)sharedCALogger;
+ (unsigned long long)roundToSignificantDigit:(unsigned long long)a0 forValue:(unsigned long long)a1;
+ (unsigned int)getBatteryPercent;

- (unsigned long long)getTimestamp;
- (void)setRestrictedMode:(BOOL)a0;
- (unsigned int)getDurationFrom:(unsigned long long)a0;
- (BOOL)restrictedMode;
- (void)getCAUniversityCode:(id)a0 universityCodes:(unsigned int *)a1;
- (void)resetCALoadStackExceptionCount;
- (id)getCALoggerUserDefaults;
- (unsigned int)getHardwareTypeForCA:(unsigned int)a0;
- (void)postCAEventFor:(id)a0 eventInput:(id)a1;
- (BOOL)_incrementMiddlewareExceptionCountWithReset:(BOOL)a0;
- (id)generateUUID;
- (void)removeRestrictedMode;
- (id)init;
- (unsigned long long)getMiddlewareExceptionCount;
- (id)generateDailyUUIDForCA;

@end
