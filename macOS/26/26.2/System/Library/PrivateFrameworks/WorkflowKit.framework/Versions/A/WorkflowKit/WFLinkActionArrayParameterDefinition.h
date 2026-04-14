@class NSString, LNArrayValueType;

@interface WFLinkActionArrayParameterDefinition : WFLinkActionParameterDefinition

@property (retain, nonatomic) NSString *actionIdentifier;
@property (readonly, nonatomic) LNArrayValueType *valueType;

- (void).cxx_destruct;
- (Class)parameterClass;
- (id)linkValueFromParameterState:(id)a0 action:(id)a1;
- (id)parameterStateFromLinkValue:(id)a0;
- (id)arraySizeRangeForWidgetFamily:(id)a0 withSizes:(id)a1;
- (id)defaultSerializedRepresentationFromParameterMetadataDefaultValue:(id)a0;
- (void)getLinkValueFromProcessedParameterValue:(id)a0 parameterState:(id)a1 permissionRequestor:(id)a2 runningFromToolKit:(BOOL)a3 action:(id)a4 parameterKey:(id)a5 completionHandler:(id /* block */)a6;
- (id)initWithMemberValueType:(id)a0 parameterMetadata:(id)a1 actionIdentifier:(id)a2;
- (id)linkValueFromProcessedParameterValue:(id)a0;
- (id)localizedTitleForLinkValue:(id)a0;
- (id)memberParameterDefinition;
- (id)parameterDefinitionDictionary;

@end
