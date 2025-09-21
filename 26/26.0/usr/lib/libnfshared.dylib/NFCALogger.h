@interface NFCALogger : NSObject

+ (unsigned int)getBatteryPercent;
+ (id)sharedCALogger;
+ (unsigned long long)roundToSignificantDigit:(unsigned long long)a0 forValue:(unsigned long long)a1;

- (void)resetCALoadStackExceptionCount;
- (id)generateDailyUUIDForCA;
- (unsigned long long)getTimestamp;
- (BOOL)_incrementMiddlewareExceptionCountWithReset:(BOOL)a0;
- (BOOL)restrictedMode;
- (unsigned int)getDurationFrom:(unsigned long long)a0;
- (id)getCALoggerUserDefaults;
- (id)init;
- (id)generateUUID;
- (unsigned int)getHardwareTypeForCA:(unsigned int)a0;
- (void)setRestrictedMode:(BOOL)a0;
- (void)postCAEventFor:(id)a0 eventInput:(id)a1;
- (unsigned long long)getMiddlewareExceptionCount;
- (void)removeRestrictedMode;
- (void)getCAUniversityCode:(id)a0 universityCodes:(unsigned int *)a1;

@end
