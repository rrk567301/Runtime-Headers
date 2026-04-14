@class PLDuetServiceDAS, PLDuetServiceImpl, PLDuetServiceLpmSource;

@interface PLDuetService : PLService

@property (readonly) PLDuetServiceLpmSource *lpmSource;
@property (readonly) PLDuetServiceDAS *dasEvent;
@property (readonly) PLDuetServiceImpl *impl;

+ (void)load;
+ (id)entryEventForwardDefinitionBatterySaverMode;
+ (id)entryEventForwardDefinitions;
+ (id)aggregateNameDuetEnergyAccumulator;
+ (id)entryEventBackwardDefinitions;
+ (id)eventIntervalDefinitionDuetEvents;
+ (id)entryEventIntervalDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)eventIntervalDefinitionComplicationEvents;

- (void)initOperatorDependancies;
- (void)logEventForwardBatterySaverModeWithState:(BOOL)a0 fromNotification:(id)a1;
- (void)setupBatterySaverModeForNotification:(id)a0;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;
- (void)handleBatterySaverModeToken:(int)a0 withNotification:(id)a1;
- (long long)registrationModeStringToEnum:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;

@end
