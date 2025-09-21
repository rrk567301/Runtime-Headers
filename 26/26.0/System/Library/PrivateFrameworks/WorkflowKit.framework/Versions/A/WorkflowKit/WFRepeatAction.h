@class NSString;

@interface WFRepeatAction : WFControlFlowAction

@property (readonly, nonatomic) long long currentIndex;
@property (readonly, nonatomic) unsigned long long numberOfLoops;
@property (readonly, nonatomic) NSString *indexVariableName;

- (id)localizedNameWithContext:(id)a0;
- (void)runWithInput:(id)a0 error:(id *)a1;
- (BOOL)legacyBehaviorIgnoresOutputFromAction:(id)a0 inWorkflow:(id)a1;
- (id)localizedDefaultOutputNameWithContext:(id)a0;
- (BOOL)outputsMultipleItems;
- (id)createAccompanyingActions;
- (BOOL)displaysParameterSummary;
- (BOOL)shouldRepeatWithVariableSource:(id)a0;
- (void)resetEvaluationCriteriaWithVariableSource:(id)a0;

@end
