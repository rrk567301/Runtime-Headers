@class PLDuetServiceDAS, PLDuetServiceImpl, PLDuetServiceLpmSource;

@interface PLDuetService : PLService

@property (readonly) PLDuetServiceLpmSource *lpmSource;
@property (readonly) PLDuetServiceDAS *dasEvent;
@property (readonly) PLDuetServiceImpl *impl;

+ (id)entryEventNoneDefinitions;
+ (void)load;
+ (id)entryEventIntervalDefinitions;
+ (id)aggregateNameDuetEnergyAccumulator;
+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)eventIntervalDefinitionDuetEvents;
+ (id)entryEventForwardDefinitionBatterySaverMode;
+ (id)entryEventForwardDefinitions;
+ (id)eventIntervalDefinitionComplicationEvents;

- (long long)registrationModeStringToEnum:(id)a0;
- (id)init;
- (void)initOperatorDependancies;
- (void)handleBatterySaverModeToken:(int)a0 withNotification:(id)a1;
- (void)logEventForwardBatterySaverModeWithState:(BOOL)a0 fromNotification:(id)a1;
- (void).cxx_destruct;
- (void)setupBatterySaverModeForNotification:(id)a0;
- (void)dealloc;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;

@end
