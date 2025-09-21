@class NSNumber, NSString;

@interface DNDSMutableDailyHeartbeatMetricsRecord : DNDSDailyHeartbeatMetricsRecord <DNDSMutableHeartbeatMetricsProtocol>

@property (copy, nonatomic) NSNumber *dayOfWeek;
@property (nonatomic) char enabled;
@property (nonatomic) char manuallyEnabled;
@property (copy, nonatomic) NSNumber *numberOfSessions;
@property (copy, nonatomic) NSNumber *numberOfManualSessions;
@property (nonatomic) char enabledFromControlCenterPhone;
@property (nonatomic) char enabledFromControlCenterWatch;
@property (nonatomic) char enabledForOneHour;
@property (nonatomic) char enabledUntilEvening;
@property (nonatomic) char enabledUntilMorning;
@property (nonatomic) char enabledAtLocation;
@property (nonatomic) char enabledDuringEvent;
@property (nonatomic) char enabledDrivingMode;
@property (nonatomic) char enabledSleepMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setEnabled:(char)a0;
- (void)setDayOfWeek:(id)a0;
- (void)setNumberOfSessions:(id)a0;
- (void)setEnabledAtLocation:(char)a0;
- (void)setEnabledDrivingMode:(char)a0;
- (void)setEnabledDuringEvent:(char)a0;
- (void)setEnabledForOneHour:(char)a0;
- (void)setEnabledFromControlCenterPhone:(char)a0;
- (void)setEnabledFromControlCenterWatch:(char)a0;
- (void)setEnabledSleepMode:(char)a0;
- (void)setEnabledUntilEvening:(char)a0;
- (void)setManuallyEnabled:(char)a0;
- (void)setNumberOfManualSessions:(id)a0;

@end
