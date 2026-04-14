@interface WFMediaItemState : WFVariableSubstitutableParameterState

+ (id)serializedRepresentationFromValue:(id)a0;
+ (id)valueFromSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
+ (id)processingValueClasses;

- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;
- (id)initWithMediaType:(id)a0 persistentID:(id)a1;

@end
