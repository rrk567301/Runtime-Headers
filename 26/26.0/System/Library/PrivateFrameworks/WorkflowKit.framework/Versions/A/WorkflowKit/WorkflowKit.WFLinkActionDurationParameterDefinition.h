@interface WorkflowKit.WFLinkActionDurationParameterDefinition : WFLinkActionParameterDefinition

@property (nonatomic, readonly) Class parameterClass;

- (id)linkValueFromParameterState:(id)a0 action:(id)a1;
- (id)parameterStateFromLinkValue:(id)a0;
- (id)initWithValueType:(id)a0 parameterMetadata:(id)a1;
- (id)linkValueWithValue:(id)a0;

@end
