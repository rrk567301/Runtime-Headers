@class NSSet, NSMutableDictionary;

@interface PLAccountingOperator : PLOperator

@property (retain, nonatomic) NSSet *rules;
@property (retain) NSMutableDictionary *ruleIDToPendingJobs;

+ (id)entryEventBackwardDefinitions;
+ (id)entryEventBackwardDefinitionQualificationEvents;
+ (id)entryEventNoneDefinitions;
+ (id)entryAggregateDefinitionEnergy;
+ (void)load;
+ (id)entryEventBackwardDefinitionPowerEvents;
+ (id)entryEventPointDefinitionDistributionEvents;
+ (id)entryEventIntervalDefinitionDistributionEvents;
+ (id)entryEventNoneDefinitionDistributionRules;
+ (id)entryEventIntervalDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventIntervalDefinitionDebugEnergyEstimateEvents;
+ (id)entryAggregateDefinitionQualificationEnergy;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitionPowerEvents;
+ (id)entryEventIntervalDefinitionEnergyEstimateEvents;
+ (id)entryEventPointDefinitionQualificationEvents;
+ (id)entryEventBackwardDefinitionDistributionEvents;
+ (id)entryEventForwardDefinitionQualificationEvents;
+ (id)entryEventForwardDefinitionDistributionEvents;
+ (id)entryEventIntervalDefinitionQualificationEvents;
+ (id)entryEventNoneDefinitionNodes;
+ (id)entryEventNoneDefinitionQualificationRules;
+ (id)entryEventIntervalDefinitionPowerEvents;

- (void)initOperatorDependancies;
- (void)startAccounting;
- (void).cxx_destruct;
- (id)init;
- (void)stopAccounting;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;

@end
