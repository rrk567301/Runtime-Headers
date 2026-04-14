@class NSSet;

@interface WFArrayParameter : WFParameter

@property (readonly, nonatomic) BOOL supportsVariables;
@property (readonly, nonatomic) NSSet *allowedValueTypes;

- (void).cxx_destruct;
- (Class)stateClass;
- (id)initWithDefinition:(id)a0;
- (id)defaultSerializedRepresentation;
- (id)defaultSupportedVariableTypes;
- (BOOL)allowsMultipleValues;

@end
