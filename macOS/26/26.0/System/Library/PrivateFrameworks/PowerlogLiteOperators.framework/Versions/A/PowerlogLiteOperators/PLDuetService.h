@class PLDuetServiceDAS, PLDuetServiceImpl, PLDuetServiceLpmSource;

@interface PLDuetService : PLService

@property (readonly) PLDuetServiceLpmSource *lpmSource;
@property (readonly) PLDuetServiceDAS *dasEvent;
@property (readonly) PLDuetServiceImpl *impl;

+ (void)load;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitionBatterySaverMode;
+ (id)eventIntervalDefinitionComplicationEvents;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)aggregateNameDuetEnergyAccumulator;
+ (id)eventIntervalDefinitionDuetEvents;
+ (id)entryEventBackwardDefinitions;
+ (id)entryAggregateDefinitions;

- (void)initOperatorDependancies;
- (void)logEventForwardBatterySaverModeWithState:(BOOL)a0 fromNotification:(id)a1;
- (void)dealloc;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;
- (id)init;
- (void)setupBatterySaverModeForNotification:(id)a0;
- (long long)registrationModeStringToEnum:(id)a0;
- (void).cxx_destruct;
- (void)handleBatterySaverModeToken:(int)a0 withNotification:(id)a1;

@end
