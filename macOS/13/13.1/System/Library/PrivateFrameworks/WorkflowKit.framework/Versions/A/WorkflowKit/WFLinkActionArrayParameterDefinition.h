@class LNArrayValueType;

@interface WFLinkActionArrayParameterDefinition : WFLinkActionParameterDefinition

@property (readonly, nonatomic) LNArrayValueType *valueType;

- (Class)parameterClass;
- (id)parameterStateFromLinkValue:(id)a0;
- (id)defaultSerializedRepresentationFromParameterMetadataDefaultValue:(id)a0;
- (id)linkValueFromParameterState:(id)a0;
- (void)getLinkValueFromProcessedParameterValue:(id)a0 parameterState:(id)a1 completionHandler:(id /* block */)a2;
- (id)localizedTitleForLinkValue:(id)a0;
- (id)parameterDefinitionDictionary;
- (id)initWithMemberValueType:(id)a0 parameterMetadata:(id)a1;
- (id)linkValueFromProcessedParameterValue:(id)a0;
- (id)memberParameterDefinition;

@end
