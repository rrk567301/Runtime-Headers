@class NSSet, NSMutableDictionary;

@interface PLAccountingOperator : PLOperator

@property (retain, nonatomic) NSSet *rules;
@property (retain) NSMutableDictionary *ruleIDToPendingJobs;

+ (void)load;
+ (id)entryEventForwardDefinitionDistributionEvents;
+ (id)entryEventIntervalDefinitionQualificationEvents;
+ (id)entryEventPointDefinitions;
+ (id)entryEventBackwardDefinitionQualificationEvents;
+ (id)entryEventForwardDefinitions;
+ (id)entryAggregateDefinitionEnergy;
+ (id)entryEventBackwardDefinitionPowerEvents;
+ (id)entryAggregateDefinitionQualificationEnergy;
+ (id)entryEventIntervalDefinitionDistributionEvents;
+ (id)entryEventForwardDefinitionQualificationEvents;
+ (id)entryEventIntervalDefinitionEnergyEstimateEvents;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitionPowerEvents;
+ (id)entryEventNoneDefinitionDistributionRules;
+ (id)entryEventNoneDefinitionQualificationRules;
+ (id)entryEventIntervalDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventPointDefinitionDistributionEvents;
+ (id)entryEventIntervalDefinitionPowerEvents;
+ (id)entryEventNoneDefinitionNodes;
+ (id)entryEventPointDefinitionQualificationEvents;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventBackwardDefinitionDistributionEvents;

- (void)initOperatorDependancies;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;
- (void)stopAccounting;
- (void)startAccounting;
- (void).cxx_destruct;
- (id)init;

@end
