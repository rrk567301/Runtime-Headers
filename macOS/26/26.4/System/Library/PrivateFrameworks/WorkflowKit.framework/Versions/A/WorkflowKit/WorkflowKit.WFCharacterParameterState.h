@interface WorkflowKit.WFCharacterParameterState : WFVariableStringParameterState

@property (class, nonatomic, readonly) Class processingValueClass;

- (id)initWithVariable:(id)a0;
- (id)init;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (id)initWithVariableString:(id)a0;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;

@end
