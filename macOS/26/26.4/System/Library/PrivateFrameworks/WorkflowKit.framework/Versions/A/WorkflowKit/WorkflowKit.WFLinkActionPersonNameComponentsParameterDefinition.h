@interface WorkflowKit.WFLinkActionPersonNameComponentsParameterDefinition : WFLinkActionParameterDefinition

@property (nonatomic, readonly) Class parameterClass;

- (id)linkValueFromParameterState:(id)a0 action:(id)a1;
- (id)parameterStateFromLinkValue:(id)a0;
- (void)getLinkArrayValuesFromProcessedParameterValue:(id)a0 parameterState:(id)a1 permissionRequestor:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithValueType:(id)a0 parameterMetadata:(id)a1;
- (id)linkValueWithValue:(id)a0;

@end
