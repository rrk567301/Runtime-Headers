@interface WFVariableFieldParameter : WFParameter

- (id)defaultSupportedVariableTypes;
- (Class)singleStateClass;
- (id)importQuestionBehavior;
- (id)rewriteParameterState:(id)a0 withStrings:(id)a1;
- (id)userVisibleStringsInParameterState:(id)a0 forUseCase:(unsigned long long)a1;

@end
