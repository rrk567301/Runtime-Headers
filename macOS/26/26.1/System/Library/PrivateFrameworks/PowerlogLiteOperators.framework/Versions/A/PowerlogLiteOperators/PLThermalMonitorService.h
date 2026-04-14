@class PLXPCResponderOperatorComposition, PLEntryNotificationOperatorComposition, PLNSNotificationOperatorComposition, NSDate;

@interface PLThermalMonitorService : PLService

@property (retain) PLEntryNotificationOperatorComposition *smcNotification;
@property (retain) PLXPCResponderOperatorComposition *sysdiagnoseResponder;
@property (retain) PLXPCResponderOperatorComposition *powerHUDResponder;
@property (retain) PLNSNotificationOperatorComposition *thermalNotification;
@property (retain) NSDate *lastSMCThermalTrigger;
@property (retain) NSDate *sustainedStartDate;

+ (void)load;

- (void)initOperatorDependancies;
- (void)performLogging:(id)a0;
- (id)handleSysdiagnoseCallback:(id)a0;
- (void)performLoggingWithCadence:(int)a0 withDate:(id)a1;
- (id)handlePowerHUDCallback:(id)a0;
- (void)handleSMCCallback:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
