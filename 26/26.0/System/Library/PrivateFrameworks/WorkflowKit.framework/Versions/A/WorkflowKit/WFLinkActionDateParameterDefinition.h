@interface WFLinkActionDateParameterDefinition : WFLinkActionParameterDefinition

- (Class)parameterClass;
- (id)linkValueFromParameterState:(id)a0 action:(id)a1;
- (id)parameterStateFromLinkValue:(id)a0;
- (id)dateFromStringValue:(id)a0 error:(id *)a1;
- (void)getLinkValueFromProcessedParameterValue:(id)a0 parameterState:(id)a1 permissionRequestor:(id)a2 runningFromToolKit:(BOOL)a3 action:(id)a4 parameterKey:(id)a5 completionHandler:(id /* block */)a6;
- (id)initWithParameterMetadata:(id)a0;
- (id)localizedTitleForLinkValue:(id)a0;
- (id)parameterDefinitionDictionary;

@end
