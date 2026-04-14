@class NSSet, NSMutableDictionary;

@interface PLAccountingOperator : PLOperator

@property (retain, nonatomic) NSSet *rules;
@property (retain) NSMutableDictionary *ruleIDToPendingJobs;

+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventBackwardDefinitionQualificationEvents;
+ (id)entryEventForwardDefinitions;
+ (id)entryAggregateDefinitionQualificationEnergy;
+ (void)load;
+ (id)entryEventForwardDefinitionDistributionEvents;
+ (id)entryEventNoneDefinitionDistributionRules;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitionPowerEvents;
+ (id)entryEventBackwardDefinitionDistributionEvents;
+ (id)entryEventIntervalDefinitionQualificationEvents;
+ (id)entryEventNoneDefinitionNodes;
+ (id)entryEventPointDefinitionQualificationEvents;
+ (id)entryEventPointDefinitionDistributionEvents;
+ (id)entryEventNoneDefinitionQualificationRules;
+ (id)entryAggregateDefinitionEnergy;
+ (id)entryEventBackwardDefinitionPowerEvents;
+ (id)entryEventForwardDefinitionQualificationEvents;
+ (id)entryEventIntervalDefinitionDistributionEvents;
+ (id)entryEventIntervalDefinitionEnergyEstimateEvents;
+ (id)entryEventIntervalDefinitionPowerEvents;

- (void)initOperatorDependancies;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;
- (void)startAccounting;
- (void)stopAccounting;
- (void).cxx_destruct;
- (id)init;

@end
