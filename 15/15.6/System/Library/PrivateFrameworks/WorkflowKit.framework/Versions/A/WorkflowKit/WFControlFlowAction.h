@class WFControlFlowAttributionTracker;

@interface WFControlFlowAction : WFAction

@property (readonly, nonatomic) long long mode;
@property (weak, nonatomic) WFControlFlowAttributionTracker *controlFlowTracker;
@property (nonatomic, getter=isCollapsed) char collapsed;

- (void).cxx_destruct;
- (char)isDeletable;
- (id)iconName;
- (id)serializedParameters;
- (char)hasChildren;
- (id)inheritedOutputContentClassesInWorkflow:(id)a0 context:(id)a1;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2;
- (char)inputPassthrough;
- (id)outputContentClasses;
- (id)createAccompanyingActionWithMode:(long long)a0;
- (char)displaysParameterSummary;
- (id)groupedIntermediaryActions;
- (void)generateGroupingIdentifierIfNecessary;
- (id)groupedCloseAction;
- (id)groupedOpenAction;
- (char)inputTypePassthrough;
- (void)resetEvaluationCriteriaWithVariableSource:(id)a0;
- (char)snappingPassthrough;

@end
