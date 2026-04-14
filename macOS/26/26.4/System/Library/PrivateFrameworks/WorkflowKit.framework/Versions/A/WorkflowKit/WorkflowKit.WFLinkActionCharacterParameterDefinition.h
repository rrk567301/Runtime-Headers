@class WFParameterDefinition;

@interface WorkflowKit.WFLinkActionCharacterParameterDefinition : WFLinkActionParameterDefinition

@property (nonatomic, readonly) Class parameterClass;
@property (nonatomic, readonly) WFParameterDefinition *parameterDefinitionDictionary;

- (id)linkValueFromParameterState:(id)a0 action:(id)a1;
- (id)parameterStateFromLinkValue:(id)a0;
- (id)initWithParameterMetadata:(id)a0;
- (id)initWithValueType:(id)a0 parameterMetadata:(id)a1;
- (id)linkValueWithValue:(id)a0;

@end
