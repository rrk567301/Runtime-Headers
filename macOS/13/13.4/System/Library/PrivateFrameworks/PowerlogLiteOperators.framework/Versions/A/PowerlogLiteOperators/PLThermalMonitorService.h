@class PLXPCResponderOperatorComposition, PLEntryNotificationOperatorComposition;

@interface PLThermalMonitorService : PLService

@property (retain) PLEntryNotificationOperatorComposition *smcNotification;
@property (retain) PLXPCResponderOperatorComposition *sysdiagnoseResponder;

+ (void)load;

- (id)init;
- (void).cxx_destruct;
- (void)initOperatorDependancies;
- (void)performLogging:(id)a0;
- (void)handleSMCCallback:(id)a0;
- (id)handleSysdiagnoseCallback:(id)a0;

@end
