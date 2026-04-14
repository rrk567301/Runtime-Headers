@interface NFCALogger : NSObject

+ (unsigned long long)roundToSignificantDigit:(unsigned long long)a0 forValue:(unsigned long long)a1;
+ (unsigned int)getBatteryPercent;
+ (id)sharedCALogger;

- (unsigned int)getHardwareTypeForCA:(unsigned int)a0;
- (void)setRestrictedMode:(BOOL)a0;
- (id)init;
- (BOOL)_incrementMiddlewareExceptionCountWithReset:(BOOL)a0;
- (void)resetCALoadStackExceptionCount;
- (BOOL)restrictedMode;
- (id)getCALoggerUserDefaults;
- (void)postCAEventFor:(id)a0 eventInput:(id)a1;
- (id)generateUUID;
- (unsigned int)getDurationFrom:(unsigned long long)a0;
- (void)getCAUniversityCode:(id)a0 universityCodes:(unsigned int *)a1;
- (void)removeRestrictedMode;
- (unsigned long long)getTimestamp;
- (unsigned long long)getMiddlewareExceptionCount;
- (id)generateDailyUUIDForCA;

@end
