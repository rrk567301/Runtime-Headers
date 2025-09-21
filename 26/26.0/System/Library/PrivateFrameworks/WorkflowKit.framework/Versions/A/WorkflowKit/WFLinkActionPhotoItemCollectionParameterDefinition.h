@interface WFLinkActionPhotoItemCollectionParameterDefinition : WFLinkActionParameterDefinition

- (Class)parameterClass;
- (id)parameterStateFromLinkValue:(id)a0;
- (void)getLinkValueFromProcessedParameterValue:(id)a0 parameterState:(id)a1 permissionRequestor:(id)a2 runningFromToolKit:(BOOL)a3 action:(id)a4 parameterKey:(id)a5 completionHandler:(id /* block */)a6;
- (id)initWithParameterMetadata:(id)a0;
- (id)linkValueFromParameterState:(id)a0;
- (id)localizedTitleForLinkValue:(id)a0;
- (id)parameterDefinitionDictionary;

@end
