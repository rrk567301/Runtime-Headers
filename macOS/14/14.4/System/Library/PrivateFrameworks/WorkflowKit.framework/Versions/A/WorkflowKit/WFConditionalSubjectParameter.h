@interface WFConditionalSubjectParameter : WFParameter

- (Class)stateClass;
- (id)defaultSupportedVariableTypes;
- (BOOL)allowsMultipleValues;
- (id)importQuestionBehavior;

@end
