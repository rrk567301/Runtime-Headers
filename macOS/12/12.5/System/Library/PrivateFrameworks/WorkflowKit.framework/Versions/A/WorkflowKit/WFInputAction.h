@class NSSet;

@interface WFInputAction : WFAction

@property (retain, nonatomic) NSSet *inputSurfaces;

+ (id)serializedParametersForWorkflow:(id)a0;
+ (id)serializedParametersFromActionSerializedParameters:(id)a0 itemClass:(Class)a1;
+ (id)inputActionForWorkflow:(id)a0;

- (void).cxx_destruct;
- (BOOL)isDeletable;
- (id)minimumSupportedClientVersion;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2;
- (id)noInputBehavior;
- (void)updateWorkflowState;
- (id)selectedInputTypes;
- (id)selectedBehavior;
- (id)selectedAskForType;
- (id)actionSerializedParametersForSelectionOfItemClass:(Class)a0;
- (void)removedFromWorkflow;

@end
