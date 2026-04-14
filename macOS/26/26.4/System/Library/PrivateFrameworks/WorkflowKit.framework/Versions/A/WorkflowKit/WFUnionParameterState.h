@interface WFUnionParameterState : WFVariableSubstitutableParameterState

+ (id)processingValueClasses;
+ (id)serializedRepresentationFromValue:(id)a0;
+ (id)valueFromSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)containedVariables;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;
- (id)initWithWhich:(id)a0 substate:(id)a1;
- (void)processSubstateWithUnionState:(id)a0 unionParameter:(id)a1 context:(id)a2 userInputRequiredHandler:(id /* block */)a3 valueHandler:(id /* block */)a4;

@end
