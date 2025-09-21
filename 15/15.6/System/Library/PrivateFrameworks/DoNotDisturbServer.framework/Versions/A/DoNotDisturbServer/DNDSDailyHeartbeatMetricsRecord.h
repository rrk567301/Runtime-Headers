@class NSNumber;

@interface DNDSDailyHeartbeatMetricsRecord : DNDSHeartbeatMetricsRecord

@property (readonly, copy, nonatomic) NSNumber *dayOfWeek;

+ (id)migrateDictionaryRepresentation:(id)a0 fromVersionNumber:(unsigned long long)a1 toVersionNumber:(unsigned long long)a2;
+ (id)newWithDictionaryRepresentation:(id)a0 context:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_initWithRecord:(id)a0;
- (id)_initWithEnabled:(char)a0 manuallyEnabled:(char)a1 numberOfSessions:(id)a2 numberOfManualSessions:(id)a3 enabledFromControlCenterPhone:(char)a4 enabledFromControlCenterWatch:(char)a5 enabledForOneHour:(char)a6 enabledUntilEvening:(char)a7 enabledUntilMorning:(char)a8 enabledAtLocation:(char)a9 enabledDuringEvent:(char)a10 enabledDrivingMode:(char)a11 enabledSleepMode:(char)a12 dayOfWeek:(id)a13;
- (id)dictionaryRepresentationWithContext:(id)a0;

@end
