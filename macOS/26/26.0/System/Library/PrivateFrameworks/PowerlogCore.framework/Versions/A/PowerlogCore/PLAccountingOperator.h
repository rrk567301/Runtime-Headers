@class NSSet, NSMutableDictionary;

@interface PLAccountingOperator : PLOperator

@property (retain, nonatomic) NSSet *rules;
@property (retain) NSMutableDictionary *ruleIDToPendingJobs;

+ (void)load;
+ (id)entryEventNoneDefinitionNodes;
+ (id)entryEventForwardDefinitionDistributionEvents;
+ (id)entryEventBackwardDefinitionPowerEvents;
+ (id)entryEventForwardDefinitionQualificationEvents;
+ (id)entryEventPointDefinitionDistributionEvents;
+ (id)entryEventNoneDefinitionQualificationRules;
+ (id)entryEventIntervalDefinitionDistributionEvents;
+ (id)entryEventForwardDefinitionPowerEvents;
+ (id)entryEventPointDefinitionQualificationEvents;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventIntervalDefinitionPowerEvents;
+ (id)entryEventIntervalDefinitionEnergyEstimateEvents;
+ (id)entryEventForwardDefinitions;
+ (id)entryAggregateDefinitionEnergy;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventBackwardDefinitionQualificationEvents;
+ (id)entryAggregateDefinitionQualificationEnergy;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventIntervalDefinitionQualificationEvents;
+ (id)entryEventPointDefinitions;
+ (id)entryEventNoneDefinitionDistributionRules;
+ (id)entryEventBackwardDefinitionDistributionEvents;
+ (id)entryAggregateDefinitions;

- (void)initOperatorDependancies;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;
- (id)init;
- (void)stopAccounting;
- (void)startAccounting;
- (void).cxx_destruct;

@end
