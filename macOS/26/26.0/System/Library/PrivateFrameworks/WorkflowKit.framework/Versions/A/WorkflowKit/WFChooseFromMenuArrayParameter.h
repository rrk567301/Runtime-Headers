@interface WFChooseFromMenuArrayParameter : WFArrayParameter

- (Class)stateClass;
- (id)allowedValueTypes;
- (id)rewriteParameterState:(id)a0 withStrings:(id)a1;
- (id)userVisibleStringsInParameterState:(id)a0 forUseCase:(unsigned long long)a1;

@end
