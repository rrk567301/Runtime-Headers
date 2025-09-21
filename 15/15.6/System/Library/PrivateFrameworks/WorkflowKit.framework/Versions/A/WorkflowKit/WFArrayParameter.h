@class NSSet;

@interface WFArrayParameter : WFParameter

@property (readonly, nonatomic) char supportsVariables;
@property (readonly, nonatomic) NSSet *allowedValueTypes;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (Class)stateClass;
- (id)defaultSerializedRepresentation;
- (char)allowsMultipleValues;
- (id)defaultSupportedVariableTypes;

@end
