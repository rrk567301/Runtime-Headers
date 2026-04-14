@class PLDuetServiceDAS, PLDuetServiceImpl, PLDuetServiceLpmSource;

@interface PLDuetService : PLService

@property (readonly) PLDuetServiceLpmSource *lpmSource;
@property (readonly) PLDuetServiceDAS *dasEvent;
@property (readonly) PLDuetServiceImpl *impl;

+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)eventIntervalDefinitionDuetEvents;
+ (void)load;
+ (id)entryEventForwardDefinitionBatterySaverMode;
+ (id)aggregateNameDuetEnergyAccumulator;
+ (id)eventIntervalDefinitionComplicationEvents;

- (long long)registrationModeStringToEnum:(id)a0;
- (void)initOperatorDependancies;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;
- (void)logEventForwardBatterySaverModeWithState:(BOOL)a0 fromNotification:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setupBatterySaverModeForNotification:(id)a0;
- (void)handleBatterySaverModeToken:(int)a0 withNotification:(id)a1;
- (void)dealloc;

@end
