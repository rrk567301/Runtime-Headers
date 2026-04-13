@class NSSet, NSMutableDictionary;

@interface PLAccountingOperator : PLOperator

@property (retain, nonatomic) NSSet *rules;
@property (retain) NSMutableDictionary *ruleIDToPendingJobs;

+ (void)load;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventNoneDefinitionNodes;
+ (id)entryEventNoneDefinitionDistributionRules;
+ (id)entryEventNoneDefinitionQualificationRules;
+ (id)entryEventForwardDefinitionPowerEvents;
+ (id)entryEventForwardDefinitionDistributionEvents;
+ (id)entryEventForwardDefinitionQualificationEvents;
+ (id)entryEventBackwardDefinitionPowerEvents;
+ (id)entryEventBackwardDefinitionDistributionEvents;
+ (id)entryEventBackwardDefinitionQualificationEvents;
+ (id)entryEventIntervalDefinitionPowerEvents;
+ (id)entryEventIntervalDefinitionEnergyEstimateEvents;
+ (id)entryEventIntervalDefinitionDistributionEvents;
+ (id)entryEventIntervalDefinitionQualificationEvents;
+ (id)entryEventPointDefinitionDistributionEvents;
+ (id)entryEventPointDefinitionQualificationEvents;
+ (id)entryAggregateDefinitionEnergy;
+ (id)entryAggregateDefinitionQualificationEnergy;

- (id)init;
- (void).cxx_destruct;
- (void)initOperatorDependancies;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;
- (void)startAccounting;
- (void)stopAccounting;

@end
