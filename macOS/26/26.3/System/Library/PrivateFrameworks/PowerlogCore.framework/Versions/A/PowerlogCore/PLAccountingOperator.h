@class NSSet, NSMutableDictionary;

@interface PLAccountingOperator : PLOperator

@property (retain, nonatomic) NSSet *rules;
@property (retain) NSMutableDictionary *ruleIDToPendingJobs;

+ (id)entryEventBackwardDefinitionDistributionEvents;
+ (id)entryEventNoneDefinitions;
+ (void)load;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventPointDefinitionQualificationEvents;
+ (id)entryEventIntervalDefinitionDistributionEvents;
+ (id)entryEventIntervalDefinitionQualificationEvents;
+ (id)entryEventBackwardDefinitionPowerEvents;
+ (id)entryEventIntervalDefinitionPowerEvents;
+ (id)entryEventForwardDefinitionDistributionEvents;
+ (id)entryAggregateDefinitionQualificationEnergy;
+ (id)entryEventNoneDefinitionQualificationRules;
+ (id)entryEventBackwardDefinitionQualificationEvents;
+ (id)entryAggregateDefinitions;
+ (id)entryAggregateDefinitionEnergy;
+ (id)entryEventNoneDefinitionNodes;
+ (id)entryEventIntervalDefinitionEnergyEstimateEvents;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitionDistributionRules;
+ (id)entryEventForwardDefinitionQualificationEvents;
+ (id)entryEventForwardDefinitionPowerEvents;
+ (id)entryEventPointDefinitionDistributionEvents;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;

- (id)init;
- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (void)startAccounting;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;
- (void)stopAccounting;

@end
