@interface WFConditionalSubjectParameter : WFParameter

- (Class)stateClass;
- (char)allowsMultipleValues;
- (id)defaultSupportedVariableTypes;
- (id)importQuestionBehavior;
- (id)disallowedVariableTypes;

@end
