@interface WFLinkActionPersonParameterDefinition : WFLinkActionParameterDefinition

- (Class)parameterClass;
- (id)linkValueFromParameterState:(id)a0 action:(id)a1;
- (id)parameterStateFromLinkValue:(id)a0;
- (id)defaultSerializedRepresentationFromParameterMetadataDefaultValues:(id)a0;
- (void)getLinkArrayValuesFromProcessedParameterValue:(id)a0 parameterState:(id)a1 permissionRequestor:(id)a2 completionHandler:(id /* block */)a3;
- (void)getLinkValueFromProcessedParameterValue:(id)a0 parameterState:(id)a1 permissionRequestor:(id)a2 runningFromToolKit:(BOOL)a3 action:(id)a4 parameterKey:(id)a5 completionHandler:(id /* block */)a6;
- (void)getPeopleFromProcessedParameterValue:(id)a0 parameterState:(id)a1 permissionRequestor:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithParameterMetadata:(id)a0;
- (id)localizedTitleForLinkValue:(id)a0;

@end
