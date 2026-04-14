@class WFControlFlowAttributionTracker;

@interface WFControlFlowAction : WFAction

@property (readonly, nonatomic) long long mode;
@property (weak, nonatomic) WFControlFlowAttributionTracker *controlFlowTracker;
@property (nonatomic, getter=isCollapsed) BOOL collapsed;

- (void).cxx_destruct;
- (BOOL)isDeletable;
- (id)iconName;
- (id)iconImage;
- (id)shortName;
- (BOOL)hasChildren;
- (id)serializedParameters;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2;
- (id)inheritedOutputContentClassesInWorkflow:(id)a0 context:(id)a1;
- (id)outputContentClasses;
- (BOOL)inputPassthrough;
- (id)createAccompanyingActionWithMode:(long long)a0;
- (BOOL)displaysParameterSummary;
- (void)resetEvaluationCriteriaWithVariableSource:(id)a0;
- (void)generateGroupingIdentifierIfNecessary;
- (BOOL)snappingPassthrough;
- (BOOL)inputTypePassthrough;
- (id)outputIconImage;
- (id)groupedOpenAction;
- (id)groupedCloseAction;
- (id)groupedIntermediaryActions;

@end
