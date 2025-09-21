@interface WFRepeatAction : WFControlFlowAction

@property (readonly, nonatomic) long long currentIndex;
@property (readonly, nonatomic) unsigned long long numberOfLoops;

- (id)localizedNameWithContext:(id)a0;
- (void)runWithInput:(id)a0 error:(id *)a1;
- (id)localizedDefaultOutputNameWithContext:(id)a0;
- (char)outputsMultipleItems;
- (id)providedVariableNames;
- (id)createAccompanyingActions;
- (char)displaysParameterSummary;
- (id)itemVariableNameWithScopeLevel:(unsigned long long)a0;
- (char)shouldRepeatWithVariableSource:(id)a0;
- (char)ignoresOutputFromAction:(id)a0 inWorkflow:(id)a1;
- (id)indexVariableName;
- (id)indexVariableNameWithScopeLevel:(unsigned long long)a0;
- (void)resetEvaluationCriteriaWithVariableSource:(id)a0;

@end
