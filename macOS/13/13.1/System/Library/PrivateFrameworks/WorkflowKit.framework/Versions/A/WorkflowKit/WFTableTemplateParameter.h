@interface WFTableTemplateParameter : WFParameter

@property (readonly, nonatomic) Class contentItemClass;
@property (readonly, nonatomic, getter=isFilterable) BOOL filterable;
@property (readonly, copy, nonatomic) id additionalRowSerializedRepresentation;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (Class)singleStateClass;
- (id)defaultSerializedRepresentation;
- (id)defaultSupportedVariableTypes;
- (BOOL)allowsMultipleValues;
- (id)importQuestionBehavior;

@end
