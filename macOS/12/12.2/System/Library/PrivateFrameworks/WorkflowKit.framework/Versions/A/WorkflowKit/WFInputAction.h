@class NSSet, WFWorkflow;

@interface WFInputAction : WFAction

@property (nonatomic) WFWorkflow *workflow;
@property (retain, nonatomic) NSSet *inputSurfaces;

+ (id)inputActionForWorkflow:(id)a0;

- (void).cxx_destruct;
- (BOOL)isDeletable;
- (id)minimumSupportedClientVersion;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (id)noInputBehavior;
- (void)updateWorkflowState;
- (void)removedFromWorkflow;
- (id)selectedInputTypes;

@end
