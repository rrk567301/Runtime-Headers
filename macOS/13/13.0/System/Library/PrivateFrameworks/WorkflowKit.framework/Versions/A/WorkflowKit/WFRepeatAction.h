@interface WFRepeatAction : WFControlFlowAction

@property (readonly, nonatomic) long long currentIndex;
@property (readonly, nonatomic) unsigned long long numberOfLoops;

- (id)name;
- (void)runWithInput:(id)a0 error:(id *)a1;
- (id)defaultOutputName;
- (id)providedVariableNames;
- (BOOL)outputsMultipleItems;
- (id)createAccompanyingActions;
- (BOOL)displaysParameterSummary;
- (void)resetEvaluationCriteriaWithVariableSource:(id)a0;
- (BOOL)shouldRepeatWithVariableSource:(id)a0;
- (BOOL)ignoresOutputFromAction:(id)a0 inWorkflow:(id)a1;
- (id)indexVariableName;
- (id)indexVariableNameWithScopeLevel:(unsigned long long)a0;
- (id)itemVariableNameWithScopeLevel:(unsigned long long)a0;

@end
