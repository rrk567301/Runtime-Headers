@class WFLinkMetadata;

@interface WFLinkMetadataParameterState : WFVariableStringParameterState

@property (readonly, nonatomic) WFLinkMetadata *value;

+ (Class)processingValueClass;
+ (id)serializedRepresentationFromValue:(id)a0;
+ (id)valueFromSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;

- (id)initWithValue:(id)a0;
- (void).cxx_destruct;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;

@end
