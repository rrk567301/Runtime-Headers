@interface NFCALogger : NSObject

+ (id)sharedCALogger;
+ (unsigned int)getBatteryPercent;
+ (unsigned long long)roundToSignificantDigit:(unsigned long long)a0 forValue:(unsigned long long)a1;

- (id)generateUUID;
- (void)setRestrictedMode:(BOOL)a0;
- (void)getCAUniversityCode:(id)a0 universityCodes:(unsigned int *)a1;
- (void)resetCALoadStackExceptionCount;
- (id)getCALoggerUserDefaults;
- (BOOL)_incrementMiddlewareExceptionCountWithReset:(BOOL)a0;
- (id)generateDailyUUIDForCA;
- (BOOL)restrictedMode;
- (unsigned int)getHardwareTypeForCA:(unsigned int)a0;
- (void)postCAEventFor:(id)a0 eventInput:(id)a1;
- (void)removeRestrictedMode;
- (id)init;
- (unsigned int)getDurationFrom:(unsigned long long)a0;
- (unsigned long long)getMiddlewareExceptionCount;
- (unsigned long long)getTimestamp;

@end
