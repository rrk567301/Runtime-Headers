@interface WFLinkActionBoolParameterDefinition : WFLinkActionParameterDefinition

- (Class)parameterClass;
- (id)falseDisplayName;
- (id)trueDisplayName;
- (id)parameterStateFromLinkValue:(id)a0;
- (id)initWithParameterMetadata:(id)a0;
- (id)linkValueFromParameterState:(id)a0;
- (id)localizedTitleForLinkValue:(id)a0;
- (id)parameterDefinitionDictionary;
- (id)linkValueWithValue:(id)a0;

@end
