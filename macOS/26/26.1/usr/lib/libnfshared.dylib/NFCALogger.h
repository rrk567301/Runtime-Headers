@interface NFCALogger : NSObject

+ (unsigned int)getBatteryPercent;
+ (id)sharedCALogger;
+ (unsigned long long)roundToSignificantDigit:(unsigned long long)a0 forValue:(unsigned long long)a1;

- (unsigned int)getDurationFrom:(unsigned long long)a0;
- (void)postCAEventFor:(id)a0 eventInput:(id)a1;
- (void)resetCALoadStackExceptionCount;
- (unsigned long long)getMiddlewareExceptionCount;
- (unsigned long long)getTimestamp;
- (void)removeRestrictedMode;
- (unsigned int)getHardwareTypeForCA:(unsigned int)a0;
- (void)getCAUniversityCode:(id)a0 universityCodes:(unsigned int *)a1;
- (void)setRestrictedMode:(BOOL)a0;
- (id)getCALoggerUserDefaults;
- (id)generateDailyUUIDForCA;
- (BOOL)_incrementMiddlewareExceptionCountWithReset:(BOOL)a0;
- (BOOL)restrictedMode;
- (id)generateUUID;
- (id)init;

@end
