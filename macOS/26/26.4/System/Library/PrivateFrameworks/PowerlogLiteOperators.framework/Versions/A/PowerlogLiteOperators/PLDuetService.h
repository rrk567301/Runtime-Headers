@class PLDuetServiceDAS, PLDuetServiceImpl, PLDuetServiceLpmSource;

@interface PLDuetService : PLService

@property (readonly) PLDuetServiceLpmSource *lpmSource;
@property (readonly) PLDuetServiceDAS *dasEvent;
@property (readonly) PLDuetServiceImpl *impl;

+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (void)load;
+ (id)eventIntervalDefinitionComplicationEvents;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitionBatterySaverMode;
+ (id)entryAggregateDefinitions;
+ (id)eventIntervalDefinitionDuetEvents;
+ (id)entryEventForwardDefinitions;
+ (id)aggregateNameDuetEnergyAccumulator;

- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (void)handleBatterySaverModeToken:(int)a0 withNotification:(id)a1;
- (id)init;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;
- (long long)registrationModeStringToEnum:(id)a0;
- (void)setupBatterySaverModeForNotification:(id)a0;
- (void)logEventForwardBatterySaverModeWithState:(BOOL)a0 fromNotification:(id)a1;
- (void)dealloc;

@end
